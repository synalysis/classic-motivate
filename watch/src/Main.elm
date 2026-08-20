module Main exposing (main)

import Companion.Types exposing (PhoneToWatch(..), WatchToPhone(..))
import Companion.Watch as CompanionWatch
import Json.Decode as Decode
import Pebble.Events as PebbleEvents
import Pebble.Platform as PebblePlatform
import Pebble.Storage as PebbleStorage
import Pebble.Time as PebbleTime
import Pebble.Ui as PebbleUi
import Pebble.Ui.Color as PebbleColor
import Pebble.Ui.Resources as UiResources
import Pebble.WatchInfo as WatchInfo


storeWatchSeconds : Int
storeWatchSeconds =
    1


storeQuoteSeconds : Int
storeQuoteSeconds =
    2


storeQuoteText : Int
storeQuoteText =
    3


defaultWatchSeconds : Int
defaultWatchSeconds =
    5


defaultQuoteSeconds : Int
defaultQuoteSeconds =
    3


defaultQuote : String
defaultQuote =
    "Make today count."


type Phase
    = ShowWatch
    | ShowQuote


type alias Point =
    { x : Int
    , y : Int
    }


type alias Rect =
    { x : Int
    , y : Int
    , w : Int
    , h : Int
    }


type alias TickMark =
    { from : Point
    , to : Point
    , width : Int
    }


type alias Hands =
    { hourTo : Point
    , minuteTo : Point
    , secondTo : Point
    , secondTail : Point
    }


{-| One wrapped quote line. Built when the quote or screen changes, not in `view`.
-}
type alias QuoteLine =
    { text : String
    , y : Int
    , h : Int
    }


{-| Screen-stable watch geometry. Built in `init` / `update`, not in `view`.
-}
type alias Layout =
    { center : Point
    , radius : Int
    , bezelInner : Int
    , railRadius : Int
    , hourTicks : List TickMark
    , minuteTicks : List Point
    , dateBox : Rect
    }


type alias Model =
    { screenW : Int
    , screenH : Int
    , displayShape : PebblePlatform.DisplayShape
    , now : Maybe PebbleTime.CurrentDateTime
    , quote : String
    , watchSeconds : Int
    , quoteSeconds : Int
    , phase : Phase
    , remainingSec : Int
    , layout : Layout
    , hands : Maybe Hands
    , dateLabel : String
    , quoteFont : UiResources.Font
    , quoteBox : Rect
    , quoteLines : List QuoteLine
    , caseColor : PebbleColor.Color
    }


type Msg
    = CurrentDateTime PebbleTime.CurrentDateTime
    | SecondChanged Int
    | MinuteChanged Int
    | HourChanged Int
    | FromPhone PhoneToWatch
    | LoadedWatchSeconds Int
    | LoadedQuoteSeconds Int
    | LoadedQuoteText String
    | GotWatchColor WatchInfo.WatchColor


init : PebblePlatform.LaunchContext -> ( Model, Cmd Msg )
init context =
    let
        layout =
            buildLayout context.screen.width context.screen.height context.screen.shape
    in
    ( refreshQuoteLayout
        (refreshDraw
            { screenW = context.screen.width
            , screenH = context.screen.height
            , displayShape = context.screen.shape
            , now = Nothing
            , quote = defaultQuote
            , watchSeconds = defaultWatchSeconds
            , quoteSeconds = defaultQuoteSeconds
            , phase = ShowWatch
            , remainingSec = defaultWatchSeconds
            , layout = layout
            , hands = Nothing
            , dateLabel = ""
            , quoteFont = UiResources.Quote28
            , quoteBox = { x = 0, y = 0, w = 1, h = 1 }
            , quoteLines = []
            , caseColor = WatchInfo.caseColor WatchInfo.UnknownColor
            }
        )
    , Cmd.batch
        [ PebbleTime.currentDateTime CurrentDateTime
        , CompanionWatch.sendWatchToPhone RequestSettings
        , PebbleStorage.readInt storeWatchSeconds LoadedWatchSeconds
        , PebbleStorage.readInt storeQuoteSeconds LoadedQuoteSeconds
        , PebbleStorage.readString storeQuoteText LoadedQuoteText
        , WatchInfo.getColor GotWatchColor
        ]
    )


