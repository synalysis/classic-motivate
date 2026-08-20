module CompanionPreferences exposing (Settings, defaults, settings)

import Pebble.Companion.Preferences as Preferences


type alias Settings =
    { motivationalText : String
    , watchSeconds : Float
    , quoteSeconds : Float
    }


defaults : Settings
defaults =
    { motivationalText = "Make today count."
    , watchSeconds = 5
    , quoteSeconds = 3
    }


settings : Preferences.Schema Settings
settings =
    Preferences.schema "Classic Motivate" Settings
        |> Preferences.section "Message"
            (\schema ->
                schema
                    |> Preferences.field "motivationalText"
                        (Preferences.text "Motivational text" "Make today count."
                            |> Preferences.sendToWatch "SetMotivationalText"
                        )
            )
        |> Preferences.section "Timing"
            (\schema ->
                schema
                    |> Preferences.field "watchSeconds"
                        (Preferences.slider "Seconds to show the watch"
                            { min = 3
                            , max = 30
                            , step = 1
                            , default = 5
                            }
                            |> Preferences.sendToWatch "SetWatchDisplaySeconds"
                        )
                    |> Preferences.field "quoteSeconds"
                        (Preferences.slider "Seconds to show the message"
                            { min = 3
                            , max = 10
                            , step = 1
                            , default = 3
                            }
                            |> Preferences.sendToWatch "SetQuoteDisplaySeconds"
                        )
            )
