module Pebble.Speaker.Resources exposing
    ( Sample(..)
    , SampleInfo
    , allSamples
    , sampleId
    , sampleInfo
    )


{-| PCM sample uploaded via the IDE Resources panel. -}
type Sample
    = NoSample


{-| Metadata for a speaker PCM resource. -}
type alias SampleInfo =
    { sample : Sample
    , name : String
    , format : Int
    , baseMidiNote : Int
    , loop : Bool
    , numBytes : Int
    }


allSamples : List Sample
allSamples =
    [ NoSample ]



{-| Stable resource index used by the runtime (`0` = synthesized notes only). -}
sampleId : Sample -> Int
sampleId sample =
    case sample of
        NoSample ->
            0


{-| Metadata for a speaker sample constructor. -}
sampleInfo : Sample -> SampleInfo
sampleInfo sample =
    case sample of
        NoSample ->
            { sample = NoSample
            , name = "NoSample"
            , format = 0
            , baseMidiNote = 60
            , loop = False
            , numBytes = 0
            }

