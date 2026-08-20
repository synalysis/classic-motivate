module Companion.Types exposing (PhoneToWatch(..), WatchToPhone(..))

{-| Shared messages for the Classic Motivate watchface.
-}


type WatchToPhone
    = RequestSettings


type PhoneToWatch
    = SetMotivationalText String
    | SetWatchDisplaySeconds Int
    | SetQuoteDisplaySeconds Int
