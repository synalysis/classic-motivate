module Pebble.Ui.Resources exposing
    ( AnimatedBitmap(..)
    , AnimatedBitmapInfo
    , AnimatedVector(..)
    , AnimatedVectorInfo
    , Font(..)
    , FontInfo
    , StaticBitmap(..)
    , StaticBitmapInfo
    , StaticVector(..)
    , StaticVectorInfo
    , allAnimatedBitmaps
    , allAnimatedVectors
    , allFonts
    , allStaticBitmaps
    , allStaticVectors
    , animatedBitmapInfo
    , animatedVectorInfo
    , fontInfo
    , staticBitmapInfo
    , staticVectorInfo
    )

{-| Generated from the resources configured on the project settings Resources page.
Edit bitmap, vector, and font assets there instead of editing this read-only file.
-}

type StaticBitmap
    = BitmapStaticBtIcon


allStaticBitmaps : List StaticBitmap
allStaticBitmaps =
    [ BitmapStaticBtIcon ]


type alias StaticBitmapInfo =
    { staticBitmap : StaticBitmap
    , name : String
    , width : Int
    , height : Int
    }

staticBitmapInfo : StaticBitmap -> StaticBitmapInfo
staticBitmapInfo staticBitmap =
    case staticBitmap of
        BitmapStaticBtIcon ->
            { staticBitmap = BitmapStaticBtIcon, name = "BitmapStaticBtIcon", width = 0, height = 0 }



type AnimatedBitmap
    = NoAnimatedBitmap


allAnimatedBitmaps : List AnimatedBitmap
allAnimatedBitmaps =
    [ NoAnimatedBitmap ]


type alias AnimatedBitmapInfo =
    { animatedBitmap : AnimatedBitmap
    , name : String
    , width : Int
    , height : Int
    , frameCount : Int
    , durationMs : Int
    }

animatedBitmapInfo : AnimatedBitmap -> AnimatedBitmapInfo
animatedBitmapInfo animatedBitmap =
    case animatedBitmap of
        NoAnimatedBitmap ->
            { animatedBitmap = NoAnimatedBitmap, name = "NoAnimatedBitmap", width = 0, height = 0, frameCount = 0, durationMs = 0 }


type Font
    = DefaultFont
    | Quote24
    | Quote28
    | Quote42

allFonts : List Font
allFonts =
    [ DefaultFont, Quote24, Quote28, Quote42 ]

type alias FontInfo =
    { font : Font
    , name : String
    , height : Int
    }

fontInfo : Font -> FontInfo
fontInfo font =
    case font of
    DefaultFont ->
        { font = DefaultFont, name = "DefaultFont", height = 14 }

    Quote24 ->
        { font = Quote24, name = "Quote24", height = 24 }

    Quote28 ->
        { font = Quote28, name = "Quote28", height = 28 }

    Quote42 ->
        { font = Quote42, name = "Quote42", height = 42 }



type StaticVector
    = NoStaticVector


allStaticVectors : List StaticVector
allStaticVectors =
    [ NoStaticVector ]


type alias StaticVectorInfo =
    { staticVector : StaticVector
    , name : String
    }

staticVectorInfo : StaticVector -> StaticVectorInfo
staticVectorInfo staticVector =
    case staticVector of
        NoStaticVector ->
            { staticVector = NoStaticVector, name = "NoStaticVector" }


type AnimatedVector
    = NoAnimatedVector


allAnimatedVectors : List AnimatedVector
allAnimatedVectors =
    [ NoAnimatedVector ]


type alias AnimatedVectorInfo =
    { animatedVector : AnimatedVector
    , name : String
    }

animatedVectorInfo : AnimatedVector -> AnimatedVectorInfo
animatedVectorInfo animatedVector =
    case animatedVector of
        NoAnimatedVector ->
            { animatedVector = NoAnimatedVector, name = "NoAnimatedVector" }