update : Msg -> Model -> ( Model, Cmd Msg )
update msg model =
    case msg of
        CurrentDateTime value ->
            ( refreshDraw { model | now = Just value }, Cmd.none )

        SecondChanged second ->
            ( refreshAfterTick (tickPhase (setSecond second model)), Cmd.none )

        MinuteChanged minute ->
            ( refreshAfterTick (setMinute minute model), Cmd.none )

        HourChanged _ ->
            ( model, PebbleTime.currentDateTime CurrentDateTime )

        FromPhone message ->
            updateFromPhone message model

        LoadedWatchSeconds stored ->
            ( applyWatchSeconds stored model, Cmd.none )

        LoadedQuoteSeconds stored ->
            ( applyQuoteSeconds stored model, Cmd.none )

        LoadedQuoteText stored ->
            ( applyQuoteText stored model, Cmd.none )

        GotWatchColor color ->
            ( { model | caseColor = WatchInfo.caseColor color }, Cmd.none )


updateFromPhone : PhoneToWatch -> Model -> ( Model, Cmd Msg )
updateFromPhone message model =
    case message of
        SetMotivationalText text ->
            let
                next =
                    normalizeQuote text
            in
            ( applyQuoteText next model, PebbleStorage.writeString storeQuoteText next )

        SetWatchDisplaySeconds seconds ->
            let
                next =
                    clampSeconds seconds defaultWatchSeconds
            in
            ( applyWatchSeconds next model, PebbleStorage.writeInt storeWatchSeconds next )

        SetQuoteDisplaySeconds seconds ->
            let
                next =
                    clampSeconds seconds defaultQuoteSeconds
            in
            ( applyQuoteSeconds next model, PebbleStorage.writeInt storeQuoteSeconds next )


applyWatchSeconds : Int -> Model -> Model
applyWatchSeconds seconds model =
    let
        next =
            clampSeconds seconds defaultWatchSeconds
    in
    refreshRemaining
        { model | watchSeconds = next }


applyQuoteSeconds : Int -> Model -> Model
applyQuoteSeconds seconds model =
    let
        next =
            clampSeconds seconds defaultQuoteSeconds
    in
    refreshRemaining
        { model | quoteSeconds = next }


applyQuoteText : String -> Model -> Model
applyQuoteText text model =
    refreshQuoteLayout { model | quote = normalizeQuote text }


normalizeQuote : String -> String
normalizeQuote text =
    let
        trimmed =
            String.trim text
    in
    if trimmed == "" then
        defaultQuote

    else
        trimmed


clampSeconds : Int -> Int -> Int
clampSeconds value fallback =
    if value < 1 then
        fallback

    else if value > 300 then
        300

    else
        value


refreshRemaining : Model -> Model
refreshRemaining model =
    let
        limit =
            phaseSeconds model
    in
    if model.remainingSec > limit then
        { model | remainingSec = limit }

    else if model.remainingSec < 1 then
        { model | remainingSec = limit }

    else
        model


phaseSeconds : Model -> Int
phaseSeconds model =
    case model.phase of
        ShowWatch ->
            model.watchSeconds

        ShowQuote ->
            model.quoteSeconds


tickPhase : Model -> Model
tickPhase model =
    if model.remainingSec <= 1 then
        case model.phase of
            ShowWatch ->
                { model | phase = ShowQuote, remainingSec = model.quoteSeconds }

            ShowQuote ->
                { model | phase = ShowWatch, remainingSec = model.watchSeconds }

    else
        { model | remainingSec = model.remainingSec - 1 }


setSecond : Int -> Model -> Model
setSecond second model =
    { model | now = updateField (\now -> { now | second = second }) model.now }


setMinute : Int -> Model -> Model
setMinute minute model =
    { model | now = updateField (\now -> { now | minute = minute }) model.now }


updateField : (PebbleTime.CurrentDateTime -> PebbleTime.CurrentDateTime) -> Maybe PebbleTime.CurrentDateTime -> Maybe PebbleTime.CurrentDateTime
updateField fn maybeNow =
    case maybeNow of
        Nothing ->
            Nothing

        Just now ->
            Just (fn now)


