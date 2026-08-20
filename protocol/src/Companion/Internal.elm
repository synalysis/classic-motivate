module Companion.Internal exposing
    ( decodeWatchToPhonePayload
    , encodePhoneToWatch
    , watchToPhoneTag
    , watchToPhoneValue
    )

{-| Generated wire encoding and decoding helpers for companion messages.

This module is derived from `Companion.Types`; edit the protocol types rather
than this file.
-}

import Companion.Types exposing (..)
import Dict exposing (Dict)
import Json.Decode as Decode
import Json.Encode as Encode


decodeListInt : String -> Decode.Decoder (List Int)
decodeListInt prefix =
    Decode.field (prefix ++ "_count") Decode.int
        |> Decode.andThen
            (\wireCount ->
                let
                    count =
                        wireCount - 1
                in
                if count < 0 then
                    Decode.fail "Invalid list count"
                else
                    decodeListIntElements prefix count 0 []
            )


decodeListIntElements : String -> Int -> Int -> List Int -> Decode.Decoder (List Int)
decodeListIntElements prefix remaining index acc =
    if remaining <= 0 then
        Decode.succeed (List.reverse acc)
    else
        Decode.oneOf
            [ Decode.field (prefix ++ "_" ++ String.fromInt index) Decode.int
                |> Decode.map (\wire -> wire - 1)
            , Decode.succeed 0
            ]
            |> Decode.andThen
                (\value ->
                    decodeListIntElements prefix (remaining - 1) (index + 1) (value :: acc)
                )


encodeListInt : String -> List Int -> List ( String, Encode.Value )
encodeListInt prefix list =
    let
        items =
            if List.length list > 16 then
                List.take 16 list
            else
                list
    in
    ( prefix ++ "_count", Encode.int (List.length items + 1) )
        :: List.indexedMap
            (\index value ->
                ( prefix ++ "_" ++ String.fromInt index, Encode.int (value + 1) )
            )
            items


decodeListBy : String -> (String -> Decode.Decoder a) -> Decode.Decoder (List a)
decodeListBy prefix decodeItem =
    Decode.field (prefix ++ "_count") Decode.int
        |> Decode.andThen
            (\wireCount ->
                let
                    count =
                        wireCount - 1
                in
                if count < 0 then
                    Decode.fail "Invalid list count"
                else
                    decodeListByElements prefix decodeItem count 0 []
            )


decodeListByElements : String -> (String -> Decode.Decoder a) -> Int -> Int -> List a -> Decode.Decoder (List a)
decodeListByElements prefix decodeItem remaining index acc =
    if remaining <= 0 then
        Decode.succeed (List.reverse acc)
    else
        decodeItem (prefix ++ "_" ++ String.fromInt index)
            |> Decode.andThen
                (\value ->
                    decodeListByElements prefix decodeItem (remaining - 1) (index + 1) (value :: acc)
                )


encodeListBy : String -> (String -> a -> List ( String, Encode.Value )) -> List a -> List ( String, Encode.Value )
encodeListBy prefix encodeItem list =
    let
        items =
            if List.length list > 16 then
                List.take 16 list
            else
                list
    in
    ( prefix ++ "_count", Encode.int (List.length items + 1) )
        :: (items
                |> List.indexedMap
                    (\index value ->
                        encodeItem (prefix ++ "_" ++ String.fromInt index) value
                    )
                |> List.concat
           )


decodeDictStringBy : String -> (String -> Decode.Decoder a) -> Decode.Decoder (Dict String a)
decodeDictStringBy prefix decodeValue =
    Decode.field (prefix ++ "_count") Decode.int
        |> Decode.andThen
            (\wireCount ->
                let
                    count =
                        wireCount - 1
                in
                if count < 0 then
                    Decode.fail "Invalid dict count"
                else
                    decodeDictStringByElements prefix decodeValue count 0 []
            )


decodeDictStringByElements : String -> (String -> Decode.Decoder a) -> Int -> Int -> List ( String, a ) -> Decode.Decoder (Dict String a)
decodeDictStringByElements prefix decodeValue remaining index acc =
    if remaining <= 0 then
        Decode.succeed (Dict.fromList (List.reverse acc))
    else
        Decode.map2 Tuple.pair
            (Decode.field (prefix ++ "_key_" ++ String.fromInt index) Decode.string)
            (decodeValue (prefix ++ "_val_" ++ String.fromInt index))
            |> Decode.andThen
                (\entry ->
                    decodeDictStringByElements prefix decodeValue (remaining - 1) (index + 1) (entry :: acc)
                )


encodeDictStringBy : String -> (String -> a -> List ( String, Encode.Value )) -> Dict String a -> List ( String, Encode.Value )
encodeDictStringBy prefix encodeValue dict =
    let
        entries =
            Dict.toList dict |> List.take 16
    in
    ( prefix ++ "_count", Encode.int (List.length entries + 1) )
        :: (entries
                |> List.indexedMap
                    (\index ( key, value ) ->
                        ( prefix ++ "_key_" ++ String.fromInt index, Encode.string key )
                            :: encodeValue (prefix ++ "_val_" ++ String.fromInt index) value
                    )
                |> List.concat
           )








decodeWatchToPhonePayload : Decode.Value -> Result String WatchToPhone
decodeWatchToPhonePayload value =
    Decode.decodeValue (Decode.field "message_tag" Decode.int) value
        |> Result.mapError Decode.errorToString
        |> Result.andThen
            (\tag ->
                case tag of
                    2 ->
                        Ok RequestSettings

                    _ ->
                        Err ("Unknown message_tag: " ++ String.fromInt tag)
            )


encodePhoneToWatch : PhoneToWatch -> Encode.Value
encodePhoneToWatch msg =
    case msg of
        SetMotivationalText field1 ->
            Encode.object
                ([ ( "message_tag", Encode.int 201 )
                , ( "set_motivational_text_field1", Encode.string field1 ) ])

        SetWatchDisplaySeconds field1 ->
            Encode.object
                ([ ( "message_tag", Encode.int 202 )
                , ( "set_watch_display_seconds_field1", Encode.int field1 ) ])

        SetQuoteDisplaySeconds field1 ->
            Encode.object
                ([ ( "message_tag", Encode.int 203 )
                , ( "set_quote_display_seconds_field1", Encode.int field1 ) ])


watchToPhoneTag : WatchToPhone -> Int
watchToPhoneTag message =
    case message of
        RequestSettings ->
            2


watchToPhoneValue : WatchToPhone -> Int
watchToPhoneValue message =
    case message of
        RequestSettings ->
            0

