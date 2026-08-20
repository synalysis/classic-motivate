<!-- elm-pebble-ide:readme -->
# Classic Motivate

Analog watchface with a companion-configurable motivational quote that alternates with the clock.


This repository contains an **Elm Pebble** watchface created in the [Elm Pebble IDE](https://elm-pebble.dev).

## Develop and publish

Open the project in the IDE to edit Elm source, run the emulator, capture App Store screenshots, and publish releases:

**https://elm-pebble.dev**

## Repository layout

| Path | Purpose |
|------|---------|
| `src/` | Watch (and related) Elm application source |
| `protocol/`, `phone/` | Companion protocol and phone app (when present) |
| `screenshots/` | Emulator screenshots for App Store listings (per watch platform) |
| `store_assets/` | App Store listing icons configured in Project Settings |

Build artifacts and the local Pebble SDK tree (`.pebble-sdk/`) are not committed to Git; they are reproduced when you build from the IDE.

<!-- /elm-pebble-ide:readme -->