refreshDraw : Model -> Model
refreshDraw model =
    case model.now of
        Nothing ->
            { model | hands = Nothing, dateLabel = "" }

        Just now ->
            { model
                | hands = Just (buildHands model.layout now)
                , dateLabel = String.fromInt now.day
            }


refreshAfterTick : Model -> Model
refreshAfterTick model =
    case model.phase of
        ShowWatch ->
            refreshDraw model

        ShowQuote ->
            model


refreshQuoteLayout : Model -> Model
refreshQuoteLayout model =
    let
        font =
            quoteFont model.quote

        bounds =
            quoteBounds model.screenW model.screenH model.displayShape

        height =
            max 14 (UiResources.fontInfo font).height

        charWidth =
            max 6 (height // 2)

        maxChars =
            max 4 (bounds.w // charWidth)

        lines =
            wrapQuoteWords model.quote maxChars
                |> List.indexedMap
                    (\index text ->
                        { text = text
                        , y = bounds.y + index * height
                        , h = height
                        }
                    )
    in
    { model | quoteFont = font, quoteBox = bounds, quoteLines = lines }


subscriptions : Model -> Sub Msg
subscriptions _ =
    PebbleEvents.batch
        [ PebbleEvents.onSecondChange SecondChanged
        , PebbleEvents.onMinuteChange MinuteChanged
        , PebbleEvents.onHourChange HourChanged
        , CompanionWatch.onPhoneToWatch FromPhone
        ]


view : Model -> PebbleUi.UiNode
view model =
    case model.phase of
        ShowWatch ->
            watchOps model.layout model.hands model.dateLabel model.caseColor
                |> PebbleUi.toUiNode

        ShowQuote ->
            quoteOps model
                |> PebbleUi.toUiNode


watchOps : Layout -> Maybe Hands -> String -> PebbleColor.Color -> List PebbleUi.RenderOp
watchOps layout maybeHands dateLabel caseColor =
    faceOps layout caseColor
        ++ List.map hourTickOp layout.hourTicks
        ++ List.map minuteTickOp layout.minuteTicks
        ++ dateOps layout.dateBox dateLabel
        ++ handOps layout.center maybeHands
        ++ [ PebbleUi.fillCircle layout.center 5 PebbleColor.black
           , PebbleUi.fillCircle layout.center 2 PebbleColor.pastelYellow
           ]


quoteOps : Model -> List PebbleUi.RenderOp
quoteOps model =
    [ PebbleUi.clear PebbleColor.pastelYellow
    , PebbleUi.group
        (PebbleUi.context
            [ PebbleUi.textColor PebbleColor.black ]
            (List.map (quoteLineOp model.quoteFont model.quoteBox) model.quoteLines)
        )
    ]


quoteLineOp : UiResources.Font -> Rect -> QuoteLine -> PebbleUi.RenderOp
quoteLineOp font box line =
    PebbleUi.text font
        PebbleUi.defaultTextOptions
        { x = box.x
        , y = line.y
        , w = box.w
        , h = line.h
        }
        line.text


wrapQuoteWords : String -> Int -> List String
wrapQuoteWords quote maxChars =
    quote
        |> String.words
        |> List.foldl (accQuoteWord maxChars) []
        |> List.reverse


accQuoteWord : Int -> String -> List String -> List String
accQuoteWord maxChars word lines =
    case lines of
        [] ->
            [ word ]

        current :: rest ->
            if String.length current + 1 + String.length word <= maxChars then
                (current ++ " " ++ word) :: rest

            else
                word :: lines


{-| Larger face for shorter quotes. Keep 28px and below so three wrapped
lines still fit the inset round rect (42px leading clips the last line).
-}
quoteFont : String -> UiResources.Font
quoteFont quote =
    let
        n =
            String.length quote
    in
    if n <= 36 then
        UiResources.Quote28

    else
        UiResources.Quote24


quoteBounds : Int -> Int -> PebblePlatform.DisplayShape -> Rect
quoteBounds screenW screenH displayShape =
    let
        inset =
            if PebblePlatform.displayShapeIsRound displayShape then
                max 22 (screenW // 6)

            else
                10
    in
    { x = inset
    , y = inset
    , w = max 48 (screenW - (inset * 2))
    , h = max 48 (screenH - (inset * 2))
    }


faceOps : Layout -> PebbleColor.Color -> List PebbleUi.RenderOp
faceOps layout caseColor =
    [ PebbleUi.clear caseColor
    , PebbleUi.fillCircle layout.center layout.radius PebbleColor.pastelYellow
    , PebbleUi.circle layout.center layout.radius PebbleColor.black
    , PebbleUi.circle layout.center layout.bezelInner PebbleColor.black
    , PebbleUi.circle layout.center layout.railRadius PebbleColor.black
    ]


hourTickOp : TickMark -> PebbleUi.RenderOp
hourTickOp tick =
    PebbleUi.group
        (PebbleUi.context
            [ PebbleUi.strokeColor PebbleColor.black
            , PebbleUi.strokeWidth tick.width
            ]
            [ PebbleUi.line tick.from tick.to PebbleColor.black ]
        )


minuteTickOp : Point -> PebbleUi.RenderOp
minuteTickOp point =
    PebbleUi.pixel point PebbleColor.black


dateOps : Rect -> String -> List PebbleUi.RenderOp
dateOps box dateLabel =
    if dateLabel == "" then
        []

    else
        [ PebbleUi.rect box PebbleColor.black
        , PebbleUi.group
            (PebbleUi.context
                [ PebbleUi.textColor PebbleColor.black ]
                [ PebbleUi.text UiResources.DefaultFont
                    (PebbleUi.alignCenter PebbleUi.defaultTextOptions)
                    box
                    dateLabel
                ]
            )
        ]


handOps : Point -> Maybe Hands -> List PebbleUi.RenderOp
handOps center maybeHands =
    case maybeHands of
        Nothing ->
            []

        Just hands ->
            [ strokeLine center hands.hourTo 4 PebbleColor.black
            , strokeLine center hands.minuteTo 2 PebbleColor.black
            , PebbleUi.group
                (PebbleUi.context
                    [ PebbleUi.strokeColor PebbleColor.folly
                    , PebbleUi.strokeWidth 1
                    ]
                    [ PebbleUi.line center hands.secondTo PebbleColor.folly
                    , PebbleUi.line center hands.secondTail PebbleColor.folly
                    ]
                )
            ]


strokeLine : Point -> Point -> Int -> PebbleColor.Color -> PebbleUi.RenderOp
strokeLine from to width color =
    PebbleUi.group
        (PebbleUi.context
            [ PebbleUi.strokeColor color
            , PebbleUi.strokeWidth width
            ]
            [ PebbleUi.line from to color ]
        )


buildLayout : Int -> Int -> PebblePlatform.DisplayShape -> Layout
buildLayout screenW screenH displayShape =
    let
        centerX =
            screenW // 2

        centerY =
            screenH // 2

        center =
            { x = centerX, y = centerY }

        -- Keep 1px so the stroked outer circle is not clipped at the last column.
        edgePad =
            if PebblePlatform.displayShapeIsRound displayShape then
                3

            else
                1

        radius =
            max 28 ((min screenW screenH // 2) - edgePad)

        boxW =
            22

        boxH =
            16
    in
    { center = center
    , radius = radius
    , bezelInner = radius - 3
    , railRadius = max 16 (radius - 18)
    , hourTicks = List.map (hourTick center radius) hourTickIndexes
    , minuteTicks = List.map (minuteTick center radius) minuteTickIndexes
    , dateBox =
        { x = centerX + ((radius * 42) // 100) - (boxW // 2)
        , y = centerY - (boxH // 2)
        , w = boxW
        , h = boxH
        }
    }


buildHands : Layout -> PebbleTime.CurrentDateTime -> Hands
buildHands layout now =
    let
        hourIndex =
            modBy 60 ((modBy 12 now.hour) * 5 + (now.minute // 12))

        minuteIndex =
            modBy 60 now.minute

        secondIndex =
            modBy 60 now.second

        hourLen =
            (layout.radius * 54) // 100

        minuteLen =
            (layout.radius * 78) // 100

        secondLen =
            (layout.radius * 84) // 100

        secondTail =
            (layout.radius * 18) // 100
    in
    { hourTo = handPoint layout.center hourLen hourIndex
    , minuteTo = handPoint layout.center minuteLen minuteIndex
    , secondTo = handPoint layout.center secondLen secondIndex
    , secondTail = handPoint layout.center secondTail (secondIndex + 30)
    }


hourTickIndexes : List Int
hourTickIndexes =
    [ 0, 5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55 ]


minuteTickIndexes : List Int
minuteTickIndexes =
    List.filter (\index -> modBy 5 index /= 0) (List.range 0 59)


hourTick : Point -> Int -> Int -> TickMark
hourTick center radius index =
    let
        outer =
            radius - 5

        inner =
            if isCardinal index then
                radius - 16

            else
                radius - 11

        width =
            if isCardinal index then
                3

            else
                2
    in
    { from = handPoint center inner index
    , to = handPoint center outer index
    , width = width
    }


minuteTick : Point -> Int -> Int -> Point
minuteTick center radius index =
    handPoint center (radius - 7) index


isCardinal : Int -> Bool
isCardinal index =
    index == 0 || index == 15 || index == 30 || index == 45


handPoint : Point -> Int -> Int -> Point
handPoint center length index =
    let
        ( unitX, unitY ) =
            unit60 index
    in
    { x = center.x + (unitX * length) // 1000
    , y = center.y + (unitY * length) // 1000
    }


unit60 : Int -> ( Int, Int )
unit60 index =
    case modBy 60 index of
        0 ->
            ( 0, -1000 )

        1 ->
            ( 105, -995 )

        2 ->
            ( 208, -978 )

        3 ->
            ( 309, -951 )

        4 ->
            ( 407, -914 )

        5 ->
            ( 500, -866 )

        6 ->
            ( 588, -809 )

        7 ->
            ( 669, -743 )

        8 ->
            ( 743, -669 )

        9 ->
            ( 809, -588 )

        10 ->
            ( 866, -500 )

        11 ->
            ( 914, -407 )

        12 ->
            ( 951, -309 )

        13 ->
            ( 978, -208 )

        14 ->
            ( 995, -105 )

        15 ->
            ( 1000, 0 )

        16 ->
            ( 995, 105 )

        17 ->
            ( 978, 208 )

        18 ->
            ( 951, 309 )

        19 ->
            ( 914, 407 )

        20 ->
            ( 866, 500 )

        21 ->
            ( 809, 588 )

        22 ->
            ( 743, 669 )

        23 ->
            ( 669, 743 )

        24 ->
            ( 588, 809 )

        25 ->
            ( 500, 866 )

        26 ->
            ( 407, 914 )

        27 ->
            ( 309, 951 )

        28 ->
            ( 208, 978 )

        29 ->
            ( 105, 995 )

        30 ->
            ( 0, 1000 )

        31 ->
            ( -105, 995 )

        32 ->
            ( -208, 978 )

        33 ->
            ( -309, 951 )

        34 ->
            ( -407, 914 )

        35 ->
            ( -500, 866 )

        36 ->
            ( -588, 809 )

        37 ->
            ( -669, 743 )

        38 ->
            ( -743, 669 )

        39 ->
            ( -809, 588 )

        40 ->
            ( -866, 500 )

        41 ->
            ( -914, 407 )

        42 ->
            ( -951, 309 )

        43 ->
            ( -978, 208 )

        44 ->
            ( -995, 105 )

        45 ->
            ( -1000, 0 )

        46 ->
            ( -995, -105 )

        47 ->
            ( -978, -208 )

        48 ->
            ( -951, -309 )

        49 ->
            ( -914, -407 )

        50 ->
            ( -866, -500 )

        51 ->
            ( -809, -588 )

        52 ->
            ( -743, -669 )

        53 ->
            ( -669, -743 )

        54 ->
            ( -588, -809 )

        55 ->
            ( -500, -866 )

        56 ->
            ( -407, -914 )

        57 ->
            ( -309, -951 )

        58 ->
            ( -208, -978 )

        _ ->
            ( -105, -995 )


main : Program Decode.Value Model Msg
main =
    PebblePlatform.watchface
        { init = init
        , update = update
        , view = view
        , subscriptions = subscriptions
        }
