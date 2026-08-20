#include "elmc_generated.h"
#include "elmc_pebble.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#if defined(__GNUC__)
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wunused-variable"
#endif

#define ELMC_UNION_BLUE 9
#define ELMC_UNION_BRASS 5
#define ELMC_UNION_BURGUNDY 8
#define ELMC_UNION_COMPANION_TYPES_BLACK 4
#define ELMC_UNION_COMPANION_TYPES_BRASS 5
#define ELMC_UNION_COMPANION_TYPES_BURGUNDY 8
#define ELMC_UNION_COMPANION_TYPES_CREAM 2
#define ELMC_UNION_COMPANION_TYPES_MAGENTA 9
#define ELMC_UNION_COMPANION_TYPES_NAVY 6
#define ELMC_UNION_COMPANION_TYPES_SETMOTIVATIONALTEXT 1
#define ELMC_UNION_COMPANION_TYPES_SETQUOTEBACKGROUND 6
#define ELMC_UNION_COMPANION_TYPES_SETQUOTEDISPLAYSECONDS 3
#define ELMC_UNION_COMPANION_TYPES_SETQUOTETEXTCOLOR 7
#define ELMC_UNION_COMPANION_TYPES_SETWATCHBACKGROUND 4
#define ELMC_UNION_COMPANION_TYPES_SETWATCHDISPLAYSECONDS 2
#define ELMC_UNION_COMPANION_TYPES_SETWATCHFOREGROUND 5
#define ELMC_UNION_COMPANION_TYPES_SLATE 7
#define ELMC_UNION_COMPANION_TYPES_WATCHBODY 1
#define ELMC_UNION_COMPANION_TYPES_WHITE 3
#define ELMC_UNION_COREDEVICESP2DBLACK 33
#define ELMC_UNION_COREDEVICESP2DWHITE 34
#define ELMC_UNION_COREDEVICESPR2BLACK20 39
#define ELMC_UNION_COREDEVICESPR2GOLD14 41
#define ELMC_UNION_COREDEVICESPR2SILVER14 42
#define ELMC_UNION_COREDEVICESPR2SILVER20 40
#define ELMC_UNION_COREDEVICESPT2BLACKGREY 35
#define ELMC_UNION_COREDEVICESPT2BLACKRED 36
#define ELMC_UNION_COREDEVICESPT2SILVERBLUE 37
#define ELMC_UNION_COREDEVICESPT2SILVERGREY 38
#define ELMC_UNION_CREAM 2
#define ELMC_UNION_CURRENTDATETIME 1
#define ELMC_UNION_DEFAULTFONT 1
#define ELMC_UNION_DICT_BLACK 2
#define ELMC_UNION_DICT_RED 1
#define ELMC_UNION_FROMPHONE 5
#define ELMC_UNION_GOTWATCHCOLOR 13
#define ELMC_UNION_GRAY 6
#define ELMC_UNION_GREEN 10
#define ELMC_UNION_HOURCHANGED 4
#define ELMC_UNION_JUST 1
#define ELMC_UNION_LOADEDQUOTEBACKGROUND 11
#define ELMC_UNION_LOADEDQUOTESECONDS 7
#define ELMC_UNION_LOADEDQUOTETEXT 8
#define ELMC_UNION_LOADEDQUOTETEXTCOLOR 12
#define ELMC_UNION_LOADEDWATCHBACKGROUND 9
#define ELMC_UNION_LOADEDWATCHFOREGROUND 10
#define ELMC_UNION_LOADEDWATCHSECONDS 6
#define ELMC_UNION_MAGENTA 9
#define ELMC_UNION_MAIN_CURRENTDATETIME 1
#define ELMC_UNION_MAIN_FROMPHONE 5
#define ELMC_UNION_MAIN_GOTWATCHCOLOR 13
#define ELMC_UNION_MAIN_HOURCHANGED 4
#define ELMC_UNION_MAIN_LOADEDQUOTEBACKGROUND 11
#define ELMC_UNION_MAIN_LOADEDQUOTESECONDS 7
#define ELMC_UNION_MAIN_LOADEDQUOTETEXT 8
#define ELMC_UNION_MAIN_LOADEDQUOTETEXTCOLOR 12
#define ELMC_UNION_MAIN_LOADEDWATCHBACKGROUND 9
#define ELMC_UNION_MAIN_LOADEDWATCHFOREGROUND 10
#define ELMC_UNION_MAIN_LOADEDWATCHSECONDS 6
#define ELMC_UNION_MAIN_MINUTECHANGED 3
#define ELMC_UNION_MAIN_SECONDCHANGED 2
#define ELMC_UNION_MAIN_SHOWQUOTE 2
#define ELMC_UNION_MAIN_SHOWWATCH 1
#define ELMC_UNION_MATTEBLACK 8
#define ELMC_UNION_MAYBE_JUST 1
#define ELMC_UNION_MAYBE_NOTHING 2
#define ELMC_UNION_MINUTECHANGED 3
#define ELMC_UNION_NAVY 6
#define ELMC_UNION_NOTHING 2
#define ELMC_UNION_ORANGE 5
#define ELMC_UNION_PEBBLE_UI_RESOURCES_DEFAULTFONT 1
#define ELMC_UNION_PEBBLE_UI_RESOURCES_QUOTE24 2
#define ELMC_UNION_PEBBLE_UI_RESOURCES_QUOTE28 3
#define ELMC_UNION_PEBBLE_UI_RESOURCES_QUOTE42 4
#define ELMC_UNION_PEBBLE_UI_ROTATION 1
#define ELMC_UNION_PEBBLE_WATCHINFO_BLACK 2
#define ELMC_UNION_PEBBLE_WATCHINFO_BLUE 9
#define ELMC_UNION_PEBBLE_WATCHINFO_COREDEVICESP2DBLACK 33
#define ELMC_UNION_PEBBLE_WATCHINFO_COREDEVICESP2DWHITE 34
#define ELMC_UNION_PEBBLE_WATCHINFO_COREDEVICESPR2BLACK20 39
#define ELMC_UNION_PEBBLE_WATCHINFO_COREDEVICESPR2GOLD14 41
#define ELMC_UNION_PEBBLE_WATCHINFO_COREDEVICESPR2SILVER14 42
#define ELMC_UNION_PEBBLE_WATCHINFO_COREDEVICESPR2SILVER20 40
#define ELMC_UNION_PEBBLE_WATCHINFO_COREDEVICESPT2BLACKGREY 35
#define ELMC_UNION_PEBBLE_WATCHINFO_COREDEVICESPT2BLACKRED 36
#define ELMC_UNION_PEBBLE_WATCHINFO_COREDEVICESPT2SILVERBLUE 37
#define ELMC_UNION_PEBBLE_WATCHINFO_COREDEVICESPT2SILVERGREY 38
#define ELMC_UNION_PEBBLE_WATCHINFO_GRAY 6
#define ELMC_UNION_PEBBLE_WATCHINFO_GREEN 10
#define ELMC_UNION_PEBBLE_WATCHINFO_MATTEBLACK 8
#define ELMC_UNION_PEBBLE_WATCHINFO_ORANGE 5
#define ELMC_UNION_PEBBLE_WATCHINFO_PEBBLE2HRAQUA 27
#define ELMC_UNION_PEBBLE_WATCHINFO_PEBBLE2HRBLACK 23
#define ELMC_UNION_PEBBLE_WATCHINFO_PEBBLE2HRFLAME 25
#define ELMC_UNION_PEBBLE_WATCHINFO_PEBBLE2HRLIME 24
#define ELMC_UNION_PEBBLE_WATCHINFO_PEBBLE2HRWHITE 26
#define ELMC_UNION_PEBBLE_WATCHINFO_PEBBLE2SEBLACK 28
#define ELMC_UNION_PEBBLE_WATCHINFO_PEBBLE2SEWHITE 29
#define ELMC_UNION_PEBBLE_WATCHINFO_PEBBLETIME2BLACK 30
#define ELMC_UNION_PEBBLE_WATCHINFO_PEBBLETIME2GOLD 32
#define ELMC_UNION_PEBBLE_WATCHINFO_PEBBLETIME2SILVER 31
#define ELMC_UNION_PEBBLE_WATCHINFO_PINK 11
#define ELMC_UNION_PEBBLE_WATCHINFO_RED 4
#define ELMC_UNION_PEBBLE_WATCHINFO_STAINLESSSTEEL 7
#define ELMC_UNION_PEBBLE_WATCHINFO_TIMEBLACK 13
#define ELMC_UNION_PEBBLE_WATCHINFO_TIMERED 14
#define ELMC_UNION_PEBBLE_WATCHINFO_TIMEROUNDBLACK14 19
#define ELMC_UNION_PEBBLE_WATCHINFO_TIMEROUNDBLACK20 21
#define ELMC_UNION_PEBBLE_WATCHINFO_TIMEROUNDROSEGOLD14 22
#define ELMC_UNION_PEBBLE_WATCHINFO_TIMEROUNDSILVER14 18
#define ELMC_UNION_PEBBLE_WATCHINFO_TIMEROUNDSILVER20 20
#define ELMC_UNION_PEBBLE_WATCHINFO_TIMESTEELBLACK 16
#define ELMC_UNION_PEBBLE_WATCHINFO_TIMESTEELGOLD 17
#define ELMC_UNION_PEBBLE_WATCHINFO_TIMESTEELSILVER 15
#define ELMC_UNION_PEBBLE_WATCHINFO_TIMEWHITE 12
#define ELMC_UNION_PEBBLE_WATCHINFO_UNKNOWNCOLOR 1
#define ELMC_UNION_PEBBLE_WATCHINFO_WHITE 3
#define ELMC_UNION_PEBBLE2HRAQUA 27
#define ELMC_UNION_PEBBLE2HRBLACK 23
#define ELMC_UNION_PEBBLE2HRFLAME 25
#define ELMC_UNION_PEBBLE2HRLIME 24
#define ELMC_UNION_PEBBLE2HRWHITE 26
#define ELMC_UNION_PEBBLE2SEBLACK 28
#define ELMC_UNION_PEBBLE2SEWHITE 29
#define ELMC_UNION_PEBBLETIME2BLACK 30
#define ELMC_UNION_PEBBLETIME2GOLD 32
#define ELMC_UNION_PEBBLETIME2SILVER 31
#define ELMC_UNION_PINK 11
#define ELMC_UNION_QUOTE24 2
#define ELMC_UNION_QUOTE28 3
#define ELMC_UNION_QUOTE42 4
#define ELMC_UNION_ROTATION 1
#define ELMC_UNION_SECONDCHANGED 2
#define ELMC_UNION_SETMOTIVATIONALTEXT 1
#define ELMC_UNION_SETQUOTEBACKGROUND 6
#define ELMC_UNION_SETQUOTEDISPLAYSECONDS 3
#define ELMC_UNION_SETQUOTETEXTCOLOR 7
#define ELMC_UNION_SETWATCHBACKGROUND 4
#define ELMC_UNION_SETWATCHDISPLAYSECONDS 2
#define ELMC_UNION_SETWATCHFOREGROUND 5
#define ELMC_UNION_SHOWQUOTE 2
#define ELMC_UNION_SHOWWATCH 1
#define ELMC_UNION_SLATE 7
#define ELMC_UNION_STAINLESSSTEEL 7
#define ELMC_UNION_TIMEBLACK 13
#define ELMC_UNION_TIMERED 14
#define ELMC_UNION_TIMEROUNDBLACK14 19
#define ELMC_UNION_TIMEROUNDBLACK20 21
#define ELMC_UNION_TIMEROUNDROSEGOLD14 22
#define ELMC_UNION_TIMEROUNDSILVER14 18
#define ELMC_UNION_TIMEROUNDSILVER20 20
#define ELMC_UNION_TIMESTEELBLACK 16
#define ELMC_UNION_TIMESTEELGOLD 17
#define ELMC_UNION_TIMESTEELSILVER 15
#define ELMC_UNION_TIMEWHITE 12
#define ELMC_UNION_UNKNOWNCOLOR 1
#define ELMC_UNION_WATCHBODY 1

const char *elmc_debug_union_ctor_name(elmc_int_t tag) {
  (void)tag;
  return NULL;
}

enum {
  ELMC_FIELD_MAIN_HANDS_HOURTO = 0,
  ELMC_FIELD_MAIN_HANDS_MINUTETO = 1,
  ELMC_FIELD_MAIN_HANDS_SECONDTAIL = 3,
  ELMC_FIELD_MAIN_HANDS_SECONDTO = 2,
  ELMC_FIELD_MAIN_LAYOUT_BEZELINNER = 2,
  ELMC_FIELD_MAIN_LAYOUT_CENTER = 0,
  ELMC_FIELD_MAIN_LAYOUT_DATEBOX = 6,
  ELMC_FIELD_MAIN_LAYOUT_HOURTICKS = 4,
  ELMC_FIELD_MAIN_LAYOUT_MINUTETICKS = 5,
  ELMC_FIELD_MAIN_LAYOUT_RADIUS = 1,
  ELMC_FIELD_MAIN_LAYOUT_RAILRADIUS = 3,
  ELMC_FIELD_MAIN_MODEL_CASECOLOR = 16,
  ELMC_FIELD_MAIN_MODEL_COLORMODE = 3,
  ELMC_FIELD_MAIN_MODEL_DATELABEL = 12,
  ELMC_FIELD_MAIN_MODEL_DISPLAYSHAPE = 2,
  ELMC_FIELD_MAIN_MODEL_HANDS = 11,
  ELMC_FIELD_MAIN_MODEL_LAYOUT = 10,
  ELMC_FIELD_MAIN_MODEL_NOW = 4,
  ELMC_FIELD_MAIN_MODEL_PHASE = 8,
  ELMC_FIELD_MAIN_MODEL_QUOTE = 5,
  ELMC_FIELD_MAIN_MODEL_QUOTEBACKGROUND = 19,
  ELMC_FIELD_MAIN_MODEL_QUOTEBOX = 14,
  ELMC_FIELD_MAIN_MODEL_QUOTEFONT = 13,
  ELMC_FIELD_MAIN_MODEL_QUOTELINES = 15,
  ELMC_FIELD_MAIN_MODEL_QUOTESECONDS = 7,
  ELMC_FIELD_MAIN_MODEL_QUOTETEXT = 20,
  ELMC_FIELD_MAIN_MODEL_REMAININGSEC = 9,
  ELMC_FIELD_MAIN_MODEL_SCREENH = 1,
  ELMC_FIELD_MAIN_MODEL_SCREENW = 0,
  ELMC_FIELD_MAIN_MODEL_WATCHBACKGROUND = 17,
  ELMC_FIELD_MAIN_MODEL_WATCHFOREGROUND = 18,
  ELMC_FIELD_MAIN_MODEL_WATCHSECONDS = 6,
  ELMC_FIELD_MAIN_POINT_X = 0,
  ELMC_FIELD_MAIN_POINT_Y = 1,
  ELMC_FIELD_MAIN_QUOTELINE_H = 2,
  ELMC_FIELD_MAIN_QUOTELINE_TEXT = 0,
  ELMC_FIELD_MAIN_QUOTELINE_Y = 1,
  ELMC_FIELD_MAIN_RECT_H = 3,
  ELMC_FIELD_MAIN_RECT_W = 2,
  ELMC_FIELD_MAIN_RECT_X = 0,
  ELMC_FIELD_MAIN_RECT_Y = 1,
  ELMC_FIELD_MAIN_TICKMARK_FROM = 0,
  ELMC_FIELD_MAIN_TICKMARK_TO = 1,
  ELMC_FIELD_MAIN_TICKMARK_WIDTH = 2,
  ELMC_FIELD_PEBBLE_ACCEL_SAMPLE_X = 0,
  ELMC_FIELD_PEBBLE_ACCEL_SAMPLE_Y = 1,
  ELMC_FIELD_PEBBLE_CMD_CURRENTDATETIME_DAY = 2,
  ELMC_FIELD_PEBBLE_CMD_CURRENTDATETIME_HOUR = 4,
  ELMC_FIELD_PEBBLE_CMD_CURRENTDATETIME_MINUTE = 5,
  ELMC_FIELD_PEBBLE_CMD_CURRENTDATETIME_SECOND = 6,
  ELMC_FIELD_PEBBLE_GAME_COLLISION_CIRCLE_X = 0,
  ELMC_FIELD_PEBBLE_GAME_COLLISION_CIRCLE_Y = 1,
  ELMC_FIELD_PEBBLE_GAME_COLLISION_RECT_H = 3,
  ELMC_FIELD_PEBBLE_GAME_COLLISION_RECT_W = 2,
  ELMC_FIELD_PEBBLE_GAME_COLLISION_RECT_X = 0,
  ELMC_FIELD_PEBBLE_GAME_COLLISION_RECT_Y = 1,
  ELMC_FIELD_PEBBLE_GAME_MATH_VEC2_X = 0,
  ELMC_FIELD_PEBBLE_GAME_MATH_VEC2_Y = 1,
  ELMC_FIELD_PEBBLE_GAME_SPRITE_SPRITE_H = 4,
  ELMC_FIELD_PEBBLE_GAME_SPRITE_SPRITE_W = 3,
  ELMC_FIELD_PEBBLE_GAME_SPRITE_SPRITE_X = 1,
  ELMC_FIELD_PEBBLE_GAME_SPRITE_SPRITE_Y = 2,
  ELMC_FIELD_PEBBLE_PLATFORM_LAUNCHCONTEXT_SCREEN = 3,
  ELMC_FIELD_PEBBLE_PLATFORM_LAUNCHSCREEN_COLORMODE = 3,
  ELMC_FIELD_PEBBLE_PLATFORM_LAUNCHSCREEN_HEIGHT = 1,
  ELMC_FIELD_PEBBLE_PLATFORM_LAUNCHSCREEN_SHAPE = 2,
  ELMC_FIELD_PEBBLE_PLATFORM_LAUNCHSCREEN_WIDTH = 0,
  ELMC_FIELD_PEBBLE_SPEAKER_RESOURCES_SAMPLEINFO_NAME = 1,
  ELMC_FIELD_PEBBLE_TIME_CURRENTDATETIME_DAY = 2,
  ELMC_FIELD_PEBBLE_TIME_CURRENTDATETIME_HOUR = 4,
  ELMC_FIELD_PEBBLE_TIME_CURRENTDATETIME_MINUTE = 5,
  ELMC_FIELD_PEBBLE_TIME_CURRENTDATETIME_SECOND = 6,
  ELMC_FIELD_PEBBLE_TOUCH_PANEVENT_PHASE = 0,
  ELMC_FIELD_PEBBLE_TOUCH_POINT_X = 0,
  ELMC_FIELD_PEBBLE_TOUCH_POINT_Y = 1,
  ELMC_FIELD_PEBBLE_UI_POINT_X = 0,
  ELMC_FIELD_PEBBLE_UI_POINT_Y = 1,
  ELMC_FIELD_PEBBLE_UI_RECT_H = 3,
  ELMC_FIELD_PEBBLE_UI_RECT_W = 2,
  ELMC_FIELD_PEBBLE_UI_RECT_X = 0,
  ELMC_FIELD_PEBBLE_UI_RECT_Y = 1,
  ELMC_FIELD_PEBBLE_UI_RESOURCES_ANIMATEDBITMAPINFO_HEIGHT = 3,
  ELMC_FIELD_PEBBLE_UI_RESOURCES_ANIMATEDBITMAPINFO_NAME = 1,
  ELMC_FIELD_PEBBLE_UI_RESOURCES_ANIMATEDBITMAPINFO_WIDTH = 2,
  ELMC_FIELD_PEBBLE_UI_RESOURCES_ANIMATEDVECTORINFO_NAME = 1,
  ELMC_FIELD_PEBBLE_UI_RESOURCES_FONTINFO_FONT = 0,
  ELMC_FIELD_PEBBLE_UI_RESOURCES_FONTINFO_HEIGHT = 2,
  ELMC_FIELD_PEBBLE_UI_RESOURCES_FONTINFO_NAME = 1,
  ELMC_FIELD_PEBBLE_UI_RESOURCES_STATICBITMAPINFO_HEIGHT = 3,
  ELMC_FIELD_PEBBLE_UI_RESOURCES_STATICBITMAPINFO_NAME = 1,
  ELMC_FIELD_PEBBLE_UI_RESOURCES_STATICBITMAPINFO_WIDTH = 2,
  ELMC_FIELD_PEBBLE_UI_RESOURCES_STATICVECTORINFO_NAME = 1
};

#define ELMC_RENDER_OP_CLEAR 2
#define ELMC_RENDER_OP_PIXEL 3
#define ELMC_RENDER_OP_LINE 4
#define ELMC_RENDER_OP_RECT 5
#define ELMC_RENDER_OP_CIRCLE 7
#define ELMC_RENDER_OP_FILL_CIRCLE 8
#define ELMC_RENDER_OP_PUSH_CONTEXT 10
#define ELMC_RENDER_OP_POP_CONTEXT 11
#define ELMC_RENDER_OP_STROKE_WIDTH 12
#define ELMC_RENDER_OP_STROKE_COLOR 14
#define ELMC_RENDER_OP_TEXT_COLOR 16
#define ELMC_RENDER_OP_TEXT 29
#define ELMC_SUBSCRIPTION_SECOND_CHANGE 1
#define ELMC_SUBSCRIPTION_APPMESSAGE 4096
#define ELMC_SUBSCRIPTION_HOUR_CHANGE 1024
#define ELMC_SUBSCRIPTION_MINUTE_CHANGE 2048
#define ELMC_TEXT_ALIGN_CENTER 1
#define ELMC_TEXT_OVERFLOW_WORD_WRAP 0
#define ELMC_TEXT_OVERFLOW_SHIFT 2
#define ELMC_COLOR_BLACK 192
#define ELMC_COLOR_BLUE 195
#define ELMC_COLOR_BRASS 233
#define ELMC_COLOR_BRILLIANT_ROSE 246
#define ELMC_COLOR_CADET_BLUE 218
#define ELMC_COLOR_DARK_CANDY_APPLE_RED 224
#define ELMC_COLOR_FOLLY 241
#define ELMC_COLOR_GREEN 204
#define ELMC_COLOR_LIGHT_GRAY 234
#define ELMC_COLOR_MAGENTA 243
#define ELMC_COLOR_ORANGE 244
#define ELMC_COLOR_OXFORD_BLUE 193
#define ELMC_COLOR_PASTEL_YELLOW 254
#define ELMC_COLOR_RAJAH 249
#define ELMC_COLOR_RED 240
#define ELMC_COLOR_SPRING_BUD 236
#define ELMC_COLOR_SUNSET_ORANGE 245
#define ELMC_COLOR_TIFFANY_BLUE 202
#define ELMC_COLOR_WHITE 255

static RC elmc_fn_Main_fontFitsQuote_native(bool *out, ElmcValue * const quote, ElmcValue * const bounds, ElmcValue * const font);

static RC elmc_fn_Main_themeColorCode_native(ElmcValue **out, elmc_int_t color);

static elmc_int_t elmc_fn_Main_storeWatchSeconds(void);
static elmc_int_t elmc_fn_Main_storeQuoteSeconds(void);
static elmc_int_t elmc_fn_Main_storeQuoteText(void);
static elmc_int_t elmc_fn_Main_storeWatchBackground(void);
static elmc_int_t elmc_fn_Main_storeWatchForeground(void);
static elmc_int_t elmc_fn_Main_storeQuoteBackground(void);
static elmc_int_t elmc_fn_Main_storeQuoteTextColor(void);
static elmc_int_t elmc_fn_Main_defaultWatchSeconds(void);
static elmc_int_t elmc_fn_Main_defaultQuoteSeconds(void);
static RC elmc_fn_Main_defaultQuote(ElmcValue **out);
RC elmc_fn_Main_init(ElmcValue **out, ElmcValue *context);
RC elmc_fn_Main_update(ElmcValue **out, ElmcValue *msg, ElmcValue *model);
static RC elmc_fn_Main_updateFromPhone(ElmcValue **out, ElmcValue *message, ElmcValue *model);
static RC elmc_fn_Main_applyWatchSeconds(ElmcValue **out, elmc_int_t seconds, ElmcValue *model);
static RC elmc_fn_Main_applyQuoteSeconds(ElmcValue **out, elmc_int_t seconds, ElmcValue *model);
static RC elmc_fn_Main_applyQuoteText(ElmcValue **out, ElmcValue *text, ElmcValue *model);
static RC elmc_fn_Main_applyWatchBackground(ElmcValue **out, ElmcValue *color, ElmcValue *model);
static RC elmc_fn_Main_applyWatchForeground(ElmcValue **out, ElmcValue *color, ElmcValue *model);
static RC elmc_fn_Main_applyQuoteBackground(ElmcValue **out, ElmcValue *color, ElmcValue *model);
static RC elmc_fn_Main_applyQuoteTextColor(ElmcValue **out, ElmcValue *color, ElmcValue *model);
static RC elmc_fn_Main_themeColorCode(ElmcValue **out, ElmcValue *color);
static ElmcValue *elmc_fn_Main_themeColorFromCode(elmc_int_t code, ElmcValue *fallback);
static RC elmc_fn_Main_resolveThemeColor(ElmcValue **out, ElmcValue *color, ElmcValue *caseColor);
static RC elmc_fn_Main_normalizeQuote(ElmcValue **out, ElmcValue *text);
static elmc_int_t elmc_fn_Main_clampSeconds(elmc_int_t value, ElmcValue *fallback);
static ElmcValue *elmc_fn_Main_refreshRemaining(ElmcValue *model);
static RC elmc_fn_Main_phaseSeconds(elmc_int_t *out, ElmcValue *model);
static RC elmc_fn_Main_tickPhase(ElmcValue **out, ElmcValue *model);
static RC elmc_fn_Main_setSecond(ElmcValue **out, ElmcValue *second, ElmcValue *model);
static RC elmc_fn_Main_setMinute(ElmcValue **out, ElmcValue *minute, ElmcValue *model);
static RC elmc_fn_Main_updateField(ElmcValue **out, ElmcValue *fn, ElmcValue *maybeNow);
static RC elmc_fn_Main_refreshDraw(ElmcValue **out, ElmcValue *model);
static RC elmc_fn_Main_refreshAfterTick(ElmcValue **out, ElmcValue *model);
static RC elmc_fn_Main_refreshQuoteLayout(ElmcValue **out, ElmcValue *model);
RC elmc_fn_Main_subscriptions(ElmcValue **out, ElmcValue *ignoredArg);
static RC elmc_fn_Main_wrapQuoteWords(ElmcValue **out, ElmcValue *quote, elmc_int_t maxChars);
static RC elmc_fn_Main_accQuoteWord(ElmcValue **out, elmc_int_t maxChars, ElmcValue *word, ElmcValue *lines);
static RC elmc_fn_Main_quoteFontCandidates(ElmcValue **out);
static RC elmc_fn_Main_pickQuoteFont(ElmcValue **out, ElmcValue *quote, ElmcValue *bounds);
static RC elmc_fn_Main_pickFirstFitting(ElmcValue **out, ElmcValue *quote, ElmcValue *bounds, ElmcValue *fonts);
static RC elmc_fn_Main_fontFitsQuote(ElmcValue **out, ElmcValue *quote, ElmcValue *bounds, ElmcValue *font);
static RC elmc_fn_Main_quoteBounds(ElmcValue **out, elmc_int_t screenW, elmc_int_t screenH, ElmcValue *displayShape);
static RC elmc_fn_Main_secondHandColor(ElmcValue **out, ElmcValue *model);
static RC elmc_fn_Main_buildLayout(ElmcValue **out, elmc_int_t screenW, elmc_int_t screenH, ElmcValue *displayShape);
static RC elmc_fn_Main_buildHands(ElmcValue **out, ElmcValue *layout, ElmcValue *now);
static RC elmc_fn_Main_hourTickIndexes(ElmcValue **out);
static RC elmc_fn_Main_minuteTickIndexes(ElmcValue **out);
static RC elmc_fn_Main_hourTick(ElmcValue **out, ElmcValue *center, elmc_int_t radius, elmc_int_t index);
static RC elmc_fn_Main_minuteTick(ElmcValue **out, ElmcValue *center, elmc_int_t radius, elmc_int_t index);
static bool elmc_fn_Main_isCardinal(elmc_int_t index);
static RC elmc_fn_Main_handPoint(ElmcValue **out, ElmcValue *center, elmc_int_t length, elmc_int_t index);
static RC elmc_fn_Main_unit60(elmc_int_t *out0, elmc_int_t *out1, elmc_int_t index);
static RC elmc_fn_Main_main(ElmcValue **out);
static RC elmc_fn_Pebble_Ui_Resources_fontInfo(ElmcValue **out, ElmcValue *font);
static RC elmc_fn_Pebble_WatchInfo_caseColor(ElmcValue **out, ElmcValue *color);

static RC elmc_fn_Main_setSecond_closure_0(ElmcValue **out, ElmcValue **args, int argc, ElmcValue **captures, int capture_count) {
  (void)capture_count;
  RC Rc = RC_SUCCESS;

  ElmcValue *owned[1] = {0};
  CATCH_BEGIN
    /* plan block 0 */
    CATCH_BEGIN
      {
        Rc = elmc_record_update_index_cow(&owned[0], (argc > 0 ? args[0] : NULL), ELMC_FIELD_PEBBLE_TIME_CURRENTDATETIME_SECOND, captures[0]);
        CHECK_RC(Rc);
        if (owned[0] == (argc > 0 ? args[0] : NULL)) {
          owned[0] = elmc_retain(owned[0]);
        }
      }
      *out = owned[0];
      owned[0] = NULL;
    CATCH_END
  CATCH_END

  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}
static RC elmc_fn_Main_setMinute_closure_0(ElmcValue **out, ElmcValue **args, int argc, ElmcValue **captures, int capture_count) {
  (void)capture_count;
  RC Rc = RC_SUCCESS;

  ElmcValue *owned[1] = {0};
  CATCH_BEGIN
    /* plan block 0 */
    CATCH_BEGIN
      {
        Rc = elmc_record_update_index_cow(&owned[0], (argc > 0 ? args[0] : NULL), ELMC_FIELD_PEBBLE_TIME_CURRENTDATETIME_MINUTE, captures[0]);
        CHECK_RC(Rc);
        if (owned[0] == (argc > 0 ? args[0] : NULL)) {
          owned[0] = elmc_retain(owned[0]);
        }
      }
      *out = owned[0];
      owned[0] = NULL;
    CATCH_END
  CATCH_END

  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}
static RC elmc_fn_Main_refreshQuoteLayout_closure_0(ElmcValue **out, ElmcValue **args, int argc, ElmcValue **captures, int capture_count) {
  (void)capture_count;
  RC Rc = RC_SUCCESS;

  ElmcValue *owned[5] = {0};
  CATCH_BEGIN
    /* plan block 0 */
    CATCH_BEGIN
      owned[0] = elmc_retain((argc > 1 ? args[1] : NULL));
      const elmc_int_t plan_native_int_3 = ELMC_RECORD_GET_INDEX_INT(captures[0], ELMC_FIELD_MAIN_RECT_Y);
      Rc = elmc_new_int(&owned[1], elmc_as_int((argc > 0 ? args[0] : NULL)) * elmc_as_int(captures[1]));
      CHECK_RC(Rc);
      const elmc_int_t plan_native_int_12 = plan_native_int_3 + elmc_as_int(owned[1]);
      owned[4] = elmc_retain(captures[1]);
      owned[3] = owned[0];
      owned[0] = NULL;
      ElmcValue *plan_ephemeral_box_21378 = NULL;
      Rc = elmc_new_int(&plan_ephemeral_box_21378, plan_native_int_12);
      CHECK_RC(Rc);
      ElmcValue *rec_values_14_10[3] = { owned[3], plan_ephemeral_box_21378, owned[4] };
      Rc = elmc_record_new_values_take(&owned[2], 3, rec_values_14_10);
      CHECK_RC(Rc);
      owned[3] = NULL;
      owned[4] = NULL;
      owned[3] = NULL;
      owned[4] = NULL;
      *out = owned[2];
      owned[2] = NULL;
    CATCH_END
  CATCH_END

  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}
static RC elmc_fn_Main_wrapQuoteWords_closure_0(ElmcValue **out, ElmcValue **args, int argc, ElmcValue **captures, int capture_count) {
  (void)capture_count;
  RC Rc = RC_SUCCESS;

  ElmcValue *owned[1] = {0};
  CATCH_BEGIN
    /* plan block 0 */
    CATCH_BEGIN
      Rc = elmc_fn_Main_accQuoteWord(&owned[0], elmc_as_int(captures[0]), (argc > 0 ? args[0] : NULL), (argc > 1 ? args[1] : NULL));
      CHECK_RC(Rc);
      *out = owned[0];
      owned[0] = NULL;
    CATCH_END
  CATCH_END

  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}
static RC elmc_fn_Main_buildLayout_closure_0(ElmcValue **out, ElmcValue **args, int argc, ElmcValue **captures, int capture_count) {
  (void)capture_count;
  RC Rc = RC_SUCCESS;

  ElmcValue *owned[1] = {0};
  CATCH_BEGIN
    /* plan block 0 */
    CATCH_BEGIN
      Rc = elmc_fn_Main_hourTick(&owned[0], captures[0], elmc_as_int(captures[1]), elmc_as_int((argc > 0 ? args[0] : NULL)));
      CHECK_RC(Rc);
      *out = owned[0];
      owned[0] = NULL;
    CATCH_END
  CATCH_END

  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}
static RC elmc_fn_Main_buildLayout_closure_1(ElmcValue **out, ElmcValue **args, int argc, ElmcValue **captures, int capture_count) {
  (void)capture_count;
  RC Rc = RC_SUCCESS;

  ElmcValue *owned[1] = {0};
  CATCH_BEGIN
    /* plan block 0 */
    CATCH_BEGIN
      Rc = elmc_fn_Main_minuteTick(&owned[0], captures[0], elmc_as_int(captures[1]), elmc_as_int((argc > 0 ? args[0] : NULL)));
      CHECK_RC(Rc);
      *out = owned[0];
      owned[0] = NULL;
    CATCH_END
  CATCH_END

  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}
static RC elmc_fn_Main_minuteTickIndexes_closure_0(ElmcValue **out, ElmcValue **args, int argc, ElmcValue **captures, int capture_count) {
  (void)captures;
  (void)capture_count;
  RC Rc = RC_SUCCESS;

  ElmcValue *owned[2] = {0};
  CATCH_BEGIN
    /* plan block 0 */
    CATCH_BEGIN
      Rc = elmc_new_bool(&owned[0], (elmc_int_mod_by(5, elmc_as_int((argc > 0 ? args[0] : NULL))) == 0));
      CHECK_RC(Rc);
      owned[1] = elmc_basics_not(owned[0]);
      *out = owned[1];
      owned[1] = NULL;
    CATCH_END
  CATCH_END

  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}

static elmc_int_t elmc_fn_Main_storeWatchSeconds(void) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  /* plan block 0 */
  return 1;
}

static elmc_int_t elmc_fn_Main_storeQuoteSeconds(void) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  /* plan block 0 */
  return 2;
}

static elmc_int_t elmc_fn_Main_storeQuoteText(void) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  /* plan block 0 */
  return 3;
}

static elmc_int_t elmc_fn_Main_storeWatchBackground(void) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  /* plan block 0 */
  return 4;
}

static elmc_int_t elmc_fn_Main_storeWatchForeground(void) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  /* plan block 0 */
  return 5;
}

static elmc_int_t elmc_fn_Main_storeQuoteBackground(void) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  /* plan block 0 */
  return 6;
}

static elmc_int_t elmc_fn_Main_storeQuoteTextColor(void) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  /* plan block 0 */
  return 7;
}

static elmc_int_t elmc_fn_Main_defaultWatchSeconds(void) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  /* plan block 0 */
  return 5;
}

static elmc_int_t elmc_fn_Main_defaultQuoteSeconds(void) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  /* plan block 0 */
  return 3;
}

static RC elmc_fn_Main_defaultQuote(ElmcValue **out) {
  /* Ownership policy: retain_arg, retain_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[1] = {0};
  CATCH_BEGIN
    /* plan block 0 */
    static ElmcValue plan_str_immortal_20674 = { ELMC_RC_IMMORTAL, ELMC_TAG_STRING, (void *)"Make today count.", 17 };
    owned[0] = elmc_retain(&plan_str_immortal_20674);
    *out = owned[0];
    owned[0] = NULL;
  CATCH_END
  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}

RC elmc_fn_Main_init(ElmcValue **out, ElmcValue *context) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  enum { ELMC_OWNED_SLOT_COUNT = 45 };
  ElmcValue **owned = elmc_owned_slots_acquire(ELMC_OWNED_SLOT_COUNT);
  if (!owned) return RC_ERR_OUT_OF_MEMORY;
  CATCH_BEGIN
    /* plan block 0 */
    owned[0] = elmc_record_get_index(context, ELMC_FIELD_PEBBLE_PLATFORM_LAUNCHCONTEXT_SCREEN);
    const elmc_int_t plan_native_int_2 = ELMC_RECORD_GET_INDEX_INT(owned[0], ELMC_FIELD_PEBBLE_PLATFORM_LAUNCHSCREEN_WIDTH);
    owned[1] = elmc_record_get_index(context, ELMC_FIELD_PEBBLE_PLATFORM_LAUNCHCONTEXT_SCREEN);
    const elmc_int_t plan_native_int_4 = ELMC_RECORD_GET_INDEX_INT(owned[1], ELMC_FIELD_PEBBLE_PLATFORM_LAUNCHSCREEN_HEIGHT);
    owned[2] = elmc_record_get_index(context, ELMC_FIELD_PEBBLE_PLATFORM_LAUNCHCONTEXT_SCREEN);
    owned[3] = elmc_record_get_index(owned[2], ELMC_FIELD_PEBBLE_PLATFORM_LAUNCHSCREEN_SHAPE);
    Rc = elmc_fn_Main_buildLayout(&owned[19], plan_native_int_2, plan_native_int_4, owned[3]);
    CHECK_RC(Rc);
    if (owned[19] == owned[3]) {
      owned[3] = NULL;
    }
    owned[4] = elmc_record_get_index(context, ELMC_FIELD_PEBBLE_PLATFORM_LAUNCHCONTEXT_SCREEN);
    const elmc_int_t plan_native_int_67 = ELMC_RECORD_GET_INDEX_INT(owned[4], ELMC_FIELD_PEBBLE_PLATFORM_LAUNCHSCREEN_WIDTH);
    owned[5] = elmc_record_get_index(context, ELMC_FIELD_PEBBLE_PLATFORM_LAUNCHCONTEXT_SCREEN);
    const elmc_int_t plan_native_int_68 = ELMC_RECORD_GET_INDEX_INT(owned[5], ELMC_FIELD_PEBBLE_PLATFORM_LAUNCHSCREEN_HEIGHT);
    owned[6] = elmc_record_get_index(context, ELMC_FIELD_PEBBLE_PLATFORM_LAUNCHCONTEXT_SCREEN);
    owned[14] = elmc_record_get_index(owned[6], ELMC_FIELD_PEBBLE_PLATFORM_LAUNCHSCREEN_SHAPE);
    owned[7] = elmc_record_get_index(context, ELMC_FIELD_PEBBLE_PLATFORM_LAUNCHCONTEXT_SCREEN);
    owned[15] = elmc_record_get_index(owned[7], ELMC_FIELD_PEBBLE_PLATFORM_LAUNCHSCREEN_COLORMODE);
    owned[16] = elmc_maybe_nothing();
    Rc = elmc_fn_Main_defaultQuote(&owned[17]);
    CHECK_RC(Rc);
    const elmc_int_t plan_native_int_73 = elmc_fn_Main_defaultWatchSeconds();
    const elmc_int_t plan_native_int_74 = elmc_fn_Main_defaultQuoteSeconds();
    Rc = elmc_new_int(&owned[18], 1);
    CHECK_RC(Rc);
    const elmc_int_t plan_native_int_76 = elmc_fn_Main_defaultWatchSeconds();
    owned[20] = elmc_maybe_nothing();
    static ElmcValue plan_str_immortal_20738 = { ELMC_RC_IMMORTAL, ELMC_TAG_STRING, (void *)"", 0 };
    owned[21] = elmc_retain(&plan_str_immortal_20738);
    Rc = elmc_new_int(&owned[22], 3);
    CHECK_RC(Rc);
    Rc = elmc_new_int(&owned[8], 0);
    CHECK_RC(Rc);
    Rc = elmc_new_int(&owned[9], 0);
    CHECK_RC(Rc);
    Rc = elmc_new_int(&owned[10], 1);
    CHECK_RC(Rc);
    Rc = elmc_new_int(&owned[11], 1);
    CHECK_RC(Rc);
    elmc_int_t rec_values_51_8[4] = { 0, 0, 1, 1 };
    Rc = elmc_record_new_values_ints(&owned[23], 4, rec_values_51_8);
    CHECK_RC(Rc);
    owned[24] = elmc_list_nil();
    Rc = elmc_new_int(&owned[12], 1);
    CHECK_RC(Rc);
    Rc = elmc_fn_Pebble_WatchInfo_caseColor(&owned[25], owned[12]);
    CHECK_RC(Rc);
    if (owned[25] == owned[12]) {
      owned[12] = NULL;
    }
    Rc = elmc_new_int(&owned[26], 2);
    CHECK_RC(Rc);
    Rc = elmc_new_int(&owned[27], 4);
    CHECK_RC(Rc);
    Rc = elmc_new_int(&owned[28], 2);
    CHECK_RC(Rc);
    Rc = elmc_new_int(&owned[29], 4);
    CHECK_RC(Rc);
    ElmcValue *plan_ephemeral_box_20802 = NULL;
    Rc = elmc_new_int(&plan_ephemeral_box_20802, plan_native_int_67);
    CHECK_RC(Rc);
    ElmcValue *plan_ephemeral_box_20866 = NULL;
    Rc = elmc_new_int(&plan_ephemeral_box_20866, plan_native_int_68);
    CHECK_RC(Rc);
    ElmcValue *plan_ephemeral_box_20930 = NULL;
    Rc = elmc_new_int(&plan_ephemeral_box_20930, plan_native_int_73);
    CHECK_RC(Rc);
    ElmcValue *plan_ephemeral_box_20994 = NULL;
    Rc = elmc_new_int(&plan_ephemeral_box_20994, plan_native_int_74);
    CHECK_RC(Rc);
    ElmcValue *plan_ephemeral_box_21058 = NULL;
    Rc = elmc_new_int(&plan_ephemeral_box_21058, plan_native_int_76);
    CHECK_RC(Rc);
    ElmcValue *rec_values_87_9[21] = { plan_ephemeral_box_20802, plan_ephemeral_box_20866, owned[14], owned[15], owned[16], owned[17], plan_ephemeral_box_20930, plan_ephemeral_box_20994, owned[18], plan_ephemeral_box_21058, owned[19], owned[20], owned[21], owned[22], owned[23], owned[24], owned[25], owned[26], owned[27], owned[28], owned[29] };
    Rc = elmc_record_new_values_take(&owned[13], 21, rec_values_87_9);
    CHECK_RC(Rc);
    owned[14] = NULL;
    owned[15] = NULL;
    owned[16] = NULL;
    owned[17] = NULL;
    owned[18] = NULL;
    owned[19] = NULL;
    owned[20] = NULL;
    owned[21] = NULL;
    owned[22] = NULL;
    owned[23] = NULL;
    owned[24] = NULL;
    owned[25] = NULL;
    owned[26] = NULL;
    owned[27] = NULL;
    owned[28] = NULL;
    owned[29] = NULL;
    owned[14] = NULL;
    owned[15] = NULL;
    owned[16] = NULL;
    owned[17] = NULL;
    owned[18] = NULL;
    owned[19] = NULL;
    owned[20] = NULL;
    owned[21] = NULL;
    owned[22] = NULL;
    owned[23] = NULL;
    owned[24] = NULL;
    owned[25] = NULL;
    owned[26] = NULL;
    owned[27] = NULL;
    owned[28] = NULL;
    owned[29] = NULL;
    Rc = elmc_fn_Main_refreshDraw(&owned[30], owned[13]);
    CHECK_RC(Rc);
    if (owned[30] == owned[13]) {
      owned[13] = NULL;
    }
    Rc = elmc_fn_Main_refreshQuoteLayout(&owned[31], owned[30]);
    CHECK_RC(Rc);
    if (owned[31] == owned[30]) {
      owned[30] = NULL;
    }
    Rc = elmc_cmd1(&owned[32], ELMC_PEBBLE_CMD_GET_CURRENT_DATE_TIME, ELMC_PEBBLE_MSG_CURRENTDATETIME);
    CHECK_RC(Rc);
    Rc = elmc_new_int(&owned[33], 1);
    CHECK_RC(Rc);
    Rc = elmc_cmd_companion_send_value(&owned[34], owned[33]);
    CHECK_RC(Rc);
    const elmc_int_t plan_native_int_94 = elmc_fn_Main_storeWatchSeconds();
    Rc = elmc_cmd2(&owned[35], ELMC_PEBBLE_CMD_STORAGE_READ_INT, plan_native_int_94, ELMC_PEBBLE_MSG_LOADEDWATCHSECONDS);
    CHECK_RC(Rc);
    const elmc_int_t plan_native_int_97 = elmc_fn_Main_storeQuoteSeconds();
    Rc = elmc_cmd2(&owned[36], ELMC_PEBBLE_CMD_STORAGE_READ_INT, plan_native_int_97, ELMC_PEBBLE_MSG_LOADEDQUOTESECONDS);
    CHECK_RC(Rc);
    const elmc_int_t plan_native_int_100 = elmc_fn_Main_storeQuoteText();
    Rc = elmc_cmd2(&owned[37], ELMC_PEBBLE_CMD_STORAGE_READ_STRING, plan_native_int_100, ELMC_PEBBLE_MSG_LOADEDQUOTETEXT);
    CHECK_RC(Rc);
    const elmc_int_t plan_native_int_103 = elmc_fn_Main_storeWatchBackground();
    Rc = elmc_cmd2(&owned[38], ELMC_PEBBLE_CMD_STORAGE_READ_INT, plan_native_int_103, ELMC_PEBBLE_MSG_LOADEDWATCHBACKGROUND);
    CHECK_RC(Rc);
    const elmc_int_t plan_native_int_106 = elmc_fn_Main_storeWatchForeground();
    Rc = elmc_cmd2(&owned[39], ELMC_PEBBLE_CMD_STORAGE_READ_INT, plan_native_int_106, ELMC_PEBBLE_MSG_LOADEDWATCHFOREGROUND);
    CHECK_RC(Rc);
    const elmc_int_t plan_native_int_109 = elmc_fn_Main_storeQuoteBackground();
    Rc = elmc_cmd2(&owned[40], ELMC_PEBBLE_CMD_STORAGE_READ_INT, plan_native_int_109, ELMC_PEBBLE_MSG_LOADEDQUOTEBACKGROUND);
    CHECK_RC(Rc);
    const elmc_int_t plan_native_int_112 = elmc_fn_Main_storeQuoteTextColor();
    Rc = elmc_cmd2(&owned[41], ELMC_PEBBLE_CMD_STORAGE_READ_INT, plan_native_int_112, ELMC_PEBBLE_MSG_LOADEDQUOTETEXTCOLOR);
    CHECK_RC(Rc);
    Rc = elmc_cmd1(&owned[42], ELMC_PEBBLE_CMD_GET_WATCH_COLOR, ELMC_PEBBLE_MSG_GOTWATCHCOLOR);
    CHECK_RC(Rc);
    ElmcValue *plan_list_items_21122[10] = { owned[32], owned[34], owned[35], owned[36], owned[37], owned[38], owned[39], owned[40], owned[41], owned[42] };
    Rc = elmc_list_from_values(&owned[43], plan_list_items_21122, 10);
    CHECK_RC(Rc);
    Rc = elmc_cmd_batch(&owned[44], owned[43]);
    CHECK_RC(Rc);
    Rc = elmc_tuple2(out, owned[31], owned[44]);
    CHECK_RC(Rc);
  CATCH_END
  elmc_release_array_lifo(owned, ELMC_OWNED_SLOT_COUNT);
  elmc_owned_slots_release(owned, ELMC_OWNED_SLOT_COUNT);
  return Rc;
}

RC elmc_fn_Main_update(ElmcValue **out, ElmcValue *msg, ElmcValue *model) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  enum { ELMC_OWNED_SLOT_COUNT = 53 };
  ElmcValue **owned = elmc_owned_slots_acquire(ELMC_OWNED_SLOT_COUNT);
  if (!owned) return RC_ERR_OUT_OF_MEMORY;
  CATCH_BEGIN
    /* plan block 0 */
    switch (elmc_union_tag_as_int(msg)) {
      case ELMC_UNION_MAIN_CURRENTDATETIME: goto elmc_plan_block_2;
      case ELMC_UNION_MAIN_SECONDCHANGED: goto elmc_plan_block_4;
      case ELMC_UNION_MAIN_MINUTECHANGED: goto elmc_plan_block_6;
      case ELMC_UNION_MAIN_HOURCHANGED: goto elmc_plan_block_8;
      case ELMC_UNION_MAIN_FROMPHONE: goto elmc_plan_block_10;
      case ELMC_UNION_MAIN_LOADEDWATCHSECONDS: goto elmc_plan_block_12;
      case ELMC_UNION_MAIN_LOADEDQUOTESECONDS: goto elmc_plan_block_14;
      case ELMC_UNION_MAIN_LOADEDQUOTETEXT: goto elmc_plan_block_16;
      case ELMC_UNION_MAIN_LOADEDWATCHBACKGROUND: goto elmc_plan_block_18;
      case ELMC_UNION_MAIN_LOADEDWATCHFOREGROUND: goto elmc_plan_block_20;
      case ELMC_UNION_MAIN_LOADEDQUOTEBACKGROUND: goto elmc_plan_block_22;
      case ELMC_UNION_MAIN_LOADEDQUOTETEXTCOLOR: goto elmc_plan_block_24;
      case ELMC_UNION_MAIN_GOTWATCHCOLOR: goto elmc_plan_block_26;
      default: goto elmc_plan_block_29;
    }
    elmc_plan_block_2:
    owned[1] = elmc_tuple_second_borrow(msg);
    Rc = elmc_maybe_just(&owned[2], owned[1]);
    CHECK_RC(Rc);
    owned[1] = NULL;
    {
      Rc = elmc_record_update_index_cow(&owned[3], model, ELMC_FIELD_MAIN_MODEL_NOW, owned[2]);
      CHECK_RC(Rc);
      if (owned[3] == model) {
        owned[3] = elmc_retain(owned[3]);
      }
    }
    Rc = elmc_fn_Main_refreshDraw(&owned[4], owned[3]);
    CHECK_RC(Rc);
    if (owned[4] == owned[3]) {
      owned[3] = NULL;
    }
    owned[5] = elmc_cmd_none();
    Rc = elmc_tuple2(&owned[0], owned[4], owned[5]);
    CHECK_RC(Rc);
    goto elmc_plan_block_29;
    elmc_plan_block_4:
    owned[6] = elmc_tuple_second_borrow(msg);
    Rc = elmc_fn_Main_setSecond(&owned[7], owned[6], model);
    CHECK_RC(Rc);
    Rc = elmc_fn_Main_tickPhase(&owned[8], owned[7]);
    CHECK_RC(Rc);
    if (owned[8] == owned[7]) {
      owned[7] = NULL;
    }
    Rc = elmc_fn_Main_refreshAfterTick(&owned[9], owned[8]);
    CHECK_RC(Rc);
    if (owned[9] == owned[8]) {
      owned[8] = NULL;
    }
    owned[10] = elmc_cmd_none();
    Rc = elmc_tuple2(&owned[0], owned[9], owned[10]);
    CHECK_RC(Rc);
    goto elmc_plan_block_29;
    elmc_plan_block_6:
    owned[11] = elmc_tuple_second_borrow(msg);
    Rc = elmc_fn_Main_setMinute(&owned[12], owned[11], model);
    CHECK_RC(Rc);
    Rc = elmc_fn_Main_refreshAfterTick(&owned[13], owned[12]);
    CHECK_RC(Rc);
    if (owned[13] == owned[12]) {
      owned[12] = NULL;
    }
    owned[14] = elmc_cmd_none();
    Rc = elmc_tuple2(&owned[0], owned[13], owned[14]);
    CHECK_RC(Rc);
    goto elmc_plan_block_29;
    elmc_plan_block_8:
    owned[15] = elmc_tuple_second_borrow(msg);
    Rc = elmc_cmd1(&owned[16], ELMC_PEBBLE_CMD_GET_CURRENT_DATE_TIME, ELMC_PEBBLE_MSG_CURRENTDATETIME);
    CHECK_RC(Rc);
    owned[17] = elmc_retain(model);
    Rc = elmc_tuple2(&owned[0], owned[17], owned[16]);
    CHECK_RC(Rc);
    goto elmc_plan_block_29;
    elmc_plan_block_10:
    owned[18] = elmc_tuple_second_borrow(msg);
    Rc = elmc_fn_Main_updateFromPhone(&owned[0], owned[18], model);
    CHECK_RC(Rc);
    goto elmc_plan_block_29;
    elmc_plan_block_12:
    owned[19] = elmc_tuple_second_borrow(msg);
    Rc = elmc_fn_Main_applyWatchSeconds(&owned[20], elmc_as_int(owned[19]), model);
    CHECK_RC(Rc);
    owned[21] = elmc_cmd_none();
    Rc = elmc_tuple2(&owned[0], owned[20], owned[21]);
    CHECK_RC(Rc);
    goto elmc_plan_block_29;
    elmc_plan_block_14:
    owned[22] = elmc_tuple_second_borrow(msg);
    Rc = elmc_fn_Main_applyQuoteSeconds(&owned[23], elmc_as_int(owned[22]), model);
    CHECK_RC(Rc);
    owned[24] = elmc_cmd_none();
    Rc = elmc_tuple2(&owned[0], owned[23], owned[24]);
    CHECK_RC(Rc);
    goto elmc_plan_block_29;
    elmc_plan_block_16:
    owned[25] = elmc_tuple_second_borrow(msg);
    Rc = elmc_fn_Main_applyQuoteText(&owned[26], owned[25], model);
    CHECK_RC(Rc);
    owned[27] = elmc_cmd_none();
    Rc = elmc_tuple2(&owned[0], owned[26], owned[27]);
    CHECK_RC(Rc);
    goto elmc_plan_block_29;
    elmc_plan_block_18:
    owned[28] = elmc_tuple_second_borrow(msg);
    Rc = elmc_new_int(&owned[29], 2);
    CHECK_RC(Rc);
    owned[30] = elmc_fn_Main_themeColorFromCode(elmc_as_int(owned[28]), owned[29]);
    if (owned[30] == owned[29]) {
      owned[29] = NULL;
    }
    Rc = elmc_fn_Main_applyWatchBackground(&owned[31], owned[30], model);
    CHECK_RC(Rc);
    if (owned[31] == owned[30]) {
      owned[30] = NULL;
    }
    owned[32] = elmc_cmd_none();
    Rc = elmc_tuple2(&owned[0], owned[31], owned[32]);
    CHECK_RC(Rc);
    goto elmc_plan_block_29;
    elmc_plan_block_20:
    owned[33] = elmc_tuple_second_borrow(msg);
    Rc = elmc_new_int(&owned[34], 4);
    CHECK_RC(Rc);
    owned[35] = elmc_fn_Main_themeColorFromCode(elmc_as_int(owned[33]), owned[34]);
    if (owned[35] == owned[34]) {
      owned[34] = NULL;
    }
    Rc = elmc_fn_Main_applyWatchForeground(&owned[36], owned[35], model);
    CHECK_RC(Rc);
    if (owned[36] == owned[35]) {
      owned[35] = NULL;
    }
    owned[37] = elmc_cmd_none();
    Rc = elmc_tuple2(&owned[0], owned[36], owned[37]);
    CHECK_RC(Rc);
    goto elmc_plan_block_29;
    elmc_plan_block_22:
    owned[38] = elmc_tuple_second_borrow(msg);
    Rc = elmc_new_int(&owned[39], 2);
    CHECK_RC(Rc);
    owned[40] = elmc_fn_Main_themeColorFromCode(elmc_as_int(owned[38]), owned[39]);
    if (owned[40] == owned[39]) {
      owned[39] = NULL;
    }
    Rc = elmc_fn_Main_applyQuoteBackground(&owned[41], owned[40], model);
    CHECK_RC(Rc);
    if (owned[41] == owned[40]) {
      owned[40] = NULL;
    }
    owned[42] = elmc_cmd_none();
    Rc = elmc_tuple2(&owned[0], owned[41], owned[42]);
    CHECK_RC(Rc);
    goto elmc_plan_block_29;
    elmc_plan_block_24:
    owned[43] = elmc_tuple_second_borrow(msg);
    Rc = elmc_new_int(&owned[44], 4);
    CHECK_RC(Rc);
    owned[45] = elmc_fn_Main_themeColorFromCode(elmc_as_int(owned[43]), owned[44]);
    if (owned[45] == owned[44]) {
      owned[44] = NULL;
    }
    Rc = elmc_fn_Main_applyQuoteTextColor(&owned[46], owned[45], model);
    CHECK_RC(Rc);
    if (owned[46] == owned[45]) {
      owned[45] = NULL;
    }
    owned[47] = elmc_cmd_none();
    Rc = elmc_tuple2(&owned[0], owned[46], owned[47]);
    CHECK_RC(Rc);
    goto elmc_plan_block_29;
    elmc_plan_block_26:
    owned[48] = elmc_tuple_second_borrow(msg);
    Rc = elmc_fn_Pebble_WatchInfo_caseColor(&owned[49], owned[48]);
    CHECK_RC(Rc);
    {
      Rc = elmc_record_update_index_cow(&owned[50], model, ELMC_FIELD_MAIN_MODEL_CASECOLOR, owned[49]);
      CHECK_RC(Rc);
      if (owned[50] == model) {
        owned[50] = elmc_retain(owned[50]);
      }
    }
    Rc = elmc_fn_Main_refreshDraw(&owned[51], owned[50]);
    CHECK_RC(Rc);
    if (owned[51] == owned[50]) {
      owned[50] = NULL;
    }
    owned[52] = elmc_cmd_none();
    Rc = elmc_tuple2(&owned[0], owned[51], owned[52]);
    CHECK_RC(Rc);
    elmc_plan_block_29:
    *out = owned[0];
    owned[0] = NULL;
  CATCH_END
  owned[11] = NULL;
  owned[15] = NULL;
  owned[18] = NULL;
  owned[19] = NULL;
  owned[1] = NULL;
  owned[22] = NULL;
  owned[25] = NULL;
  owned[28] = NULL;
  owned[33] = NULL;
  owned[38] = NULL;
  owned[43] = NULL;
  owned[48] = NULL;
  owned[6] = NULL;
  elmc_release_array_lifo(owned, ELMC_OWNED_SLOT_COUNT);
  elmc_owned_slots_release(owned, ELMC_OWNED_SLOT_COUNT);
  return Rc;
}

static __attribute__((noinline, noclone)) RC elmc_fn_Main_updateFromPhone(ElmcValue **out, ElmcValue *message, ElmcValue *model) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  enum { ELMC_OWNED_SLOT_COUNT = 29 };
  ElmcValue **owned = elmc_owned_slots_acquire(ELMC_OWNED_SLOT_COUNT);
  if (!owned) return RC_ERR_OUT_OF_MEMORY;
  CATCH_BEGIN
    /* plan block 0 */
    switch (elmc_union_tag_as_int(message)) {
      case ELMC_UNION_COMPANION_TYPES_SETMOTIVATIONALTEXT: goto elmc_plan_block_2;
      case ELMC_UNION_COMPANION_TYPES_SETWATCHDISPLAYSECONDS: goto elmc_plan_block_4;
      case ELMC_UNION_COMPANION_TYPES_SETQUOTEDISPLAYSECONDS: goto elmc_plan_block_6;
      case ELMC_UNION_COMPANION_TYPES_SETWATCHBACKGROUND: goto elmc_plan_block_8;
      case ELMC_UNION_COMPANION_TYPES_SETWATCHFOREGROUND: goto elmc_plan_block_10;
      case ELMC_UNION_COMPANION_TYPES_SETQUOTEBACKGROUND: goto elmc_plan_block_12;
      case ELMC_UNION_COMPANION_TYPES_SETQUOTETEXTCOLOR: goto elmc_plan_block_14;
      default: goto elmc_plan_block_17;
    }
    elmc_plan_block_2:
    owned[1] = elmc_tuple_second_borrow(message);
    Rc = elmc_fn_Main_normalizeQuote(&owned[2], owned[1]);
    CHECK_RC(Rc);
    Rc = elmc_fn_Main_applyQuoteText(&owned[3], owned[2], model);
    CHECK_RC(Rc);
    const elmc_int_t plan_native_int_7 = elmc_fn_Main_storeQuoteText();
    Rc = elmc_cmd1_string(&owned[4], ELMC_PEBBLE_CMD_STORAGE_WRITE_STRING, plan_native_int_7, ((owned[2] && owned[2]->tag == ELMC_TAG_STRING && owned[2]->payload) ? (const char *)owned[2]->payload : ""));
    CHECK_RC(Rc);
    Rc = elmc_tuple2(&owned[0], owned[3], owned[4]);
    CHECK_RC(Rc);
    goto elmc_plan_block_17;
    elmc_plan_block_4:
    owned[5] = elmc_tuple_second_borrow(message);
    elmc_int_t plan_call_int_11 = elmc_fn_Main_defaultWatchSeconds();
    Rc = elmc_new_int(&owned[6], plan_call_int_11);
    CHECK_RC(Rc);
    const elmc_int_t plan_native_int_12 = elmc_fn_Main_clampSeconds(elmc_as_int(owned[5]), owned[6]);
    Rc = elmc_fn_Main_applyWatchSeconds(&owned[7], plan_native_int_12, model);
    CHECK_RC(Rc);
    const elmc_int_t plan_native_int_15 = elmc_fn_Main_storeWatchSeconds();
    Rc = elmc_cmd2(&owned[8], ELMC_PEBBLE_CMD_STORAGE_WRITE_INT, plan_native_int_15, plan_native_int_12);
    CHECK_RC(Rc);
    Rc = elmc_tuple2(&owned[0], owned[7], owned[8]);
    CHECK_RC(Rc);
    goto elmc_plan_block_17;
    elmc_plan_block_6:
    owned[9] = elmc_tuple_second_borrow(message);
    elmc_int_t plan_call_int_19 = elmc_fn_Main_defaultQuoteSeconds();
    Rc = elmc_new_int(&owned[10], plan_call_int_19);
    CHECK_RC(Rc);
    const elmc_int_t plan_native_int_20 = elmc_fn_Main_clampSeconds(elmc_as_int(owned[9]), owned[10]);
    Rc = elmc_fn_Main_applyQuoteSeconds(&owned[11], plan_native_int_20, model);
    CHECK_RC(Rc);
    const elmc_int_t plan_native_int_23 = elmc_fn_Main_storeQuoteSeconds();
    Rc = elmc_cmd2(&owned[12], ELMC_PEBBLE_CMD_STORAGE_WRITE_INT, plan_native_int_23, plan_native_int_20);
    CHECK_RC(Rc);
    Rc = elmc_tuple2(&owned[0], owned[11], owned[12]);
    CHECK_RC(Rc);
    goto elmc_plan_block_17;
    elmc_plan_block_8:
    owned[13] = elmc_tuple_second_borrow(message);
    Rc = elmc_fn_Main_applyWatchBackground(&owned[14], owned[13], model);
    CHECK_RC(Rc);
    const elmc_int_t plan_native_int_29 = elmc_fn_Main_storeWatchBackground();
    Rc = elmc_fn_Main_themeColorCode_native(&owned[15], (owned[13] && (owned[13])->tag == ELMC_TAG_INT ? elmc_as_int(owned[13]) : (owned[13] && (owned[13])->tag == ELMC_TAG_TUPLE2 && (owned[13])->payload != NULL ? elmc_as_int(((ElmcTuple2 *)(owned[13])->payload)->first) : -1)));
    CHECK_RC(Rc);
    Rc = elmc_cmd2(&owned[16], ELMC_PEBBLE_CMD_STORAGE_WRITE_INT, plan_native_int_29, elmc_as_int(owned[15]));
    CHECK_RC(Rc);
    Rc = elmc_tuple2(&owned[0], owned[14], owned[16]);
    CHECK_RC(Rc);
    goto elmc_plan_block_17;
    elmc_plan_block_10:
    owned[17] = elmc_tuple_second_borrow(message);
    Rc = elmc_fn_Main_applyWatchForeground(&owned[18], owned[17], model);
    CHECK_RC(Rc);
    const elmc_int_t plan_native_int_36 = elmc_fn_Main_storeWatchForeground();
    Rc = elmc_fn_Main_themeColorCode_native(&owned[19], (owned[17] && (owned[17])->tag == ELMC_TAG_INT ? elmc_as_int(owned[17]) : (owned[17] && (owned[17])->tag == ELMC_TAG_TUPLE2 && (owned[17])->payload != NULL ? elmc_as_int(((ElmcTuple2 *)(owned[17])->payload)->first) : -1)));
    CHECK_RC(Rc);
    Rc = elmc_cmd2(&owned[20], ELMC_PEBBLE_CMD_STORAGE_WRITE_INT, plan_native_int_36, elmc_as_int(owned[19]));
    CHECK_RC(Rc);
    Rc = elmc_tuple2(&owned[0], owned[18], owned[20]);
    CHECK_RC(Rc);
    goto elmc_plan_block_17;
    elmc_plan_block_12:
    owned[21] = elmc_tuple_second_borrow(message);
    Rc = elmc_fn_Main_applyQuoteBackground(&owned[22], owned[21], model);
    CHECK_RC(Rc);
    const elmc_int_t plan_native_int_43 = elmc_fn_Main_storeQuoteBackground();
    Rc = elmc_fn_Main_themeColorCode_native(&owned[23], (owned[21] && (owned[21])->tag == ELMC_TAG_INT ? elmc_as_int(owned[21]) : (owned[21] && (owned[21])->tag == ELMC_TAG_TUPLE2 && (owned[21])->payload != NULL ? elmc_as_int(((ElmcTuple2 *)(owned[21])->payload)->first) : -1)));
    CHECK_RC(Rc);
    Rc = elmc_cmd2(&owned[24], ELMC_PEBBLE_CMD_STORAGE_WRITE_INT, plan_native_int_43, elmc_as_int(owned[23]));
    CHECK_RC(Rc);
    Rc = elmc_tuple2(&owned[0], owned[22], owned[24]);
    CHECK_RC(Rc);
    goto elmc_plan_block_17;
    elmc_plan_block_14:
    owned[25] = elmc_tuple_second_borrow(message);
    Rc = elmc_fn_Main_applyQuoteTextColor(&owned[26], owned[25], model);
    CHECK_RC(Rc);
    const elmc_int_t plan_native_int_50 = elmc_fn_Main_storeQuoteTextColor();
    Rc = elmc_fn_Main_themeColorCode_native(&owned[27], (owned[25] && (owned[25])->tag == ELMC_TAG_INT ? elmc_as_int(owned[25]) : (owned[25] && (owned[25])->tag == ELMC_TAG_TUPLE2 && (owned[25])->payload != NULL ? elmc_as_int(((ElmcTuple2 *)(owned[25])->payload)->first) : -1)));
    CHECK_RC(Rc);
    Rc = elmc_cmd2(&owned[28], ELMC_PEBBLE_CMD_STORAGE_WRITE_INT, plan_native_int_50, elmc_as_int(owned[27]));
    CHECK_RC(Rc);
    Rc = elmc_tuple2(&owned[0], owned[26], owned[28]);
    CHECK_RC(Rc);
    elmc_plan_block_17:
    *out = owned[0];
    owned[0] = NULL;
  CATCH_END
  owned[13] = NULL;
  owned[17] = NULL;
  owned[1] = NULL;
  owned[21] = NULL;
  owned[25] = NULL;
  owned[5] = NULL;
  owned[9] = NULL;
  elmc_release_array_lifo(owned, ELMC_OWNED_SLOT_COUNT);
  elmc_owned_slots_release(owned, ELMC_OWNED_SLOT_COUNT);
  return Rc;
}

static RC elmc_fn_Main_applyWatchSeconds(ElmcValue **out, elmc_int_t seconds, ElmcValue *model) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[2] = {0};
  CATCH_BEGIN
    /* plan block 0 */
    elmc_int_t plan_call_int_2 = elmc_fn_Main_defaultWatchSeconds();
    Rc = elmc_new_int(&owned[0], plan_call_int_2);
    CHECK_RC(Rc);
    const elmc_int_t plan_native_int_4 = elmc_fn_Main_clampSeconds(seconds, owned[0]);
    {
      Rc = elmc_record_update_index_int_cow(&owned[1], model, ELMC_FIELD_MAIN_MODEL_WATCHSECONDS, plan_native_int_4);
      CHECK_RC(Rc);
      if (owned[1] == model) {
        owned[1] = elmc_retain(owned[1]);
      }
    }
    *out = elmc_fn_Main_refreshRemaining(owned[1]);
  CATCH_END
  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}

static RC elmc_fn_Main_applyQuoteSeconds(ElmcValue **out, elmc_int_t seconds, ElmcValue *model) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[2] = {0};
  CATCH_BEGIN
    /* plan block 0 */
    elmc_int_t plan_call_int_2 = elmc_fn_Main_defaultQuoteSeconds();
    Rc = elmc_new_int(&owned[0], plan_call_int_2);
    CHECK_RC(Rc);
    const elmc_int_t plan_native_int_4 = elmc_fn_Main_clampSeconds(seconds, owned[0]);
    {
      Rc = elmc_record_update_index_int_cow(&owned[1], model, ELMC_FIELD_MAIN_MODEL_QUOTESECONDS, plan_native_int_4);
      CHECK_RC(Rc);
      if (owned[1] == model) {
        owned[1] = elmc_retain(owned[1]);
      }
    }
    *out = elmc_fn_Main_refreshRemaining(owned[1]);
  CATCH_END
  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}

static RC elmc_fn_Main_applyQuoteText(ElmcValue **out, ElmcValue *text, ElmcValue *model) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[2] = {0};
  CATCH_BEGIN
    /* plan block 0 */
    Rc = elmc_fn_Main_normalizeQuote(&owned[0], text);
    CHECK_RC(Rc);
    {
      Rc = elmc_record_update_index_cow(&owned[1], model, ELMC_FIELD_MAIN_MODEL_QUOTE, owned[0]);
      CHECK_RC(Rc);
      if (owned[1] == model) {
        owned[1] = elmc_retain(owned[1]);
      }
    }
    Rc = elmc_fn_Main_refreshQuoteLayout(out, owned[1]);
    CHECK_RC(Rc);
  CATCH_END
  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}

static RC elmc_fn_Main_applyWatchBackground(ElmcValue **out, ElmcValue *color, ElmcValue *model) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[2] = {0};
  CATCH_BEGIN
    /* plan block 0 */
    owned[0] = elmc_retain(color);
    {
      Rc = elmc_record_update_index_cow(&owned[1], model, ELMC_FIELD_MAIN_MODEL_WATCHBACKGROUND, owned[0]);
      CHECK_RC(Rc);
      if (owned[1] == model) {
        owned[1] = elmc_retain(owned[1]);
      }
    }
    Rc = elmc_fn_Main_refreshDraw(out, owned[1]);
    CHECK_RC(Rc);
  CATCH_END
  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}

static RC elmc_fn_Main_applyWatchForeground(ElmcValue **out, ElmcValue *color, ElmcValue *model) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[2] = {0};
  CATCH_BEGIN
    /* plan block 0 */
    owned[0] = elmc_retain(color);
    {
      Rc = elmc_record_update_index_cow(&owned[1], model, ELMC_FIELD_MAIN_MODEL_WATCHFOREGROUND, owned[0]);
      CHECK_RC(Rc);
      if (owned[1] == model) {
        owned[1] = elmc_retain(owned[1]);
      }
    }
    Rc = elmc_fn_Main_refreshDraw(out, owned[1]);
    CHECK_RC(Rc);
  CATCH_END
  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}

static RC elmc_fn_Main_applyQuoteBackground(ElmcValue **out, ElmcValue *color, ElmcValue *model) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[1] = {0};
  CATCH_BEGIN
    /* plan block 0 */
    owned[0] = elmc_retain(color);
    {
      Rc = elmc_record_update_index_cow(out, model, ELMC_FIELD_MAIN_MODEL_QUOTEBACKGROUND, owned[0]);
      CHECK_RC(Rc);
      if (*out == model) {
        *out = elmc_retain(*out);
      }
    }
  CATCH_END
  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}

static RC elmc_fn_Main_applyQuoteTextColor(ElmcValue **out, ElmcValue *color, ElmcValue *model) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[1] = {0};
  CATCH_BEGIN
    /* plan block 0 */
    owned[0] = elmc_retain(color);
    {
      Rc = elmc_record_update_index_cow(out, model, ELMC_FIELD_MAIN_MODEL_QUOTETEXT, owned[0]);
      CHECK_RC(Rc);
      if (*out == model) {
        *out = elmc_retain(*out);
      }
    }
  CATCH_END
  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}

static RC elmc_fn_Main_themeColorCode_native(ElmcValue **out, elmc_int_t color) {
  RC Rc = RC_SUCCESS;
  CATCH_BEGIN
    elmc_int_t case_int_1;
    case_int_1 = 0;
    switch (color) {
      case ELMC_UNION_COMPANION_TYPES_WATCHBODY: {
        case_int_1 = 1;
        break;
      }
      case ELMC_UNION_COMPANION_TYPES_CREAM: {
        case_int_1 = 2;
        break;
      }
      case ELMC_UNION_COMPANION_TYPES_WHITE: {
        case_int_1 = 3;
        break;
      }
      case ELMC_UNION_COMPANION_TYPES_BLACK: {
        case_int_1 = 4;
        break;
      }
      case ELMC_UNION_COMPANION_TYPES_BRASS: {
        case_int_1 = 5;
        break;
      }
      case ELMC_UNION_COMPANION_TYPES_NAVY: {
        case_int_1 = 6;
        break;
      }
      case ELMC_UNION_COMPANION_TYPES_SLATE: {
        case_int_1 = 7;
        break;
      }
      case ELMC_UNION_COMPANION_TYPES_BURGUNDY: {
        case_int_1 = 8;
        break;
      }
      case ELMC_UNION_COMPANION_TYPES_MAGENTA: {
        case_int_1 = 9;
        break;
      }
    }
    Rc = elmc_new_int(out, case_int_1);
    CHECK_RC(Rc);
  CATCH_END
  return Rc;
}
static RC elmc_fn_Main_themeColorCode(ElmcValue **out, ElmcValue *color) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  return elmc_fn_Main_themeColorCode_native(out, (color && (color)->tag == ELMC_TAG_INT ? elmc_as_int(color) : (color && (color)->tag == ELMC_TAG_TUPLE2 && (color)->payload != NULL ? elmc_as_int(((ElmcTuple2 *)(color)->payload)->first) : -1)));
}

static __attribute__((noinline, noclone)) ElmcValue * elmc_fn_Main_themeColorFromCode(elmc_int_t code, ElmcValue *fallback) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  static const elmc_int_t elmc_dense_lut_Main_themeColorFromCode[9] = { ELMC_UNION_COMPANION_TYPES_WATCHBODY, ELMC_UNION_COMPANION_TYPES_CREAM, ELMC_UNION_COMPANION_TYPES_WHITE, ELMC_UNION_COMPANION_TYPES_BLACK, ELMC_UNION_COMPANION_TYPES_BRASS, ELMC_UNION_COMPANION_TYPES_NAVY, ELMC_UNION_COMPANION_TYPES_SLATE, ELMC_UNION_COMPANION_TYPES_BURGUNDY, ELMC_UNION_COMPANION_TYPES_MAGENTA };
  ElmcValue *__dense_out = NULL;
  elmc_int_t __dense_i = code;
  if ((uint32_t)__dense_i < 1u || (uint32_t)__dense_i > 9u) {
    __dense_out = elmc_retain(fallback);
  } else {
    (void)elmc_new_int(&__dense_out, elmc_dense_lut_Main_themeColorFromCode[__dense_i - 1]);
  }
  return __dense_out;
}

static __attribute__((noinline, noclone)) RC elmc_fn_Main_resolveThemeColor(ElmcValue **out, ElmcValue *color, ElmcValue *caseColor) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  CATCH_BEGIN
    static const elmc_int_t elmc_dense_lut_Main_resolveThemeColor[9] = { 0, ELMC_COLOR_PASTEL_YELLOW, ELMC_COLOR_WHITE, ELMC_COLOR_BLACK, ELMC_COLOR_BRASS, ELMC_COLOR_OXFORD_BLUE, ELMC_COLOR_LIGHT_GRAY, ELMC_COLOR_DARK_CANDY_APPLE_RED, ELMC_COLOR_MAGENTA };
    elmc_int_t __dense_i = elmc_union_tag_as_int(color);
    if ((uint32_t)__dense_i < 1u || (uint32_t)__dense_i > 9u) {
      *out = elmc_retain(caseColor);
    } else if (__dense_i == 1) {
      *out = elmc_retain(caseColor);
    } else {
      Rc = elmc_new_int(out, elmc_dense_lut_Main_resolveThemeColor[__dense_i - 1]);
      CHECK_RC(Rc);
    }
  CATCH_END
  return Rc;
}

static RC elmc_fn_Main_normalizeQuote(ElmcValue **out, ElmcValue *text) {
  /* Ownership policy: borrow_arg, retain_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[4] = {0};
  CATCH_BEGIN
    bool plan_native_bool_3 = false;
    /* plan block 0 */
    Rc = elmc_string_trim(&owned[0], text);
    CHECK_RC(Rc);
    static ElmcValue plan_str_immortal_21186 = { ELMC_RC_IMMORTAL, ELMC_TAG_STRING, (void *)"", 0 };
    owned[1] = elmc_retain(&plan_str_immortal_21186);
    plan_native_bool_3 = elmc_string_equals(owned[0], owned[1]);
    if (!plan_native_bool_3) goto elmc_plan_block_3;
    Rc = elmc_fn_Main_defaultQuote(&owned[2]);
    CHECK_RC(Rc);
    elmc_plan_block_3:
    if (plan_native_bool_3) {
      owned[3] = owned[2];
      owned[2] = NULL;
    } else {
      owned[3] = owned[0];
      owned[0] = NULL;
    }
    *out = owned[3];
    owned[3] = NULL;
  CATCH_END
  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}

static elmc_int_t elmc_fn_Main_clampSeconds(elmc_int_t value, ElmcValue *fallback) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  elmc_int_t plan_native_int_10 __attribute__((unused)) = 0;
  bool plan_native_bool_3 = false;
  bool plan_native_bool_7 = false;
  /* plan block 0 */
  plan_native_bool_3 = (value < 1);
  if (plan_native_bool_3) goto elmc_plan_block_3;
  plan_native_bool_7 = (value > 300);
  plan_native_int_10 = (plan_native_bool_7) ? 300 : value;
  elmc_plan_block_3:
  const elmc_int_t plan_native_int_11 = (plan_native_bool_3) ? elmc_as_int(fallback) : plan_native_int_10;
  return plan_native_int_11;
}

static ElmcValue * elmc_fn_Main_refreshRemaining(ElmcValue *model) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  ElmcValue *owned[4] = {0};
  elmc_int_t plan_native_int_1 __attribute__((unused)) = 0;
  bool plan_native_bool_3 = false;
  bool plan_native_bool_10 = false;
  /* plan block 0 */
  {
    RC __call_rc = elmc_fn_Main_phaseSeconds(&plan_native_int_1, model);
    if (__call_rc != RC_SUCCESS) {
      ELMC_RC_LOG_FAIL(__call_rc, "elmc_fn_Main_phaseSeconds", "plan call failed");
      plan_native_int_1 = 0;
    }
  }
  const elmc_int_t plan_native_int_2 = ELMC_RECORD_GET_INDEX_INT(model, ELMC_FIELD_MAIN_MODEL_REMAININGSEC);
  plan_native_bool_3 = (plan_native_int_2 > plan_native_int_1);
  if (!plan_native_bool_3) goto elmc_plan_block_2;
  const elmc_int_t plan_native_int_5 = plan_native_int_1;
  owned[0] = NULL;
  {
    RC __alloc_rc = elmc_record_update_index_int_cow(&owned[0], model, ELMC_FIELD_MAIN_MODEL_REMAININGSEC, plan_native_int_5);
    if (__alloc_rc != RC_SUCCESS) {
      ELMC_RC_LOG_FAIL(__alloc_rc, "elmc_record_update_index_int_cow", "allocation failed");
      owned[0] = NULL;;
    }
  }
  if (owned[0] == model) {
    owned[0] = elmc_retain(owned[0]);
  }
  goto elmc_plan_block_3;
  elmc_plan_block_2:
  const elmc_int_t plan_native_int_8 = ELMC_RECORD_GET_INDEX_INT(model, ELMC_FIELD_MAIN_MODEL_REMAININGSEC);
  plan_native_bool_10 = (plan_native_int_8 < 1);
  if (!plan_native_bool_10) goto elmc_plan_block_6;
  const elmc_int_t plan_native_int_12 = plan_native_int_1;
  owned[1] = NULL;
  {
    RC __alloc_rc = elmc_record_update_index_int_cow(&owned[1], model, ELMC_FIELD_MAIN_MODEL_REMAININGSEC, plan_native_int_12);
    if (__alloc_rc != RC_SUCCESS) {
      ELMC_RC_LOG_FAIL(__alloc_rc, "elmc_record_update_index_int_cow", "allocation failed");
      owned[1] = NULL;;
    }
  }
  if (owned[1] == model) {
    owned[1] = elmc_retain(owned[1]);
  }
  elmc_plan_block_6:
  if (plan_native_bool_10) {
    owned[2] = owned[1];
    owned[1] = NULL;
  } else {
    owned[2] = elmc_retain(model);
  }
  elmc_plan_block_3:
  if (plan_native_bool_3) {
    owned[3] = owned[0];
    owned[0] = NULL;
  } else {
    owned[3] = owned[2];
    owned[2] = NULL;
  }
  {
    ElmcValue *__ret = owned[3];
    elmc_owned_null_aliases(owned, 4, __ret);
    elmc_release_array_lifo(owned, 4);
    return __ret;
  }
}

static RC elmc_fn_Main_phaseSeconds(elmc_int_t *out, ElmcValue *model) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[1] = {0};
  CATCH_BEGIN
    elmc_int_t plan_native_int_2 __attribute__((unused)) = 0;
    /* plan block 0 */
    owned[0] = elmc_record_get_index(model, ELMC_FIELD_MAIN_MODEL_PHASE);
    if (elmc_union_tag_as_int(owned[0]) != ELMC_UNION_MAIN_SHOWWATCH) {
      if (elmc_union_tag_as_int(owned[0]) == ELMC_UNION_MAIN_SHOWQUOTE) goto elmc_plan_block_4;
      else goto elmc_plan_block_7;
    }
    plan_native_int_2 = ELMC_RECORD_GET_INDEX_INT(model, ELMC_FIELD_MAIN_MODEL_WATCHSECONDS);
    goto elmc_plan_block_7;
    elmc_plan_block_4:
    plan_native_int_2 = ELMC_RECORD_GET_INDEX_INT(model, ELMC_FIELD_MAIN_MODEL_QUOTESECONDS);
    elmc_plan_block_7:
    *out = plan_native_int_2;
  CATCH_END
  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}

static RC elmc_fn_Main_tickPhase(ElmcValue **out, ElmcValue *model) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  const elmc_int_t direct_hoisted_rec_1 = ELMC_RECORD_GET_INDEX_INT(model, ELMC_FIELD_MAIN_MODEL_REMAININGSEC);
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[8] = {0};
  CATCH_BEGIN
    elmc_int_t plan_native_int_6 __attribute__((unused)) = 0;
    bool plan_native_bool_3 = false;
    bool plan_native_bool_9 = false;
    /* plan block 0 */
    const elmc_int_t plan_native_int_1 = direct_hoisted_rec_1;
    plan_native_bool_3 = (plan_native_int_1 < 1);
    if (plan_native_bool_3) goto elmc_plan_block_3;
    plan_native_int_6 = direct_hoisted_rec_1;
    elmc_plan_block_3:
    plan_native_bool_9 = (plan_native_bool_3) ? true : (plan_native_int_6 == 1);
    if (!plan_native_bool_9) goto elmc_plan_block_7;
    owned[0] = elmc_record_get_index(model, ELMC_FIELD_MAIN_MODEL_PHASE);
    if (elmc_union_tag_as_int(owned[0]) != ELMC_UNION_MAIN_SHOWWATCH) {
      if (elmc_union_tag_as_int(owned[0]) == ELMC_UNION_MAIN_SHOWQUOTE) goto elmc_plan_block_12;
      else goto elmc_plan_block_14;
    }
    Rc = elmc_new_int(&owned[2], 2);
    CHECK_RC(Rc);
    {
      Rc = elmc_record_update_index_int_cow(&owned[3], model, ELMC_FIELD_MAIN_MODEL_PHASE, ELMC_UNION_MAIN_SHOWQUOTE);
      CHECK_RC(Rc);
      if (owned[3] == model) {
        owned[3] = elmc_retain(owned[3]);
      }
    }
    const elmc_int_t plan_native_int_16 = ELMC_RECORD_GET_INDEX_INT(model, ELMC_FIELD_MAIN_MODEL_QUOTESECONDS);
    Rc = elmc_record_update_index_int_cow_drop(&owned[1], owned[3], ELMC_FIELD_MAIN_MODEL_REMAININGSEC, plan_native_int_16);
    CHECK_RC(Rc);
    owned[3] = NULL;
    goto elmc_plan_block_8;
    elmc_plan_block_12:
    Rc = elmc_new_int(&owned[4], 1);
    CHECK_RC(Rc);
    {
      Rc = elmc_record_update_index_int_cow(&owned[5], model, ELMC_FIELD_MAIN_MODEL_PHASE, ELMC_UNION_MAIN_SHOWWATCH);
      CHECK_RC(Rc);
      if (owned[5] == model) {
        owned[5] = elmc_retain(owned[5]);
      }
    }
    const elmc_int_t plan_native_int_21 = ELMC_RECORD_GET_INDEX_INT(model, ELMC_FIELD_MAIN_MODEL_WATCHSECONDS);
    Rc = elmc_record_update_index_int_cow_drop(&owned[1], owned[5], ELMC_FIELD_MAIN_MODEL_REMAININGSEC, plan_native_int_21);
    CHECK_RC(Rc);
    owned[5] = NULL;
    goto elmc_plan_block_8;
    elmc_plan_block_14:
    goto elmc_plan_block_8;
    elmc_plan_block_7:
    const elmc_int_t plan_native_int_24 = direct_hoisted_rec_1;
    const elmc_int_t plan_native_int_26 = plan_native_int_24 - 1;
    {
      Rc = elmc_record_update_index_int_cow(&owned[6], model, ELMC_FIELD_MAIN_MODEL_REMAININGSEC, plan_native_int_26);
      CHECK_RC(Rc);
      if (owned[6] == model) {
        owned[6] = elmc_retain(owned[6]);
      }
    }
    elmc_plan_block_8:
    if (plan_native_bool_9) {
      owned[7] = owned[1];
      owned[1] = NULL;
    } else {
      owned[7] = owned[6];
      owned[6] = NULL;
    }
    *out = owned[7];
    owned[7] = NULL;
  CATCH_END
  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}

static RC elmc_fn_Main_setSecond(ElmcValue **out, ElmcValue *second, ElmcValue *model) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[4] = {0};
  CATCH_BEGIN
    /* plan block 0 */
    owned[1] = elmc_retain(second);
    ElmcValue *plan_cap_4[1] = { owned[1] };
    Rc = elmc_closure_new_rc(&owned[0], elmc_fn_Main_setSecond_closure_0, 1, 1, plan_cap_4);
    CHECK_RC(Rc);
    owned[2] = elmc_record_get_index(model, ELMC_FIELD_MAIN_MODEL_NOW);
    Rc = elmc_fn_Main_updateField(&owned[3], owned[0], owned[2]);
    CHECK_RC(Rc);
    if (owned[3] == owned[0]) {
      owned[0] = NULL;
    }
    if (owned[3] == owned[2]) {
      owned[2] = NULL;
    }
    {
      Rc = elmc_record_update_index_cow(out, model, ELMC_FIELD_MAIN_MODEL_NOW, owned[3]);
      CHECK_RC(Rc);
      if (*out == model) {
        *out = elmc_retain(*out);
      }
    }
  CATCH_END
  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}

static RC elmc_fn_Main_setMinute(ElmcValue **out, ElmcValue *minute, ElmcValue *model) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[4] = {0};
  CATCH_BEGIN
    /* plan block 0 */
    owned[1] = elmc_retain(minute);
    ElmcValue *plan_cap_4[1] = { owned[1] };
    Rc = elmc_closure_new_rc(&owned[0], elmc_fn_Main_setMinute_closure_0, 1, 1, plan_cap_4);
    CHECK_RC(Rc);
    owned[2] = elmc_record_get_index(model, ELMC_FIELD_MAIN_MODEL_NOW);
    Rc = elmc_fn_Main_updateField(&owned[3], owned[0], owned[2]);
    CHECK_RC(Rc);
    if (owned[3] == owned[0]) {
      owned[0] = NULL;
    }
    if (owned[3] == owned[2]) {
      owned[2] = NULL;
    }
    {
      Rc = elmc_record_update_index_cow(out, model, ELMC_FIELD_MAIN_MODEL_NOW, owned[3]);
      CHECK_RC(Rc);
      if (*out == model) {
        *out = elmc_retain(*out);
      }
    }
  CATCH_END
  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}

static RC elmc_fn_Main_updateField(ElmcValue **out, ElmcValue *fn, ElmcValue *maybeNow) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[5] = {0};
  CATCH_BEGIN
    bool plan_native_bool_2 = false;
    /* plan block 0 */
    plan_native_bool_2 = elmc_maybe_is_nothing(maybeNow);
    if (!plan_native_bool_2) goto elmc_plan_block_2;
    owned[0] = elmc_maybe_nothing();
    goto elmc_plan_block_3;
    elmc_plan_block_2:
    owned[1] = elmc_maybe_just_payload(maybeNow);
    ElmcValue *plan_closure_argv_21250[1] = { owned[1] };
    Rc = elmc_closure_call_rc(&owned[2], fn, plan_closure_argv_21250, 1);
    CHECK_RC(Rc);
    Rc = elmc_maybe_just_own(&owned[3], owned[2]);
    CHECK_RC(Rc);
    owned[2] = NULL;
    elmc_plan_block_3:
    if (plan_native_bool_2) {
      owned[4] = owned[0];
      owned[0] = NULL;
    } else {
      owned[4] = owned[3];
      owned[3] = NULL;
    }
    *out = owned[4];
    owned[4] = NULL;
  CATCH_END
  owned[1] = NULL;
  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}

static RC elmc_fn_Main_refreshDraw(ElmcValue **out, ElmcValue *model) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[13] = {0};
  CATCH_BEGIN
    bool plan_native_bool_2 = false;
    /* plan block 0 */
    owned[0] = elmc_record_get_index(model, ELMC_FIELD_MAIN_MODEL_NOW);
    plan_native_bool_2 = elmc_maybe_is_nothing(owned[0]);
    if (!plan_native_bool_2) goto elmc_plan_block_2;
    owned[1] = elmc_maybe_nothing();
    {
      Rc = elmc_record_update_index_cow(&owned[2], model, ELMC_FIELD_MAIN_MODEL_HANDS, owned[1]);
      CHECK_RC(Rc);
      if (owned[2] == model) {
        owned[2] = elmc_retain(owned[2]);
      }
    }
    static ElmcValue plan_str_immortal_21314 = { ELMC_RC_IMMORTAL, ELMC_TAG_STRING, (void *)"", 0 };
    owned[3] = elmc_retain(&plan_str_immortal_21314);
    Rc = elmc_record_update_index_cow_drop(&owned[4], owned[2], ELMC_FIELD_MAIN_MODEL_DATELABEL, owned[3]);
    CHECK_RC(Rc);
    owned[2] = NULL;
    goto elmc_plan_block_3;
    elmc_plan_block_2:
    owned[5] = elmc_retain(elmc_maybe_just_payload(owned[0]));
    owned[6] = elmc_record_get_index(model, ELMC_FIELD_MAIN_MODEL_LAYOUT);
    Rc = elmc_fn_Main_buildHands(&owned[7], owned[6], owned[5]);
    CHECK_RC(Rc);
    if (owned[7] == owned[6]) {
      owned[6] = NULL;
    }
    Rc = elmc_maybe_just_own(&owned[8], owned[7]);
    CHECK_RC(Rc);
    owned[7] = NULL;
    {
      Rc = elmc_record_update_index_cow(&owned[9], model, ELMC_FIELD_MAIN_MODEL_HANDS, owned[8]);
      CHECK_RC(Rc);
      if (owned[9] == model) {
        owned[9] = elmc_retain(owned[9]);
      }
    }
    const elmc_int_t plan_native_int_15 = ELMC_RECORD_GET_INDEX_INT(owned[5], ELMC_FIELD_PEBBLE_TIME_CURRENTDATETIME_DAY);
    Rc = elmc_string_from_native_int(&owned[10], plan_native_int_15);
    CHECK_RC(Rc);
    Rc = elmc_record_update_index_cow_drop(&owned[11], owned[9], ELMC_FIELD_MAIN_MODEL_DATELABEL, owned[10]);
    CHECK_RC(Rc);
    owned[9] = NULL;
    elmc_plan_block_3:
    if (plan_native_bool_2) {
      owned[12] = owned[4];
      owned[4] = NULL;
    } else {
      owned[12] = owned[11];
      owned[11] = NULL;
    }
    *out = owned[12];
    owned[12] = NULL;
  CATCH_END
  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}

static RC elmc_fn_Main_refreshAfterTick(ElmcValue **out, ElmcValue *model) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[2] = {0};
  CATCH_BEGIN
    /* plan block 0 */
    owned[0] = elmc_record_get_index(model, ELMC_FIELD_MAIN_MODEL_PHASE);
    if (elmc_union_tag_as_int(owned[0]) != ELMC_UNION_MAIN_SHOWWATCH) {
      if (elmc_union_tag_as_int(owned[0]) == ELMC_UNION_MAIN_SHOWQUOTE) goto elmc_plan_block_4;
      else goto elmc_plan_block_7;
    }
    Rc = elmc_fn_Main_refreshDraw(&owned[1], model);
    CHECK_RC(Rc);
    goto elmc_plan_block_7;
    elmc_plan_block_4:
    owned[1] = elmc_retain(model);
    elmc_plan_block_7:
    *out = owned[1];
    owned[1] = NULL;
  CATCH_END
  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}

static RC elmc_fn_Main_refreshQuoteLayout(ElmcValue **out, ElmcValue *model) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[13] = {0};
  CATCH_BEGIN
    /* plan block 0 */
    const elmc_int_t plan_native_int_1 = ELMC_RECORD_GET_INDEX_INT(model, ELMC_FIELD_MAIN_MODEL_SCREENW);
    const elmc_int_t plan_native_int_2 = ELMC_RECORD_GET_INDEX_INT(model, ELMC_FIELD_MAIN_MODEL_SCREENH);
    owned[0] = elmc_record_get_index(model, ELMC_FIELD_MAIN_MODEL_DISPLAYSHAPE);
    Rc = elmc_fn_Main_quoteBounds(&owned[1], plan_native_int_1, plan_native_int_2, owned[0]);
    CHECK_RC(Rc);
    if (owned[1] == owned[0]) {
      owned[0] = NULL;
    }
    owned[2] = elmc_record_get_index(model, ELMC_FIELD_MAIN_MODEL_QUOTE);
    Rc = elmc_fn_Main_pickQuoteFont(&owned[3], owned[2], owned[1]);
    CHECK_RC(Rc);
    if (owned[3] == owned[2]) {
      owned[2] = NULL;
    }
    Rc = elmc_fn_Pebble_Ui_Resources_fontInfo(&owned[4], owned[3]);
    CHECK_RC(Rc);
    const elmc_int_t plan_native_int_9 = ELMC_RECORD_GET_INDEX_INT(owned[4], ELMC_FIELD_PEBBLE_UI_RESOURCES_FONTINFO_HEIGHT);
    const elmc_int_t plan_native_int_16 = ELMC_RECORD_GET_INDEX_INT(owned[1], ELMC_FIELD_MAIN_RECT_W);
    const elmc_int_t plan_native_int_18 = ((4 >= elmc_int_idiv(plan_native_int_16, ((6 >= elmc_int_idiv(((14 >= plan_native_int_9) ? 14 : plan_native_int_9), 2)) ? 6 : elmc_int_idiv(((14 >= plan_native_int_9) ? 14 : plan_native_int_9), 2)))) ? 4 : elmc_int_idiv(plan_native_int_16, ((6 >= elmc_int_idiv(((14 >= plan_native_int_9) ? 14 : plan_native_int_9), 2)) ? 6 : elmc_int_idiv(((14 >= plan_native_int_9) ? 14 : plan_native_int_9), 2))));
    owned[6] = elmc_retain(owned[1]);
    ElmcValue *plan_ephemeral_box_21442 = NULL;
    Rc = elmc_new_int(&plan_ephemeral_box_21442, ((14 >= plan_native_int_9) ? 14 : plan_native_int_9));
    CHECK_RC(Rc);
    owned[7] = plan_ephemeral_box_21442;
    owned[8] = elmc_record_get_index(model, ELMC_FIELD_MAIN_MODEL_QUOTE);
    Rc = elmc_fn_Main_wrapQuoteWords(&owned[9], owned[8], plan_native_int_18);
    CHECK_RC(Rc);
    ElmcValue *list_walk_map_caps_0[2] = { owned[6], owned[7] };
    ElmcValue *list_walk_map_head_0 = elmc_list_nil();
    if (owned[9] && owned[9]->tag == ELMC_TAG_LAZY_MAP) {
      int list_walk_llen_0 = elmc_lazy_map_length(owned[9]);
      int list_walk_idx_0 = 0;
      for (int list_walk_ii_0 = 0;
      Rc == RC_SUCCESS && list_walk_ii_0 < list_walk_llen_0;
      list_walk_ii_0++) {
        ElmcValue *list_walk_nth_0 = NULL;
        Rc = elmc_lazy_map_nth(&list_walk_nth_0, owned[9], list_walk_ii_0);
        CHECK_RC(Rc);
        ElmcValue *list_walk_map_item_0 = NULL;
        ElmcValue *__idx_box__ = NULL;
        Rc = elmc_new_int(&__idx_box__, list_walk_idx_0);
        CHECK_RC(Rc);
        ElmcValue *loop_args[2] = { __idx_box__, list_walk_nth_0 };
        Rc = elmc_fn_Main_refreshQuoteLayout_closure_0(&list_walk_map_item_0, loop_args, 2, list_walk_map_caps_0, 2);
        elmc_release(__idx_box__);
        CHECK_RC(Rc);
        {
          ElmcValue *__acc_next__ = NULL;
          Rc = elmc_list_cons(&__acc_next__, list_walk_map_item_0, list_walk_map_head_0);
          CHECK_RC(Rc);
          elmc_release(list_walk_map_item_0);
          list_walk_map_item_0 = NULL;
          elmc_release(list_walk_map_head_0);
          list_walk_map_head_0 = __acc_next__;
        }
        list_walk_idx_0++;
        elmc_release(list_walk_nth_0);
        list_walk_nth_0 = NULL;
      }
    } else {
      ElmcValue *list_walk_src_0 = NULL;
      Rc = elmc_list_materialize_cons(&list_walk_src_0, owned[9]);
      CHECK_RC(Rc);
      ElmcValue *list_walk_map_cursor_0 = list_walk_src_0;
      int list_walk_idx_0 = 0;
      while (list_walk_map_cursor_0 && list_walk_map_cursor_0->tag == ELMC_TAG_LIST && list_walk_map_cursor_0->payload != NULL) {
        ElmcCons *list_walk_map_node_0 = (ElmcCons *)list_walk_map_cursor_0->payload;
        ElmcValue *list_walk_map_item_0 = NULL;
        ElmcValue *__idx_box__ = NULL;
        Rc = elmc_new_int(&__idx_box__, list_walk_idx_0);
        CHECK_RC(Rc);
        ElmcValue *loop_args[2] = { __idx_box__, list_walk_map_node_0->head };
        Rc = elmc_fn_Main_refreshQuoteLayout_closure_0(&list_walk_map_item_0, loop_args, 2, list_walk_map_caps_0, 2);
        elmc_release(__idx_box__);
        CHECK_RC(Rc);
        {
          ElmcValue *__acc_next__ = NULL;
          Rc = elmc_list_cons(&__acc_next__, list_walk_map_item_0, list_walk_map_head_0);
          CHECK_RC(Rc);
          elmc_release(list_walk_map_item_0);
          list_walk_map_item_0 = NULL;
          elmc_release(list_walk_map_head_0);
          list_walk_map_head_0 = __acc_next__;
        }
        list_walk_idx_0++;
        list_walk_map_cursor_0 = list_walk_map_node_0->tail;
      }
      elmc_release(list_walk_src_0);
    }
    {
      ElmcValue *__rev_prev__ = elmc_list_nil();
      ElmcValue *__rev_cur__ = list_walk_map_head_0;
      while (__rev_cur__ && __rev_cur__->tag == ELMC_TAG_LIST && __rev_cur__->payload != NULL) {
        ElmcCons *__rev_node__ = (ElmcCons *)__rev_cur__->payload;
        ElmcValue *__rev_next__ = __rev_node__->tail;
        __rev_node__->tail = __rev_prev__;
        __rev_prev__ = __rev_cur__;
        __rev_cur__ = __rev_next__;
      }
      list_walk_map_head_0 = __rev_prev__;
    }
    owned[12] = list_walk_map_head_0;
    owned[10] = owned[3];
    owned[3] = NULL;
    {
      Rc = elmc_record_update_index_cow(out, model, ELMC_FIELD_MAIN_MODEL_QUOTEFONT, owned[10]);
      CHECK_RC(Rc);
      if (*out == model) {
        *out = elmc_retain(*out);
      }
    }
    owned[11] = owned[1];
    owned[1] = NULL;
    Rc = elmc_record_update_index_cow_drop(out, *out, ELMC_FIELD_MAIN_MODEL_QUOTEBOX, owned[11]);
    CHECK_RC(Rc);
    Rc = elmc_record_update_index_cow_drop(out, *out, ELMC_FIELD_MAIN_MODEL_QUOTELINES, owned[12]);
    CHECK_RC(Rc);
  CATCH_END
  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}

RC elmc_fn_Main_subscriptions(ElmcValue **out, ElmcValue *ignoredArg) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  (void)ignoredArg;
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[5] = {0};
  CATCH_BEGIN
    /* plan block 0 */
    Rc = elmc_sub1(&owned[0], ELMC_SUBSCRIPTION_SECOND_CHANGE, ELMC_PEBBLE_MSG_SECONDCHANGED);
    CHECK_RC(Rc);
    Rc = elmc_sub1(&owned[1], ELMC_SUBSCRIPTION_MINUTE_CHANGE, ELMC_PEBBLE_MSG_MINUTECHANGED);
    CHECK_RC(Rc);
    Rc = elmc_sub1(&owned[2], ELMC_SUBSCRIPTION_HOUR_CHANGE, ELMC_PEBBLE_MSG_HOURCHANGED);
    CHECK_RC(Rc);
    Rc = elmc_sub1(&owned[3], ELMC_SUBSCRIPTION_APPMESSAGE, ELMC_PEBBLE_MSG_FROMPHONE);
    CHECK_RC(Rc);
    ElmcValue *plan_list_items_21506[4] = { owned[0], owned[1], owned[2], owned[3] };
    Rc = elmc_list_from_values(&owned[4], plan_list_items_21506, 4);
    CHECK_RC(Rc);
    *out = owned[4];
    owned[4] = NULL;
  CATCH_END
  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}

static RC elmc_fn_Main_wrapQuoteWords(ElmcValue **out, ElmcValue *quote, elmc_int_t maxChars) {
  /* Ownership policy: borrow_arg, retain_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[5] = {0};
  CATCH_BEGIN
    /* plan block 0 */
    const elmc_int_t plan_native_int_2 = maxChars;
    ElmcValue *plan_ephemeral_box_21570 = NULL;
    Rc = elmc_new_int(&plan_ephemeral_box_21570, maxChars);
    CHECK_RC(Rc);
    owned[1] = plan_ephemeral_box_21570;
    owned[2] = elmc_list_nil();
    Rc = elmc_string_words(&owned[3], quote);
    CHECK_RC(Rc);
    ElmcValue *list_walk_foldl_caps_0[1] = { owned[1] };
    ElmcValue *list_walk_foldl_acc_0 = elmc_retain(owned[2]);
    if (owned[3] && owned[3]->tag == ELMC_TAG_LAZY_MAP) {
      int list_walk_llen_0 = elmc_lazy_map_length(owned[3]);
      for (int list_walk_ii_0 = 0;
      Rc == RC_SUCCESS && list_walk_ii_0 < list_walk_llen_0;
      list_walk_ii_0++) {
        ElmcValue *list_walk_nth_0 = NULL;
        Rc = elmc_lazy_map_nth(&list_walk_nth_0, owned[3], list_walk_ii_0);
        CHECK_RC(Rc);
        {
          ElmcValue *__fold_next__ = NULL;
          ElmcValue *loop_args[2] = { list_walk_nth_0, list_walk_foldl_acc_0 };
          Rc = elmc_fn_Main_wrapQuoteWords_closure_0(&__fold_next__, loop_args, 2, list_walk_foldl_caps_0, 1);
          CHECK_RC(Rc);
          elmc_release(list_walk_foldl_acc_0);
          list_walk_foldl_acc_0 = __fold_next__;
        }
        elmc_release(list_walk_nth_0);
        list_walk_nth_0 = NULL;
      }
    } else {
      ElmcValue *list_walk_src_0 = NULL;
      Rc = elmc_list_materialize_cons(&list_walk_src_0, owned[3]);
      CHECK_RC(Rc);
      ElmcValue *list_walk_foldl_cursor_0 = list_walk_src_0;
      while (list_walk_foldl_cursor_0 && list_walk_foldl_cursor_0->tag == ELMC_TAG_LIST && list_walk_foldl_cursor_0->payload != NULL) {
        ElmcCons *list_walk_foldl_node_0 = (ElmcCons *)list_walk_foldl_cursor_0->payload;
        {
          ElmcValue *__fold_next__ = NULL;
          ElmcValue *loop_args[2] = { list_walk_foldl_node_0->head, list_walk_foldl_acc_0 };
          Rc = elmc_fn_Main_wrapQuoteWords_closure_0(&__fold_next__, loop_args, 2, list_walk_foldl_caps_0, 1);
          CHECK_RC(Rc);
          elmc_release(list_walk_foldl_acc_0);
          list_walk_foldl_acc_0 = __fold_next__;
        }
        list_walk_foldl_cursor_0 = list_walk_foldl_node_0->tail;
      }
      elmc_release(list_walk_src_0);
    }
    owned[4] = list_walk_foldl_acc_0;
    /* elm/core: List.reverse */
    Rc = elmc_list_reverse(out, owned[4]);
    CHECK_RC(Rc);
  CATCH_END
  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}

static RC elmc_fn_Main_accQuoteWord(ElmcValue **out, elmc_int_t maxChars, ElmcValue *word, ElmcValue *lines) {
  /* Ownership policy: borrow_arg, retain_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[15] = {0};
  CATCH_BEGIN
    elmc_int_t plan_native_int_24 __attribute__((unused)) = 0;
    bool plan_native_bool_3 = false;
    bool plan_native_bool_17 = false;
    bool plan_native_bool_27 = false;
    /* plan block 0 */
    plan_native_bool_3 = elmc_as_bool(elmc_list_is_empty(lines));
    if (!plan_native_bool_3) goto elmc_plan_block_2;
    ElmcValue *plan_list_items_21634[1] = { word };
    Rc = elmc_list_from_values(&owned[0], plan_list_items_21634, 1);
    CHECK_RC(Rc);
    goto elmc_plan_block_3;
    elmc_plan_block_2:
    Rc = elmc_list_head(&owned[1], lines);
    CHECK_RC(Rc);
    owned[2] = elmc_retain(elmc_maybe_just_payload(owned[1]));
    Rc = elmc_list_tail(&owned[3], lines);
    CHECK_RC(Rc);
    owned[4] = elmc_retain(elmc_maybe_just_payload(owned[3]));
    const elmc_int_t plan_native_int_10 = elmc_string_length(owned[2]);
    const elmc_int_t plan_native_int_12 = plan_native_int_10 + 1;
    const elmc_int_t plan_native_int_14 = elmc_string_length(word);
    const elmc_int_t plan_native_int_15 = plan_native_int_12 + plan_native_int_14;
    plan_native_bool_17 = (plan_native_int_15 < maxChars);
    if (plan_native_bool_17) goto elmc_plan_block_7;
    const elmc_int_t plan_native_int_19 = elmc_string_length(owned[2]);
    const elmc_int_t plan_native_int_21 = plan_native_int_19 + 1;
    const elmc_int_t plan_native_int_23 = elmc_string_length(word);
    plan_native_int_24 = plan_native_int_21 + plan_native_int_23;
    elmc_plan_block_7:
    plan_native_bool_27 = (plan_native_bool_17) ? true : (plan_native_int_24 == maxChars);
    if (!plan_native_bool_27) goto elmc_plan_block_11;
    static ElmcValue plan_str_immortal_21698 = { ELMC_RC_IMMORTAL, ELMC_TAG_STRING, (void *)" ", 1 };
    owned[5] = elmc_retain(&plan_str_immortal_21698);
    Rc = elmc_string_append(&owned[6], owned[5], word);
    CHECK_RC(Rc);
    Rc = elmc_string_append(&owned[7], owned[2], owned[6]);
    CHECK_RC(Rc);
    owned[9] = owned[4];
    owned[4] = NULL;
    /* elm/core: List.cons */
    Rc = elmc_list_cons(&owned[8], owned[7], owned[9]);
    CHECK_RC(Rc);
    goto elmc_plan_block_12;
    elmc_plan_block_11:
    owned[11] = elmc_retain(word);
    owned[12] = elmc_retain(lines);
    /* elm/core: List.cons */
    Rc = elmc_list_cons(&owned[10], owned[11], owned[12]);
    CHECK_RC(Rc);
    elmc_plan_block_12:
    if (plan_native_bool_27) {
      owned[13] = owned[8];
      owned[8] = NULL;
    } else {
      owned[13] = owned[10];
      owned[10] = NULL;
    }
    elmc_plan_block_3:
    if (plan_native_bool_3) {
      owned[14] = owned[0];
      owned[0] = NULL;
    } else {
      owned[14] = owned[13];
      owned[13] = NULL;
    }
    *out = owned[14];
    owned[14] = NULL;
  CATCH_END
  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}

static RC elmc_fn_Main_quoteFontCandidates(ElmcValue **out) {
  /* Ownership policy: borrow_arg, retain_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  CATCH_BEGIN
    /* plan block 0 */
    static const elmc_int_t plan_list_int_values_21762[4] = { 4, 3, 2, 1 };
    Rc = elmc_list_from_int_array(out, plan_list_int_values_21762, 4);
    CHECK_RC(Rc);
  CATCH_END
  return Rc;
}

static RC elmc_fn_Main_pickQuoteFont(ElmcValue **out, ElmcValue *quote, ElmcValue *bounds) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[1] = {0};
  CATCH_BEGIN
    /* plan block 0 */
    Rc = elmc_fn_Main_quoteFontCandidates(&owned[0]);
    CHECK_RC(Rc);
    Rc = elmc_fn_Main_pickFirstFitting(out, quote, bounds, owned[0]);
    CHECK_RC(Rc);
  CATCH_END
  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}

static RC elmc_fn_Main_pickFirstFitting(ElmcValue **out, ElmcValue *quote, ElmcValue *bounds, ElmcValue *fonts) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[9] = {0};
  CATCH_BEGIN
    bool plan_native_bool_3 = false;
    /* plan block 0 */
    plan_native_bool_3 = elmc_as_bool(elmc_list_is_empty(fonts));
    if (!plan_native_bool_3) goto elmc_plan_block_2;
    Rc = elmc_new_int(&owned[0], 1);
    CHECK_RC(Rc);
    goto elmc_plan_block_3;
    elmc_plan_block_2:
    Rc = elmc_list_head(&owned[1], fonts);
    CHECK_RC(Rc);
    owned[2] = elmc_retain(elmc_maybe_just_payload(owned[1]));
    Rc = elmc_list_tail(&owned[3], fonts);
    CHECK_RC(Rc);
    owned[4] = elmc_retain(elmc_maybe_just_payload(owned[3]));
    Rc = elmc_fn_Main_fontFitsQuote(&owned[5], quote, bounds, owned[2]);
    CHECK_RC(Rc);
    if (elmc_as_bool(owned[5])) goto elmc_plan_block_7;
    Rc = elmc_fn_Main_pickFirstFitting(&owned[6], quote, bounds, owned[4]);
    CHECK_RC(Rc);
    elmc_plan_block_7:
    if (elmc_as_bool(owned[5])) {
      owned[7] = owned[2];
      owned[2] = NULL;
    } else {
      owned[7] = owned[6];
      owned[6] = NULL;
    }
    elmc_plan_block_3:
    if (plan_native_bool_3) {
      owned[8] = owned[0];
      owned[0] = NULL;
    } else {
      owned[8] = owned[7];
      owned[7] = NULL;
    }
    *out = owned[8];
    owned[8] = NULL;
  CATCH_END
  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}

static RC elmc_fn_Main_fontFitsQuote(ElmcValue **out, ElmcValue *quote, ElmcValue *bounds, ElmcValue *font) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[4] = {0};
  CATCH_BEGIN
    elmc_int_t plan_native_int_6 __attribute__((unused)) = 0;
    elmc_int_t plan_native_int_21 __attribute__((unused)) = 0;
    elmc_int_t plan_native_int_23 __attribute__((unused)) = 0;
    bool plan_native_bool_19 = false;
    /* plan block 0 */
    Rc = elmc_fn_Pebble_Ui_Resources_fontInfo(&owned[0], font);
    CHECK_RC(Rc);
    const elmc_int_t plan_native_int_5 = ELMC_RECORD_GET_INDEX_INT(owned[0], ELMC_FIELD_PEBBLE_UI_RESOURCES_FONTINFO_HEIGHT);
    plan_native_int_6 = ((14 >= plan_native_int_5) ? 14 : plan_native_int_5);
    const elmc_int_t plan_native_int_12 = ELMC_RECORD_GET_INDEX_INT(bounds, ELMC_FIELD_MAIN_RECT_W);
    const elmc_int_t plan_native_int_14 = ((4 >= elmc_int_idiv(plan_native_int_12, ((6 >= elmc_int_idiv(plan_native_int_6, 2)) ? 6 : elmc_int_idiv(plan_native_int_6, 2)))) ? 4 : elmc_int_idiv(plan_native_int_12, ((6 >= elmc_int_idiv(plan_native_int_6, 2)) ? 6 : elmc_int_idiv(plan_native_int_6, 2))));
    Rc = elmc_fn_Main_wrapQuoteWords(&owned[1], quote, plan_native_int_14);
    CHECK_RC(Rc);
    /* elm/core: List.length */
    Rc = elmc_list_length(&owned[2], owned[1]);
    CHECK_RC(Rc);
    const elmc_int_t plan_native_int_17 = (elmc_as_int(owned[2])) * plan_native_int_6;
    const elmc_int_t plan_native_int_18 = ELMC_RECORD_GET_INDEX_INT(bounds, ELMC_FIELD_MAIN_RECT_H);
    plan_native_bool_19 = (plan_native_int_17 < plan_native_int_18);
    if (plan_native_bool_19) goto elmc_plan_block_3;
    plan_native_int_21 = (elmc_as_int(owned[2])) * plan_native_int_6;
    plan_native_int_23 = ELMC_RECORD_GET_INDEX_INT(bounds, ELMC_FIELD_MAIN_RECT_H);
    elmc_plan_block_3:
    if (plan_native_bool_19) {
      ElmcValue *plan_ephemeral_box_21826 = NULL;
      Rc = elmc_new_bool(&plan_ephemeral_box_21826, 1);
      CHECK_RC(Rc);
      owned[3] = elmc_retain(plan_ephemeral_box_21826);
      elmc_release(plan_ephemeral_box_21826);
    } else {
      ElmcValue *plan_ephemeral_box_21890 = NULL;
      Rc = elmc_new_bool(&plan_ephemeral_box_21890, (plan_native_int_21 == plan_native_int_23));
      CHECK_RC(Rc);
      owned[3] = elmc_retain(plan_ephemeral_box_21890);
      elmc_release(plan_ephemeral_box_21890);
    }
    *out = owned[3];
    owned[3] = NULL;
  CATCH_END
  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}
static RC elmc_fn_Main_fontFitsQuote_native(bool *out, ElmcValue * const quote, ElmcValue * const bounds, ElmcValue * const font) {
  ElmcValue *boxed = NULL;
  RC Rc = elmc_fn_Main_fontFitsQuote(&boxed, quote, bounds, font);
  if (Rc != RC_SUCCESS) return Rc;
  *out = elmc_as_bool(boxed);
  elmc_release(boxed);
  return RC_SUCCESS;
}

static RC elmc_fn_Main_quoteBounds(ElmcValue **out, elmc_int_t screenW, elmc_int_t screenH, ElmcValue *displayShape) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  (void)displayShape;
  RC Rc = RC_SUCCESS;
  CATCH_BEGIN
    elmc_int_t plan_native_int_7 __attribute__((unused)) = 0;
    bool plan_native_bool_3 = false;
    /* plan block 0 */
#if defined(PBL_ROUND)
    plan_native_bool_3 = true;
#else
    plan_native_bool_3 = false;
#endif
    if (!plan_native_bool_3) goto elmc_plan_block_3;
    plan_native_int_7 = elmc_int_idiv(screenW, 6);
    elmc_plan_block_3:
    const elmc_int_t plan_native_int_10 = (plan_native_bool_3) ? ((22 >= plan_native_int_7) ? 22 : plan_native_int_7) : 10;
    const elmc_int_t plan_native_int_27 = plan_native_int_10;
    const elmc_int_t plan_native_int_28 = plan_native_int_10;
    const elmc_int_t plan_native_int_16 = plan_native_int_10 * 2;
    const elmc_int_t plan_native_int_23 = plan_native_int_10 * 2;
    elmc_int_t rec_values_31_11[4] = { plan_native_int_27, plan_native_int_28, ((48 >= screenW - plan_native_int_16) ? 48 : screenW - plan_native_int_16), ((48 >= screenH - plan_native_int_23) ? 48 : screenH - plan_native_int_23) };
    Rc = elmc_record_new_values_ints(out, 4, rec_values_31_11);
    CHECK_RC(Rc);
  CATCH_END
  return Rc;
}

static RC elmc_fn_Main_secondHandColor(ElmcValue **out, ElmcValue *model) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[5] = {0};
  CATCH_BEGIN
    bool plan_native_bool_1 = false;
    /* plan block 0 */
#if defined(PBL_COLOR)
    plan_native_bool_1 = true;
#else
    plan_native_bool_1 = false;
#endif
    if (!plan_native_bool_1) goto elmc_plan_block_2;
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_FOLLY);
    CHECK_RC(Rc);
    goto elmc_plan_block_3;
    elmc_plan_block_2:
    owned[1] = elmc_record_get_index(model, ELMC_FIELD_MAIN_MODEL_WATCHFOREGROUND);
    owned[2] = elmc_record_get_index(model, ELMC_FIELD_MAIN_MODEL_CASECOLOR);
    Rc = elmc_fn_Main_resolveThemeColor(&owned[3], owned[1], owned[2]);
    CHECK_RC(Rc);
    if (owned[3] == owned[1]) {
      owned[1] = NULL;
    }
    if (owned[3] == owned[2]) {
      owned[2] = NULL;
    }
    elmc_plan_block_3:
    if (plan_native_bool_1) {
      owned[4] = owned[0];
      owned[0] = NULL;
    } else {
      owned[4] = owned[3];
      owned[3] = NULL;
    }
    *out = owned[4];
    owned[4] = NULL;
  CATCH_END
  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}

static RC elmc_fn_Main_buildLayout(ElmcValue **out, elmc_int_t screenW, elmc_int_t screenH, ElmcValue *displayShape) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  (void)displayShape;
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[16] = {0};
  CATCH_BEGIN
    bool plan_native_bool_12 = false;
    /* plan block 0 */
    ElmcValue *plan_ephemeral_box_21954 = NULL;
    Rc = elmc_new_int(&plan_ephemeral_box_21954, elmc_int_idiv(screenW, 2));
    CHECK_RC(Rc);
    ElmcValue *plan_ephemeral_box_22018 = NULL;
    Rc = elmc_new_int(&plan_ephemeral_box_22018, elmc_int_idiv(screenH, 2));
    CHECK_RC(Rc);
    ElmcValue *rec_values_11_12[2] = { plan_ephemeral_box_21954, plan_ephemeral_box_22018 };
    Rc = elmc_record_new_values_take(&owned[0], 2, rec_values_11_12);
    CHECK_RC(Rc);
#if defined(PBL_ROUND)
    plan_native_bool_12 = true;
#else
    plan_native_bool_12 = false;
#endif
    const elmc_int_t plan_native_int_15 = (plan_native_bool_12) ? 3 : 1;
    const elmc_int_t plan_native_int_22 = (elmc_int_idiv(((screenW <= screenH) ? screenW : screenH), 2)) - plan_native_int_15;
    const elmc_int_t plan_native_int_23 = ((28 >= plan_native_int_22) ? 28 : plan_native_int_22);
    Rc = elmc_new_int(&owned[1], 22);
    CHECK_RC(Rc);
    Rc = elmc_new_int(&owned[2], 16);
    CHECK_RC(Rc);
    owned[12] = elmc_retain(owned[0]);
    owned[4] = elmc_retain(owned[0]);
    ElmcValue *plan_ephemeral_box_22082 = NULL;
    Rc = elmc_new_int(&plan_ephemeral_box_22082, plan_native_int_23);
    CHECK_RC(Rc);
    owned[5] = plan_ephemeral_box_22082;
    Rc = elmc_fn_Main_hourTickIndexes(&owned[6]);
    CHECK_RC(Rc);
    ElmcValue *list_walk_map_caps_0[2] = { owned[4], owned[5] };
    int list_walk_need_reverse_0 = 1;
    ElmcValue *list_walk_map_head_0 = elmc_list_nil();
    if (owned[6] && owned[6]->tag == ELMC_TAG_INT_LIST) {
      Rc = elmc_lazy_map(&list_walk_map_head_0, owned[6], elmc_fn_Main_buildLayout_closure_0, list_walk_map_caps_0, 2);
      CHECK_RC(Rc);
      list_walk_need_reverse_0 = 0;
    } else if (owned[6] && owned[6]->tag == ELMC_TAG_LAZY_MAP) {
      int list_walk_llen_0 = elmc_lazy_map_length(owned[6]);
      for (int list_walk_ii_0 = 0;
      Rc == RC_SUCCESS && list_walk_ii_0 < list_walk_llen_0;
      list_walk_ii_0++) {
        ElmcValue *list_walk_nth_0 = NULL;
        Rc = elmc_lazy_map_nth(&list_walk_nth_0, owned[6], list_walk_ii_0);
        CHECK_RC(Rc);
        ElmcValue *list_walk_map_item_0 = NULL;
        ElmcValue *loop_args[1] = { list_walk_nth_0 };
        Rc = elmc_fn_Main_buildLayout_closure_0(&list_walk_map_item_0, loop_args, 1, list_walk_map_caps_0, 2);
        CHECK_RC(Rc);
        {
          ElmcValue *__acc_next__ = NULL;
          Rc = elmc_list_cons(&__acc_next__, list_walk_map_item_0, list_walk_map_head_0);
          CHECK_RC(Rc);
          elmc_release(list_walk_map_item_0);
          list_walk_map_item_0 = NULL;
          elmc_release(list_walk_map_head_0);
          list_walk_map_head_0 = __acc_next__;
        }
        elmc_release(list_walk_nth_0);
        list_walk_nth_0 = NULL;
      }
    } else {
      ElmcValue *list_walk_src_0 = NULL;
      Rc = elmc_list_materialize_cons(&list_walk_src_0, owned[6]);
      CHECK_RC(Rc);
      ElmcValue *list_walk_map_cursor_0 = list_walk_src_0;
      while (list_walk_map_cursor_0 && list_walk_map_cursor_0->tag == ELMC_TAG_LIST && list_walk_map_cursor_0->payload != NULL) {
        ElmcCons *list_walk_map_node_0 = (ElmcCons *)list_walk_map_cursor_0->payload;
        ElmcValue *list_walk_map_item_0 = NULL;
        ElmcValue *loop_args[1] = { list_walk_map_node_0->head };
        Rc = elmc_fn_Main_buildLayout_closure_0(&list_walk_map_item_0, loop_args, 1, list_walk_map_caps_0, 2);
        CHECK_RC(Rc);
        {
          ElmcValue *__acc_next__ = NULL;
          Rc = elmc_list_cons(&__acc_next__, list_walk_map_item_0, list_walk_map_head_0);
          CHECK_RC(Rc);
          elmc_release(list_walk_map_item_0);
          list_walk_map_item_0 = NULL;
          elmc_release(list_walk_map_head_0);
          list_walk_map_head_0 = __acc_next__;
        }
        list_walk_map_cursor_0 = list_walk_map_node_0->tail;
      }
      elmc_release(list_walk_src_0);
    }
    if (list_walk_need_reverse_0) {
      ElmcValue *__rev_prev__ = elmc_list_nil();
      ElmcValue *__rev_cur__ = list_walk_map_head_0;
      while (__rev_cur__ && __rev_cur__->tag == ELMC_TAG_LIST && __rev_cur__->payload != NULL) {
        ElmcCons *__rev_node__ = (ElmcCons *)__rev_cur__->payload;
        ElmcValue *__rev_next__ = __rev_node__->tail;
        __rev_node__->tail = __rev_prev__;
        __rev_prev__ = __rev_cur__;
        __rev_cur__ = __rev_next__;
      }
      list_walk_map_head_0 = __rev_prev__;
    }
    owned[13] = list_walk_map_head_0;
    owned[7] = owned[0];
    owned[0] = NULL;
    ElmcValue *plan_ephemeral_box_22146 = NULL;
    Rc = elmc_new_int(&plan_ephemeral_box_22146, plan_native_int_23);
    CHECK_RC(Rc);
    owned[10] = plan_ephemeral_box_22146;
    owned[9] = elmc_retain(owned[7]);
    Rc = elmc_fn_Main_minuteTickIndexes(&owned[11]);
    CHECK_RC(Rc);
    ElmcValue *list_walk_map_caps_1[2] = { owned[9], owned[10] };
    int list_walk_need_reverse_1 = 1;
    ElmcValue *list_walk_map_head_1 = elmc_list_nil();
    if (owned[11] && owned[11]->tag == ELMC_TAG_INT_LIST) {
      Rc = elmc_lazy_map(&list_walk_map_head_1, owned[11], elmc_fn_Main_buildLayout_closure_1, list_walk_map_caps_1, 2);
      CHECK_RC(Rc);
      list_walk_need_reverse_1 = 0;
    } else if (owned[11] && owned[11]->tag == ELMC_TAG_LAZY_MAP) {
      int list_walk_llen_1 = elmc_lazy_map_length(owned[11]);
      for (int list_walk_ii_1 = 0;
      Rc == RC_SUCCESS && list_walk_ii_1 < list_walk_llen_1;
      list_walk_ii_1++) {
        ElmcValue *list_walk_nth_1 = NULL;
        Rc = elmc_lazy_map_nth(&list_walk_nth_1, owned[11], list_walk_ii_1);
        CHECK_RC(Rc);
        ElmcValue *list_walk_map_item_1 = NULL;
        ElmcValue *loop_args[1] = { list_walk_nth_1 };
        Rc = elmc_fn_Main_buildLayout_closure_1(&list_walk_map_item_1, loop_args, 1, list_walk_map_caps_1, 2);
        CHECK_RC(Rc);
        {
          ElmcValue *__acc_next__ = NULL;
          Rc = elmc_list_cons(&__acc_next__, list_walk_map_item_1, list_walk_map_head_1);
          CHECK_RC(Rc);
          elmc_release(list_walk_map_item_1);
          list_walk_map_item_1 = NULL;
          elmc_release(list_walk_map_head_1);
          list_walk_map_head_1 = __acc_next__;
        }
        elmc_release(list_walk_nth_1);
        list_walk_nth_1 = NULL;
      }
    } else {
      ElmcValue *list_walk_src_1 = NULL;
      Rc = elmc_list_materialize_cons(&list_walk_src_1, owned[11]);
      CHECK_RC(Rc);
      ElmcValue *list_walk_map_cursor_1 = list_walk_src_1;
      while (list_walk_map_cursor_1 && list_walk_map_cursor_1->tag == ELMC_TAG_LIST && list_walk_map_cursor_1->payload != NULL) {
        ElmcCons *list_walk_map_node_1 = (ElmcCons *)list_walk_map_cursor_1->payload;
        ElmcValue *list_walk_map_item_1 = NULL;
        ElmcValue *loop_args[1] = { list_walk_map_node_1->head };
        Rc = elmc_fn_Main_buildLayout_closure_1(&list_walk_map_item_1, loop_args, 1, list_walk_map_caps_1, 2);
        CHECK_RC(Rc);
        {
          ElmcValue *__acc_next__ = NULL;
          Rc = elmc_list_cons(&__acc_next__, list_walk_map_item_1, list_walk_map_head_1);
          CHECK_RC(Rc);
          elmc_release(list_walk_map_item_1);
          list_walk_map_item_1 = NULL;
          elmc_release(list_walk_map_head_1);
          list_walk_map_head_1 = __acc_next__;
        }
        list_walk_map_cursor_1 = list_walk_map_node_1->tail;
      }
      elmc_release(list_walk_src_1);
    }
    if (list_walk_need_reverse_1) {
      ElmcValue *__rev_prev__ = elmc_list_nil();
      ElmcValue *__rev_cur__ = list_walk_map_head_1;
      while (__rev_cur__ && __rev_cur__->tag == ELMC_TAG_LIST && __rev_cur__->payload != NULL) {
        ElmcCons *__rev_node__ = (ElmcCons *)__rev_cur__->payload;
        ElmcValue *__rev_next__ = __rev_node__->tail;
        __rev_node__->tail = __rev_prev__;
        __rev_prev__ = __rev_cur__;
        __rev_cur__ = __rev_next__;
      }
      list_walk_map_head_1 = __rev_prev__;
    }
    owned[14] = list_walk_map_head_1;
    const elmc_int_t plan_native_int_68 = 22;
    const elmc_int_t plan_native_int_69 = 16;
    elmc_int_t rec_values_69_13[4] = { elmc_int_idiv(screenW, 2) + elmc_int_idiv((plan_native_int_23 * 42), 100) - elmc_int_idiv(22, 2), elmc_int_idiv(screenH, 2) - elmc_int_idiv(16, 2), plan_native_int_68, plan_native_int_69 };
    Rc = elmc_record_new_values_ints(&owned[15], 4, rec_values_69_13);
    CHECK_RC(Rc);
    ElmcValue *plan_ephemeral_box_22210 = NULL;
    Rc = elmc_new_int(&plan_ephemeral_box_22210, plan_native_int_23);
    CHECK_RC(Rc);
    ElmcValue *plan_ephemeral_box_22274 = NULL;
    Rc = elmc_new_int(&plan_ephemeral_box_22274, plan_native_int_23 - 3);
    CHECK_RC(Rc);
    ElmcValue *plan_ephemeral_box_22338 = NULL;
    Rc = elmc_new_int(&plan_ephemeral_box_22338, ((16 >= plan_native_int_23 - 18) ? 16 : plan_native_int_23 - 18));
    CHECK_RC(Rc);
    ElmcValue *rec_values_78_14[7] = { owned[12], plan_ephemeral_box_22210, plan_ephemeral_box_22274, plan_ephemeral_box_22338, owned[13], owned[14], owned[15] };
    Rc = elmc_record_new_values_take(out, 7, rec_values_78_14);
    CHECK_RC(Rc);
    owned[12] = NULL;
    owned[13] = NULL;
    owned[14] = NULL;
    owned[15] = NULL;
    owned[12] = NULL;
    owned[13] = NULL;
    owned[14] = NULL;
    owned[15] = NULL;
  CATCH_END
  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}

static RC elmc_fn_Main_buildHands(ElmcValue **out, ElmcValue *layout, ElmcValue *now) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  const elmc_int_t direct_hoisted_rec_1 = ELMC_RECORD_GET_INDEX_INT(layout, ELMC_FIELD_MAIN_LAYOUT_RADIUS);
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[8] = {0};
  CATCH_BEGIN
    /* plan block 0 */
    const elmc_int_t plan_native_int_4 = ELMC_RECORD_GET_INDEX_INT(now, ELMC_FIELD_PEBBLE_TIME_CURRENTDATETIME_HOUR);
    const elmc_int_t plan_native_int_8 = ELMC_RECORD_GET_INDEX_INT(now, ELMC_FIELD_PEBBLE_TIME_CURRENTDATETIME_MINUTE);
    const elmc_int_t plan_native_int_12 = elmc_int_mod_by(60, (elmc_int_mod_by(12, plan_native_int_4)) * 5 + elmc_int_idiv(plan_native_int_8, 12));
    const elmc_int_t plan_native_int_14 = ELMC_RECORD_GET_INDEX_INT(now, ELMC_FIELD_PEBBLE_TIME_CURRENTDATETIME_MINUTE);
    const elmc_int_t plan_native_int_15 = elmc_int_mod_by(60, plan_native_int_14);
    const elmc_int_t plan_native_int_17 = ELMC_RECORD_GET_INDEX_INT(now, ELMC_FIELD_PEBBLE_TIME_CURRENTDATETIME_SECOND);
    const elmc_int_t plan_native_int_19 = direct_hoisted_rec_1;
    const elmc_int_t plan_native_int_23 = elmc_int_idiv((plan_native_int_19 * 54), 100);
    const elmc_int_t plan_native_int_24 = direct_hoisted_rec_1;
    const elmc_int_t plan_native_int_28 = elmc_int_idiv((plan_native_int_24 * 78), 100);
    const elmc_int_t plan_native_int_29 = direct_hoisted_rec_1;
    const elmc_int_t plan_native_int_33 = elmc_int_idiv((plan_native_int_29 * 84), 100);
    const elmc_int_t plan_native_int_34 = direct_hoisted_rec_1;
    const elmc_int_t plan_native_int_38 = elmc_int_idiv((plan_native_int_34 * 18), 100);
    owned[0] = elmc_record_get_index(layout, ELMC_FIELD_MAIN_LAYOUT_CENTER);
    Rc = elmc_fn_Main_handPoint(&owned[4], owned[0], plan_native_int_23, plan_native_int_12);
    CHECK_RC(Rc);
    if (owned[4] == owned[0]) {
      owned[0] = NULL;
    }
    owned[1] = elmc_record_get_index(layout, ELMC_FIELD_MAIN_LAYOUT_CENTER);
    Rc = elmc_fn_Main_handPoint(&owned[5], owned[1], plan_native_int_28, plan_native_int_15);
    CHECK_RC(Rc);
    if (owned[5] == owned[1]) {
      owned[1] = NULL;
    }
    owned[2] = elmc_record_get_index(layout, ELMC_FIELD_MAIN_LAYOUT_CENTER);
    Rc = elmc_fn_Main_handPoint(&owned[6], owned[2], plan_native_int_33, elmc_int_mod_by(60, plan_native_int_17));
    CHECK_RC(Rc);
    if (owned[6] == owned[2]) {
      owned[2] = NULL;
    }
    owned[3] = elmc_record_get_index(layout, ELMC_FIELD_MAIN_LAYOUT_CENTER);
    const elmc_int_t plan_native_int_49 = elmc_int_mod_by(60, plan_native_int_17) + 30;
    Rc = elmc_fn_Main_handPoint(&owned[7], owned[3], plan_native_int_38, plan_native_int_49);
    CHECK_RC(Rc);
    if (owned[7] == owned[3]) {
      owned[3] = NULL;
    }
    ElmcValue *rec_values_56_15[4] = { owned[4], owned[5], owned[6], owned[7] };
    Rc = elmc_record_new_values_take(out, 4, rec_values_56_15);
    CHECK_RC(Rc);
    owned[4] = NULL;
    owned[5] = NULL;
    owned[6] = NULL;
    owned[7] = NULL;
    owned[4] = NULL;
    owned[5] = NULL;
    owned[6] = NULL;
    owned[7] = NULL;
  CATCH_END
  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}

static RC elmc_fn_Main_hourTickIndexes(ElmcValue **out) {
  /* Ownership policy: borrow_arg, retain_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  CATCH_BEGIN
    /* plan block 0 */
    static const elmc_int_t plan_list_int_values_22402[12] = { 0, 5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55 };
    Rc = elmc_list_from_int_array(out, plan_list_int_values_22402, 12);
    CHECK_RC(Rc);
  CATCH_END
  return Rc;
}

static RC elmc_fn_Main_minuteTickIndexes(ElmcValue **out) {
  /* Ownership policy: borrow_arg, retain_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[2] = {0};
  CATCH_BEGIN
    /* plan block 0 */
    Rc = elmc_list_range(&owned[1], 0, 59);
    CHECK_RC(Rc);
    int list_walk_need_reverse_0 = 1;
    ElmcValue *list_walk_map_head_0 = elmc_list_nil();
    if (owned[1] && owned[1]->tag == ELMC_TAG_INT_LIST) {
      ElmcIntListPayload *direct_ilp_0 = (ElmcIntListPayload *)owned[1]->payload;
      int direct_ilen_0 = direct_ilp_0 ? direct_ilp_0->length : 0;
      elmc_int_t *list_walk_kept_0 = NULL;
      int list_walk_kept_n_0 = 0;
      if (direct_ilen_0 > 0) {
        list_walk_kept_0 = (elmc_int_t *)elmc_malloc((size_t)direct_ilen_0 * sizeof(elmc_int_t), "list_walk_filter");
        if (!list_walk_kept_0) {
          Rc = RC_ERR_OUT_OF_MEMORY;
          CHECK_RC(Rc);
        }
      }
      for (int direct_ii_0 = 0;
      Rc == RC_SUCCESS && direct_ii_0 < direct_ilen_0;
      direct_ii_0++) {
        if (!((elmc_int_mod_by(5, direct_ilp_0->values[direct_ii_0]) == 0))) {
          list_walk_kept_0[list_walk_kept_n_0++] = direct_ilp_0->values[direct_ii_0];
        }
      }
      if (Rc == RC_SUCCESS) {
        Rc = elmc_list_from_int_array(&list_walk_map_head_0, list_walk_kept_0, list_walk_kept_n_0);
      }
      if (list_walk_kept_0) elmc_free(list_walk_kept_0);
      CHECK_RC(Rc);
      list_walk_need_reverse_0 = 0;
    } else if (owned[1] && owned[1]->tag == ELMC_TAG_LAZY_MAP) {
      int list_walk_llen_0 = elmc_lazy_map_length(owned[1]);
      for (int list_walk_ii_0 = 0;
      Rc == RC_SUCCESS && list_walk_ii_0 < list_walk_llen_0;
      list_walk_ii_0++) {
        ElmcValue *list_walk_nth_0 = NULL;
        Rc = elmc_lazy_map_nth(&list_walk_nth_0, owned[1], list_walk_ii_0);
        CHECK_RC(Rc);
        ElmcValue *list_walk_map_item_0 = NULL;
        ElmcValue *loop_args[1] = { list_walk_nth_0 };
        Rc = elmc_fn_Main_minuteTickIndexes_closure_0(&list_walk_map_item_0, loop_args, 1, NULL, 0);
        CHECK_RC(Rc);
        if (elmc_as_int(list_walk_map_item_0) != 0) {
          {
            ElmcValue *__acc_next__ = NULL;
            Rc = elmc_list_cons(&__acc_next__, list_walk_nth_0, list_walk_map_head_0);
            CHECK_RC(Rc);
            elmc_release(list_walk_map_head_0);
            list_walk_map_head_0 = __acc_next__;
          }
        }
        elmc_release(list_walk_map_item_0);
        list_walk_map_item_0 = NULL;
        elmc_release(list_walk_nth_0);
        list_walk_nth_0 = NULL;
      }
    } else {
      ElmcValue *list_walk_src_0 = NULL;
      Rc = elmc_list_materialize_cons(&list_walk_src_0, owned[1]);
      CHECK_RC(Rc);
      ElmcValue *list_walk_map_cursor_0 = list_walk_src_0;
      while (list_walk_map_cursor_0 && list_walk_map_cursor_0->tag == ELMC_TAG_LIST && list_walk_map_cursor_0->payload != NULL) {
        ElmcCons *list_walk_map_node_0 = (ElmcCons *)list_walk_map_cursor_0->payload;
        ElmcValue *list_walk_map_item_0 = NULL;
        ElmcValue *loop_args[1] = { list_walk_map_node_0->head };
        Rc = elmc_fn_Main_minuteTickIndexes_closure_0(&list_walk_map_item_0, loop_args, 1, NULL, 0);
        CHECK_RC(Rc);
        if (elmc_as_int(list_walk_map_item_0) != 0) {
          {
            ElmcValue *__acc_next__ = NULL;
            Rc = elmc_list_cons(&__acc_next__, list_walk_map_node_0->head, list_walk_map_head_0);
            CHECK_RC(Rc);
            elmc_release(list_walk_map_head_0);
            list_walk_map_head_0 = __acc_next__;
          }
        }
        elmc_release(list_walk_map_item_0);
        list_walk_map_item_0 = NULL;
        list_walk_map_cursor_0 = list_walk_map_node_0->tail;
      }
      elmc_release(list_walk_src_0);
    }
    if (list_walk_need_reverse_0) {
      ElmcValue *__rev_prev__ = elmc_list_nil();
      ElmcValue *__rev_cur__ = list_walk_map_head_0;
      while (__rev_cur__ && __rev_cur__->tag == ELMC_TAG_LIST && __rev_cur__->payload != NULL) {
        ElmcCons *__rev_node__ = (ElmcCons *)__rev_cur__->payload;
        ElmcValue *__rev_next__ = __rev_node__->tail;
        __rev_node__->tail = __rev_prev__;
        __rev_prev__ = __rev_cur__;
        __rev_cur__ = __rev_next__;
      }
      list_walk_map_head_0 = __rev_prev__;
    }
    *out = list_walk_map_head_0;
  CATCH_END
  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}

static RC elmc_fn_Main_hourTick(ElmcValue **out, ElmcValue *center, elmc_int_t radius, elmc_int_t index) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[2] = {0};
  CATCH_BEGIN
    elmc_int_t plan_native_int_3 __attribute__((unused)) = 0;
    elmc_int_t plan_native_int_9 __attribute__((unused)) = 0;
    bool plan_native_bool_4 = false;
    bool plan_native_bool_11 = false;
    /* plan block 0 */
    plan_native_int_3 = radius - 5;
    plan_native_bool_4 = elmc_fn_Main_isCardinal(index);
    plan_native_int_9 = (plan_native_bool_4) ? radius - 16 : radius - 11;
    plan_native_bool_11 = elmc_fn_Main_isCardinal(index);
    const elmc_int_t plan_native_int_14 = (plan_native_bool_11) ? 3 : 2;
    Rc = elmc_fn_Main_handPoint(&owned[0], center, plan_native_int_9, index);
    CHECK_RC(Rc);
    Rc = elmc_fn_Main_handPoint(&owned[1], center, plan_native_int_3, index);
    CHECK_RC(Rc);
    ElmcValue *plan_ephemeral_box_22466 = NULL;
    Rc = elmc_new_int(&plan_ephemeral_box_22466, plan_native_int_14);
    CHECK_RC(Rc);
    ElmcValue *rec_values_25_16[3] = { owned[0], owned[1], plan_ephemeral_box_22466 };
    Rc = elmc_record_new_values_take(out, 3, rec_values_25_16);
    CHECK_RC(Rc);
    owned[0] = NULL;
    owned[1] = NULL;
    owned[0] = NULL;
    owned[1] = NULL;
  CATCH_END
  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}

static RC elmc_fn_Main_minuteTick(ElmcValue **out, ElmcValue *center, elmc_int_t radius, elmc_int_t index) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  CATCH_BEGIN
    /* plan block 0 */
    const elmc_int_t plan_native_int_3 = radius - 7;
    Rc = elmc_fn_Main_handPoint(out, center, plan_native_int_3, index);
    CHECK_RC(Rc);
  CATCH_END
  return Rc;
}

static bool elmc_fn_Main_isCardinal(elmc_int_t index) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  bool plan_native_bool_2 = false;
  bool plan_native_bool_6 = false;
  bool plan_native_bool_10 = false;
  bool plan_native_bool_15 = false;
  bool plan_native_bool_16 = false;
  /* plan block 0 */
  plan_native_bool_2 = (index == 0);
  if (plan_native_bool_2) goto elmc_plan_block_3;
  plan_native_bool_6 = (index == 15);
  if (plan_native_bool_6) goto elmc_plan_block_7;
  plan_native_bool_10 = (index == 30);
  plan_native_bool_15 = (plan_native_bool_10) ? true : (index == 45);
  elmc_plan_block_7:
  plan_native_bool_16 = (plan_native_bool_6) ? true : plan_native_bool_15;
  elmc_plan_block_3:
  const bool plan_native_bool_17 = (plan_native_bool_2) ? true : plan_native_bool_16;
  return plan_native_bool_17;
}

static RC elmc_fn_Main_handPoint(ElmcValue **out, ElmcValue *center, elmc_int_t length, elmc_int_t index) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[1] = {0};
  CATCH_BEGIN
    /* plan block 0 */
    elmc_int_t plan_native_pair_3_0 = 0;
    elmc_int_t plan_native_pair_3_1 = 0;
    Rc = elmc_fn_Main_unit60(&plan_native_pair_3_0, &plan_native_pair_3_1, index);
    CHECK_RC(Rc);
    const elmc_int_t plan_native_int_6 = ELMC_RECORD_GET_INDEX_INT(center, ELMC_FIELD_MAIN_POINT_X);
    const elmc_int_t plan_native_int_7 = plan_native_pair_3_0 * length;
    const elmc_int_t plan_native_int_12 = ELMC_RECORD_GET_INDEX_INT(center, ELMC_FIELD_MAIN_POINT_Y);
    const elmc_int_t plan_native_int_13 = plan_native_pair_3_1 * length;
    elmc_int_t rec_values_20_17[2] = { plan_native_int_6 + elmc_int_idiv(plan_native_int_7, 1000), plan_native_int_12 + elmc_int_idiv(plan_native_int_13, 1000) };
    Rc = elmc_record_new_values_ints(out, 2, rec_values_20_17);
    CHECK_RC(Rc);
  CATCH_END
  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}

static __attribute__((noinline, noclone)) RC elmc_fn_Main_unit60(elmc_int_t *out0, elmc_int_t *out1, elmc_int_t index) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  CATCH_BEGIN
    static const elmc_int_t elmc_dense_lut_Main_unit60[60][2] = { {0, -1000}, {105, -995}, {208, -978}, {309, -951}, {407, -914}, {500, -866}, {588, -809}, {669, -743}, {743, -669}, {809, -588}, {866, -500}, {914, -407}, {951, -309}, {978, -208}, {995, -105}, {1000, 0}, {995, 105}, {978, 208}, {951, 309}, {914, 407}, {866, 500}, {809, 588}, {743, 669}, {669, 743}, {588, 809}, {500, 866}, {407, 914}, {309, 951}, {208, 978}, {105, 995}, {0, 1000}, {-105, 995}, {-208, 978}, {-309, 951}, {-407, 914}, {-500, 866}, {-588, 809}, {-669, 743}, {-743, 669}, {-809, 588}, {-866, 500}, {-914, 407}, {-951, 309}, {-978, 208}, {-995, 105}, {-1000, 0}, {-995, -105}, {-978, -208}, {-951, -309}, {-914, -407}, {-866, -500}, {-809, -588}, {-743, -669}, {-669, -743}, {-588, -809}, {-500, -866}, {-407, -914}, {-309, -951}, {-208, -978}, {-105, -995} };
    elmc_int_t __dense_i = elmc_int_mod_by(60, index);
    *out0 = elmc_dense_lut_Main_unit60[__dense_i][0];
    *out1 = elmc_dense_lut_Main_unit60[__dense_i][1];
  CATCH_END
  return Rc;
}

static RC elmc_fn_Main_main(ElmcValue **out) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  CATCH_BEGIN
    /* plan block 0 */
    Rc = elmc_new_int(out, 0);
    CHECK_RC(Rc);
  CATCH_END
  return Rc;
}

static RC elmc_fn_Pebble_Ui_Resources_fontInfo(ElmcValue **out, ElmcValue *font) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  CATCH_BEGIN
    static const elmc_int_t elmc_dense_rec_Pebble_Ui_Resources_fontInfo_f0[4] = { 1, 2, 3, 4 };
    static ElmcValue elmc_dense_rec_Pebble_Ui_Resources_fontInfo_f1[4] = {
      { ELMC_RC_IMMORTAL, ELMC_TAG_STRING, (void *)"DefaultFont", 11 },
      { ELMC_RC_IMMORTAL, ELMC_TAG_STRING, (void *)"Quote24", 7 },
      { ELMC_RC_IMMORTAL, ELMC_TAG_STRING, (void *)"Quote28", 7 },
      { ELMC_RC_IMMORTAL, ELMC_TAG_STRING, (void *)"Quote42", 7 }
    };
    static const elmc_int_t elmc_dense_rec_Pebble_Ui_Resources_fontInfo_f2[4] = { 14, 24, 28, 42 };
    elmc_int_t __dense_i = elmc_union_tag_as_int(font);
    elmc_int_t __dense_j = __dense_i - 1;
    if ((uint32_t)__dense_i < 1u || (uint32_t)__dense_i > 4u) {
      __dense_j = 3;
    }
    ElmcValue *__dense_fields[3] = {0};
    Rc = elmc_new_int(&__dense_fields[0], elmc_dense_rec_Pebble_Ui_Resources_fontInfo_f0[__dense_j]);
    CHECK_RC(Rc);
    __dense_fields[1] = elmc_retain(&elmc_dense_rec_Pebble_Ui_Resources_fontInfo_f1[__dense_j]);
    Rc = elmc_new_int(&__dense_fields[2], elmc_dense_rec_Pebble_Ui_Resources_fontInfo_f2[__dense_j]);
    CHECK_RC(Rc);
    Rc = elmc_record_new_values_take(out, 3, __dense_fields);
    CHECK_RC(Rc);
  CATCH_END
  return Rc;
}

static __attribute__((noinline, noclone)) RC elmc_fn_Pebble_WatchInfo_caseColor(ElmcValue **out, ElmcValue *color) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  CATCH_BEGIN
    static const elmc_int_t elmc_dense_lut_Pebble_WatchInfo_caseColor[42] = { ELMC_COLOR_BLACK, ELMC_COLOR_BLACK, ELMC_COLOR_WHITE, ELMC_COLOR_RED, ELMC_COLOR_ORANGE, ELMC_COLOR_LIGHT_GRAY, ELMC_COLOR_LIGHT_GRAY, ELMC_COLOR_BLACK, ELMC_COLOR_BLUE, ELMC_COLOR_GREEN, ELMC_COLOR_BRILLIANT_ROSE, ELMC_COLOR_WHITE, ELMC_COLOR_BLACK, ELMC_COLOR_RED, ELMC_COLOR_LIGHT_GRAY, ELMC_COLOR_BLACK, ELMC_COLOR_BRASS, ELMC_COLOR_LIGHT_GRAY, ELMC_COLOR_BLACK, ELMC_COLOR_LIGHT_GRAY, ELMC_COLOR_BLACK, ELMC_COLOR_RAJAH, ELMC_COLOR_BLACK, ELMC_COLOR_SPRING_BUD, ELMC_COLOR_SUNSET_ORANGE, ELMC_COLOR_WHITE, ELMC_COLOR_TIFFANY_BLUE, ELMC_COLOR_BLACK, ELMC_COLOR_WHITE, ELMC_COLOR_BLACK, ELMC_COLOR_LIGHT_GRAY, ELMC_COLOR_BRASS, ELMC_COLOR_BLACK, ELMC_COLOR_WHITE, ELMC_COLOR_BLACK, ELMC_COLOR_DARK_CANDY_APPLE_RED, ELMC_COLOR_CADET_BLUE, ELMC_COLOR_LIGHT_GRAY, ELMC_COLOR_BLACK, ELMC_COLOR_LIGHT_GRAY, ELMC_COLOR_BRASS, ELMC_COLOR_LIGHT_GRAY };
    elmc_int_t __dense_i = elmc_union_tag_as_int(color);
    if ((uint32_t)__dense_i < 1u || (uint32_t)__dense_i > 42u) {
      Rc = elmc_new_int(out, ELMC_COLOR_BLACK);
      CHECK_RC(Rc);
    } else {
      Rc = elmc_new_int(out, elmc_dense_lut_Pebble_WatchInfo_caseColor[__dense_i - 1]);
      CHECK_RC(Rc);
    }
  CATCH_END
  return Rc;
}

static RC elmc_fn_Main_view_commands_append(ElmcValue ** const args, const int argc, ElmcSceneWriter * const writer);
static RC elmc_fn_Main_watchOps_commands_append(ElmcValue ** const args, const int argc, ElmcSceneWriter * const writer);
static RC elmc_fn_Main_quoteOps_commands_append(ElmcValue ** const args, const int argc, ElmcSceneWriter * const writer);
static RC elmc_fn_Main_quoteLineOp_commands_append(ElmcValue ** const args, const int argc, ElmcSceneWriter * const writer);
static RC elmc_fn_Main_hourTickOp_commands_append(ElmcValue ** const args, const int argc, ElmcSceneWriter * const writer);
static RC elmc_fn_Main_hourTickOp_commands_append_native(const elmc_int_t ink, ElmcValue * const tick, ElmcSceneWriter * const writer);
static RC elmc_fn_Main_minuteTickOp_commands_append(ElmcValue ** const args, const int argc, ElmcSceneWriter * const writer);
static RC elmc_fn_Main_minuteTickOp_commands_append_native(const elmc_int_t ink, ElmcValue * const point, ElmcSceneWriter * const writer);
static RC elmc_fn_Main_strokeLine_commands_append(ElmcValue ** const args, const int argc, ElmcSceneWriter * const writer);
static RC elmc_fn_Main_strokeLine_commands_append_native(ElmcValue * const from, ElmcValue * const to, const elmc_int_t width, const elmc_int_t color, ElmcSceneWriter * const writer);

static RC elmc_fn_Main_view_commands_append(ElmcValue ** const args, const int argc, ElmcSceneWriter * const writer) {
  ElmcValue *model = (argc > 0) ? args[0] : NULL;

  if (!writer)
    return RC_ERR_INVALID_ARG;
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[1] = {0};

#if defined(PBL_PLATFORM_APLITE)
  static ElmcPebbleDrawCmd scene_cmd;
#else
  ElmcPebbleDrawCmd scene_cmd;
#endif

  CATCH_BEGIN

    owned[0] = elmc_record_get_index(model, ELMC_FIELD_MAIN_MODEL_PHASE);

    if (elmc_union_tag_matches(owned[0], ELMC_UNION_SHOWWATCH)) {

      ElmcValue *direct_call_args_2[1] = { model };
      Rc = elmc_fn_Main_watchOps_commands_append(direct_call_args_2, 1, writer);
      CHECK_RC(Rc);

    }
    else if (elmc_union_tag_matches(owned[0], ELMC_UNION_SHOWQUOTE)) {

      ElmcValue *direct_call_args_3[1] = { model };
      Rc = elmc_fn_Main_quoteOps_commands_append(direct_call_args_3, 1, writer);
      CHECK_RC(Rc);

    }

  CATCH_END
  elmc_release_array_lifo(owned, DIM(owned));

  return Rc;

}

RC elmc_fn_Main_view_scene_append(ElmcValue ** const args, const int argc, ElmcSceneWriter * const writer) {
  return elmc_fn_Main_view_commands_append(args, argc, writer);
}

static RC elmc_fn_Main_watchOps_commands_append(ElmcValue ** const args, const int argc, ElmcSceneWriter * const writer) {
  ElmcValue *model = (argc > 0) ? args[0] : NULL;

  if (!writer)
    return RC_ERR_INVALID_ARG;
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[20] = {0};

#if defined(PBL_PLATFORM_APLITE)
  static ElmcPebbleDrawCmd scene_cmd;
#else
  ElmcPebbleDrawCmd scene_cmd;
#endif

  CATCH_BEGIN

    Rc = elmc_fn_Main_resolveThemeColor(&owned[0], ELMC_RECORD_GET_INDEX(model, ELMC_FIELD_MAIN_MODEL_WATCHBACKGROUND), ELMC_RECORD_GET_INDEX(model, ELMC_FIELD_MAIN_MODEL_CASECOLOR));
    CHECK_RC(Rc);

    Rc = elmc_fn_Main_resolveThemeColor(&owned[1], ELMC_RECORD_GET_INDEX(model, ELMC_FIELD_MAIN_MODEL_WATCHFOREGROUND), ELMC_RECORD_GET_INDEX(model, ELMC_FIELD_MAIN_MODEL_CASECOLOR));
    CHECK_RC(Rc);

    owned[2] = elmc_record_get_index(model, ELMC_FIELD_MAIN_MODEL_LAYOUT);

    elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_CLEAR);
    scene_cmd.p0 = ELMC_RECORD_GET_INDEX_INT(model, ELMC_FIELD_MAIN_MODEL_CASECOLOR);
    Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
    CHECK_RC(Rc);

    elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_FILL_CIRCLE);
    scene_cmd.p0 = ELMC_RECORD_GET_INDEX_INT(ELMC_RECORD_GET_INDEX(owned[2], ELMC_FIELD_MAIN_LAYOUT_CENTER), ELMC_FIELD_MAIN_POINT_X);
    scene_cmd.p1 = ELMC_RECORD_GET_INDEX_INT(ELMC_RECORD_GET_INDEX(owned[2], ELMC_FIELD_MAIN_LAYOUT_CENTER), ELMC_FIELD_MAIN_POINT_Y);
    scene_cmd.p2 = ELMC_RECORD_GET_INDEX_INT(owned[2], ELMC_FIELD_MAIN_LAYOUT_RADIUS);
    scene_cmd.p3 = (owned[0] ? elmc_as_int(owned[0]) : 0);
    Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
    CHECK_RC(Rc);

    elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_CIRCLE);
    scene_cmd.p0 = ELMC_RECORD_GET_INDEX_INT(ELMC_RECORD_GET_INDEX(owned[2], ELMC_FIELD_MAIN_LAYOUT_CENTER), ELMC_FIELD_MAIN_POINT_X);
    scene_cmd.p1 = ELMC_RECORD_GET_INDEX_INT(ELMC_RECORD_GET_INDEX(owned[2], ELMC_FIELD_MAIN_LAYOUT_CENTER), ELMC_FIELD_MAIN_POINT_Y);
    scene_cmd.p2 = ELMC_RECORD_GET_INDEX_INT(owned[2], ELMC_FIELD_MAIN_LAYOUT_RADIUS);
    scene_cmd.p3 = (owned[1] ? elmc_as_int(owned[1]) : 0);
    Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
    CHECK_RC(Rc);

    elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_CIRCLE);
    scene_cmd.p0 = ELMC_RECORD_GET_INDEX_INT(ELMC_RECORD_GET_INDEX(owned[2], ELMC_FIELD_MAIN_LAYOUT_CENTER), ELMC_FIELD_MAIN_POINT_X);
    scene_cmd.p1 = ELMC_RECORD_GET_INDEX_INT(ELMC_RECORD_GET_INDEX(owned[2], ELMC_FIELD_MAIN_LAYOUT_CENTER), ELMC_FIELD_MAIN_POINT_Y);
    scene_cmd.p2 = ELMC_RECORD_GET_INDEX_INT(owned[2], ELMC_FIELD_MAIN_LAYOUT_BEZELINNER);
    scene_cmd.p3 = (owned[1] ? elmc_as_int(owned[1]) : 0);
    Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
    CHECK_RC(Rc);

    elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_CIRCLE);
    scene_cmd.p0 = ELMC_RECORD_GET_INDEX_INT(ELMC_RECORD_GET_INDEX(owned[2], ELMC_FIELD_MAIN_LAYOUT_CENTER), ELMC_FIELD_MAIN_POINT_X);
    scene_cmd.p1 = ELMC_RECORD_GET_INDEX_INT(ELMC_RECORD_GET_INDEX(owned[2], ELMC_FIELD_MAIN_LAYOUT_CENTER), ELMC_FIELD_MAIN_POINT_Y);
    scene_cmd.p2 = ELMC_RECORD_GET_INDEX_INT(owned[2], ELMC_FIELD_MAIN_LAYOUT_RAILRADIUS);
    scene_cmd.p3 = (owned[1] ? elmc_as_int(owned[1]) : 0);
    Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
    CHECK_RC(Rc);

    owned[3] = elmc_record_get_index(model, ELMC_FIELD_MAIN_MODEL_LAYOUT);

    owned[4] = elmc_record_get_index(owned[3], ELMC_FIELD_MAIN_LAYOUT_HOURTICKS);

    ElmcValue *direct_prefix_boxed_10_10 = NULL;
    Rc = elmc_new_int(&direct_prefix_boxed_10_10, (owned[1] ? elmc_as_int(owned[1]) : 0));
    CHECK_RC(Rc);;

    if (owned[4] && owned[4]->tag == ELMC_TAG_RECORD_SEQ) {
      int direct_rlen_10 = elmc_record_seq_length(owned[4]);
      for (int direct_ii_10 = 0;
      Rc == RC_SUCCESS && direct_ii_10 < direct_rlen_10; direct_ii_10++) {;
        ElmcValue *direct_item_value_10 = elmc_record_seq_get(owned[4], direct_ii_10);
        ElmcValue *direct_call_args_10[2] = {0};
        direct_call_args_10[0] = direct_prefix_boxed_10_10;
        direct_call_args_10[1] = direct_item_value_10;
        Rc = elmc_fn_Main_hourTickOp_commands_append(direct_call_args_10, 2, writer);
        elmc_release(direct_item_value_10);
        if (Rc != RC_SUCCESS) {

          elmc_release(direct_prefix_boxed_10_10);
        }
        CHECK_RC(Rc);
      }
    } else
    if (owned[4] && owned[4]->tag == ELMC_TAG_LAZY_MAP) {
      int direct_llen_10 = elmc_lazy_map_length(owned[4]);
      for (int direct_ii_10 = 0;
      Rc == RC_SUCCESS && direct_ii_10 < direct_llen_10; direct_ii_10++) {;
        ElmcValue *direct_item_value_10 = NULL;
        Rc = elmc_lazy_map_nth(&direct_item_value_10, owned[4], direct_ii_10);
        CHECK_RC(Rc);
        ElmcValue *direct_call_args_10[2] = {0};
        direct_call_args_10[0] = direct_prefix_boxed_10_10;
        direct_call_args_10[1] = direct_item_value_10;
        Rc = elmc_fn_Main_hourTickOp_commands_append(direct_call_args_10, 2, writer);
        elmc_release(direct_item_value_10);
        if (Rc != RC_SUCCESS) {

          elmc_release(direct_prefix_boxed_10_10);
        }
        CHECK_RC(Rc);
      }
    } else {
      ElmcValue *direct_cursor_10 = owned[4];
      while (Rc == RC_SUCCESS && direct_cursor_10 && direct_cursor_10->tag == ELMC_TAG_LIST && direct_cursor_10->payload != NULL) {
        ElmcCons *direct_node_10 = (ElmcCons *)direct_cursor_10->payload;
        ElmcValue *direct_call_args_10[2] = {0};
        direct_call_args_10[0] = direct_prefix_boxed_10_10;
        direct_call_args_10[1] = direct_node_10->head;
        Rc = elmc_fn_Main_hourTickOp_commands_append(direct_call_args_10, 2, writer);
        if (Rc != RC_SUCCESS) {

          elmc_release(direct_prefix_boxed_10_10);
        }
        CHECK_RC(Rc);
        direct_cursor_10 = direct_node_10->tail;
      }
    }

    elmc_release(direct_prefix_boxed_10_10);

    owned[5] = elmc_record_get_index(model, ELMC_FIELD_MAIN_MODEL_LAYOUT);

    owned[6] = elmc_record_get_index(owned[5], ELMC_FIELD_MAIN_LAYOUT_MINUTETICKS);

    ElmcValue *direct_prefix_boxed_11_11 = NULL;
    Rc = elmc_new_int(&direct_prefix_boxed_11_11, (owned[1] ? elmc_as_int(owned[1]) : 0));
    CHECK_RC(Rc);;

    if (owned[6] && owned[6]->tag == ELMC_TAG_RECORD_SEQ) {
      int direct_rlen_11 = elmc_record_seq_length(owned[6]);
      for (int direct_ii_11 = 0;
      Rc == RC_SUCCESS && direct_ii_11 < direct_rlen_11; direct_ii_11++) {;
        ElmcValue *direct_item_value_11 = elmc_record_seq_get(owned[6], direct_ii_11);
        ElmcValue *direct_call_args_11[2] = {0};
        direct_call_args_11[0] = direct_prefix_boxed_11_11;
        direct_call_args_11[1] = direct_item_value_11;
        Rc = elmc_fn_Main_minuteTickOp_commands_append(direct_call_args_11, 2, writer);
        elmc_release(direct_item_value_11);
        if (Rc != RC_SUCCESS) {

          elmc_release(direct_prefix_boxed_11_11);
        }
        CHECK_RC(Rc);
      }
    } else
    if (owned[6] && owned[6]->tag == ELMC_TAG_LAZY_MAP) {
      int direct_llen_11 = elmc_lazy_map_length(owned[6]);
      for (int direct_ii_11 = 0;
      Rc == RC_SUCCESS && direct_ii_11 < direct_llen_11; direct_ii_11++) {;
        ElmcValue *direct_item_value_11 = NULL;
        Rc = elmc_lazy_map_nth(&direct_item_value_11, owned[6], direct_ii_11);
        CHECK_RC(Rc);
        ElmcValue *direct_call_args_11[2] = {0};
        direct_call_args_11[0] = direct_prefix_boxed_11_11;
        direct_call_args_11[1] = direct_item_value_11;
        Rc = elmc_fn_Main_minuteTickOp_commands_append(direct_call_args_11, 2, writer);
        elmc_release(direct_item_value_11);
        if (Rc != RC_SUCCESS) {

          elmc_release(direct_prefix_boxed_11_11);
        }
        CHECK_RC(Rc);
      }
    } else {
      ElmcValue *direct_cursor_11 = owned[6];
      while (Rc == RC_SUCCESS && direct_cursor_11 && direct_cursor_11->tag == ELMC_TAG_LIST && direct_cursor_11->payload != NULL) {
        ElmcCons *direct_node_11 = (ElmcCons *)direct_cursor_11->payload;
        ElmcValue *direct_call_args_11[2] = {0};
        direct_call_args_11[0] = direct_prefix_boxed_11_11;
        direct_call_args_11[1] = direct_node_11->head;
        Rc = elmc_fn_Main_minuteTickOp_commands_append(direct_call_args_11, 2, writer);
        if (Rc != RC_SUCCESS) {

          elmc_release(direct_prefix_boxed_11_11);
        }
        CHECK_RC(Rc);
        direct_cursor_11 = direct_node_11->tail;
      }
    }

    elmc_release(direct_prefix_boxed_11_11);

    owned[7] = elmc_record_get_index(model, ELMC_FIELD_MAIN_MODEL_LAYOUT);

    owned[8] = elmc_record_get_index(owned[7], ELMC_FIELD_MAIN_LAYOUT_DATEBOX);

    owned[9] = elmc_record_get_index(model, ELMC_FIELD_MAIN_MODEL_DATELABEL);

    ElmcValue *native_string_12_src = owned[9];
    const char *native_string_12 =
    (native_string_12_src && native_string_12_src->tag == ELMC_TAG_STRING && native_string_12_src->payload)
    ? (const char *)native_string_12_src->payload
    : "";

    const elmc_int_t direct_hoisted_int_19 = (ELMC_TEXT_ALIGN_CENTER + (ELMC_TEXT_OVERFLOW_WORD_WRAP * (1 << ELMC_TEXT_OVERFLOW_SHIFT)));
    Rc = elmc_new_string(&owned[11], native_string_12);
    CHECK_RC(Rc);

    Rc = elmc_new_string(&owned[13], "");
    CHECK_RC(Rc);

    const bool native_cmp_15 = elmc_string_equals(owned[11], owned[13]);

    if (!(native_cmp_15)) {

      elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_RECT);
      scene_cmd.p0 = ELMC_RECORD_GET_INDEX_INT(owned[8], ELMC_FIELD_MAIN_RECT_X);
      scene_cmd.p1 = ELMC_RECORD_GET_INDEX_INT(owned[8], ELMC_FIELD_MAIN_RECT_Y);
      scene_cmd.p2 = ELMC_RECORD_GET_INDEX_INT(owned[8], ELMC_FIELD_MAIN_RECT_W);
      scene_cmd.p3 = ELMC_RECORD_GET_INDEX_INT(owned[8], ELMC_FIELD_MAIN_RECT_H);
      scene_cmd.p4 = (owned[1] ? elmc_as_int(owned[1]) : 0);
      Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
      CHECK_RC(Rc);

      elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_PUSH_CONTEXT);

      Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
      CHECK_RC(Rc);

      elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_TEXT_COLOR);
      scene_cmd.p0 = (owned[1] ? elmc_as_int(owned[1]) : 0);
      Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
      CHECK_RC(Rc);

      const elmc_int_t direct_hoisted_int_19 = (ELMC_TEXT_ALIGN_CENTER + (ELMC_TEXT_OVERFLOW_WORD_WRAP * (1 << ELMC_TEXT_OVERFLOW_SHIFT)));

      elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_TEXT);
      scene_cmd.p0 = 1;
      scene_cmd.p1 = ELMC_RECORD_GET_INDEX_INT(owned[8], ELMC_FIELD_MAIN_RECT_X);
      scene_cmd.p2 = ELMC_RECORD_GET_INDEX_INT(owned[8], ELMC_FIELD_MAIN_RECT_Y);
      scene_cmd.p3 = ELMC_RECORD_GET_INDEX_INT(owned[8], ELMC_FIELD_MAIN_RECT_W);
      scene_cmd.p4 = ELMC_RECORD_GET_INDEX_INT(owned[8], ELMC_FIELD_MAIN_RECT_H);
      scene_cmd.p5 = direct_hoisted_int_19;
      {
        const char *direct_text = native_string_12;
        int direct_text_i = 0;
        while (direct_text[direct_text_i] && direct_text_i < 63) {
          scene_cmd.text[direct_text_i] = direct_text[direct_text_i];
          direct_text_i++;
        }
        scene_cmd.text[direct_text_i] = '\0';

      }

      Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
      CHECK_RC(Rc);

      elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_POP_CONTEXT);

      Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
      CHECK_RC(Rc);

    }

    owned[14] = elmc_record_get_index(model, ELMC_FIELD_MAIN_MODEL_LAYOUT);

    owned[15] = elmc_record_get_index(owned[14], ELMC_FIELD_MAIN_LAYOUT_CENTER);

    owned[16] = elmc_record_get_index(model, ELMC_FIELD_MAIN_MODEL_HANDS);

    Rc = elmc_fn_Main_secondHandColor(&owned[17], model);
    CHECK_RC(Rc);

    const elmc_int_t native_i_23 = elmc_as_int(owned[17]);

    if (elmc_maybe_is_just(owned[16])) {

      owned[18] = elmc_record_get_index(elmc_maybe_or_tuple_just_payload_borrow(owned[16]), ELMC_FIELD_MAIN_HANDS_HOURTO);

      Rc = elmc_fn_Main_strokeLine_commands_append_native(owned[15], owned[18], 4, (owned[1] ? elmc_as_int(owned[1]) : 0), writer);
      CHECK_RC(Rc);

      owned[19] = elmc_record_get_index(elmc_maybe_or_tuple_just_payload_borrow(owned[16]), ELMC_FIELD_MAIN_HANDS_MINUTETO);

      Rc = elmc_fn_Main_strokeLine_commands_append_native(owned[15], owned[19], 2, (owned[1] ? elmc_as_int(owned[1]) : 0), writer);
      CHECK_RC(Rc);

      elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_PUSH_CONTEXT);

      Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
      CHECK_RC(Rc);

      elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_STROKE_COLOR);
      scene_cmd.p0 = native_i_23;
      Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
      CHECK_RC(Rc);

      elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_STROKE_WIDTH);
      scene_cmd.p0 = 1;
      Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
      CHECK_RC(Rc);

      elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_LINE);
      scene_cmd.p0 = ELMC_RECORD_GET_INDEX_INT(owned[15], ELMC_FIELD_MAIN_POINT_X);
      scene_cmd.p1 = ELMC_RECORD_GET_INDEX_INT(owned[15], ELMC_FIELD_MAIN_POINT_Y);
      scene_cmd.p2 = ELMC_RECORD_GET_INDEX_INT(ELMC_RECORD_GET_INDEX(elmc_maybe_or_tuple_just_payload_borrow(owned[16]), ELMC_FIELD_MAIN_HANDS_SECONDTO), ELMC_FIELD_MAIN_POINT_X);
      scene_cmd.p3 = ELMC_RECORD_GET_INDEX_INT(ELMC_RECORD_GET_INDEX(elmc_maybe_or_tuple_just_payload_borrow(owned[16]), ELMC_FIELD_MAIN_HANDS_SECONDTO), ELMC_FIELD_MAIN_POINT_Y);
      scene_cmd.p4 = native_i_23;
      Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
      CHECK_RC(Rc);

      elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_LINE);
      scene_cmd.p0 = ELMC_RECORD_GET_INDEX_INT(owned[15], ELMC_FIELD_MAIN_POINT_X);
      scene_cmd.p1 = ELMC_RECORD_GET_INDEX_INT(owned[15], ELMC_FIELD_MAIN_POINT_Y);
      scene_cmd.p2 = ELMC_RECORD_GET_INDEX_INT(ELMC_RECORD_GET_INDEX(elmc_maybe_or_tuple_just_payload_borrow(owned[16]), ELMC_FIELD_MAIN_HANDS_SECONDTAIL), ELMC_FIELD_MAIN_POINT_X);
      scene_cmd.p3 = ELMC_RECORD_GET_INDEX_INT(ELMC_RECORD_GET_INDEX(elmc_maybe_or_tuple_just_payload_borrow(owned[16]), ELMC_FIELD_MAIN_HANDS_SECONDTAIL), ELMC_FIELD_MAIN_POINT_Y);
      scene_cmd.p4 = native_i_23;
      Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
      CHECK_RC(Rc);

      elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_POP_CONTEXT);

      Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
      CHECK_RC(Rc);

    }

    elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_FILL_CIRCLE);
    scene_cmd.p0 = ELMC_RECORD_GET_INDEX_INT(ELMC_RECORD_GET_INDEX(ELMC_RECORD_GET_INDEX(model, ELMC_FIELD_MAIN_MODEL_LAYOUT), ELMC_FIELD_MAIN_LAYOUT_CENTER), ELMC_FIELD_MAIN_POINT_X);
    scene_cmd.p1 = ELMC_RECORD_GET_INDEX_INT(ELMC_RECORD_GET_INDEX(ELMC_RECORD_GET_INDEX(model, ELMC_FIELD_MAIN_MODEL_LAYOUT), ELMC_FIELD_MAIN_LAYOUT_CENTER), ELMC_FIELD_MAIN_POINT_Y);
    scene_cmd.p2 = 5;
    scene_cmd.p3 = elmc_as_int(owned[1]);
    Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
    CHECK_RC(Rc);

    elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_FILL_CIRCLE);
    scene_cmd.p0 = ELMC_RECORD_GET_INDEX_INT(ELMC_RECORD_GET_INDEX(ELMC_RECORD_GET_INDEX(model, ELMC_FIELD_MAIN_MODEL_LAYOUT), ELMC_FIELD_MAIN_LAYOUT_CENTER), ELMC_FIELD_MAIN_POINT_X);
    scene_cmd.p1 = ELMC_RECORD_GET_INDEX_INT(ELMC_RECORD_GET_INDEX(ELMC_RECORD_GET_INDEX(model, ELMC_FIELD_MAIN_MODEL_LAYOUT), ELMC_FIELD_MAIN_LAYOUT_CENTER), ELMC_FIELD_MAIN_POINT_Y);
    scene_cmd.p2 = 2;
    scene_cmd.p3 = elmc_as_int(owned[0]);
    Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
    CHECK_RC(Rc);

  CATCH_END
  elmc_release_array_lifo(owned, DIM(owned));

  return Rc;

}

static RC elmc_fn_Main_quoteOps_commands_append(ElmcValue ** const args, const int argc, ElmcSceneWriter * const writer) {
  ElmcValue *model = (argc > 0) ? args[0] : NULL;

  if (!writer)
    return RC_ERR_INVALID_ARG;
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[5] = {0};

#if defined(PBL_PLATFORM_APLITE)
  static ElmcPebbleDrawCmd scene_cmd;
#else
  ElmcPebbleDrawCmd scene_cmd;
#endif

  CATCH_BEGIN

    Rc = elmc_fn_Main_resolveThemeColor(&owned[0], ELMC_RECORD_GET_INDEX(model, ELMC_FIELD_MAIN_MODEL_QUOTEBACKGROUND), ELMC_RECORD_GET_INDEX(model, ELMC_FIELD_MAIN_MODEL_CASECOLOR));
    CHECK_RC(Rc);

    Rc = elmc_fn_Main_resolveThemeColor(&owned[1], ELMC_RECORD_GET_INDEX(model, ELMC_FIELD_MAIN_MODEL_QUOTETEXT), ELMC_RECORD_GET_INDEX(model, ELMC_FIELD_MAIN_MODEL_CASECOLOR));
    CHECK_RC(Rc);

    elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_CLEAR);
    scene_cmd.p0 = elmc_as_int(owned[0]);
    Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
    CHECK_RC(Rc);

    elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_PUSH_CONTEXT);

    Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
    CHECK_RC(Rc);

    elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_TEXT_COLOR);
    scene_cmd.p0 = elmc_as_int(owned[1]);
    Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
    CHECK_RC(Rc);

    owned[4] = elmc_record_get_index(model, ELMC_FIELD_MAIN_MODEL_QUOTELINES);

    owned[2] = elmc_record_get_index(model, ELMC_FIELD_MAIN_MODEL_QUOTEFONT);

    owned[3] = elmc_record_get_index(model, ELMC_FIELD_MAIN_MODEL_QUOTEBOX);

    if (owned[4] && owned[4]->tag == ELMC_TAG_RECORD_SEQ) {
      int direct_rlen_8 = elmc_record_seq_length(owned[4]);
      for (int direct_ii_8 = 0;
      Rc == RC_SUCCESS && direct_ii_8 < direct_rlen_8; direct_ii_8++) {;
        ElmcValue *direct_item_value_8 = elmc_record_seq_get(owned[4], direct_ii_8);
        ElmcValue *direct_call_args_8[3] = {0};
        direct_call_args_8[0] = owned[2];
        direct_call_args_8[1] = owned[3];
        direct_call_args_8[2] = direct_item_value_8;
        Rc = elmc_fn_Main_quoteLineOp_commands_append(direct_call_args_8, 3, writer);
        elmc_release(direct_item_value_8);
        CHECK_RC(Rc);
      }
    } else
    if (owned[4] && owned[4]->tag == ELMC_TAG_LAZY_MAP) {
      int direct_llen_8 = elmc_lazy_map_length(owned[4]);
      for (int direct_ii_8 = 0;
      Rc == RC_SUCCESS && direct_ii_8 < direct_llen_8; direct_ii_8++) {;
        ElmcValue *direct_item_value_8 = NULL;
        Rc = elmc_lazy_map_nth(&direct_item_value_8, owned[4], direct_ii_8);
        CHECK_RC(Rc);
        ElmcValue *direct_call_args_8[3] = {0};
        direct_call_args_8[0] = owned[2];
        direct_call_args_8[1] = owned[3];
        direct_call_args_8[2] = direct_item_value_8;
        Rc = elmc_fn_Main_quoteLineOp_commands_append(direct_call_args_8, 3, writer);
        elmc_release(direct_item_value_8);
        CHECK_RC(Rc);
      }
    } else {
      ElmcValue *direct_cursor_8 = owned[4];
      while (Rc == RC_SUCCESS && direct_cursor_8 && direct_cursor_8->tag == ELMC_TAG_LIST && direct_cursor_8->payload != NULL) {
        ElmcCons *direct_node_8 = (ElmcCons *)direct_cursor_8->payload;
        ElmcValue *direct_call_args_8[3] = {0};
        direct_call_args_8[0] = owned[2];
        direct_call_args_8[1] = owned[3];
        direct_call_args_8[2] = direct_node_8->head;
        Rc = elmc_fn_Main_quoteLineOp_commands_append(direct_call_args_8, 3, writer);
        CHECK_RC(Rc);
        direct_cursor_8 = direct_node_8->tail;
      }
    }

    elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_POP_CONTEXT);

    Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
    CHECK_RC(Rc);

  CATCH_END
  elmc_release_array_lifo(owned, DIM(owned));

  return Rc;

}

static RC elmc_fn_Main_quoteLineOp_commands_append(ElmcValue ** const args, const int argc, ElmcSceneWriter * const writer) {
  ElmcValue *font = (argc > 0) ? args[0] : NULL;
  ElmcValue *box = (argc > 1) ? args[1] : NULL;
  ElmcValue *line = (argc > 2) ? args[2] : NULL;

  if (!writer)
    return RC_ERR_INVALID_ARG;
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[1] = {0};

#if defined(PBL_PLATFORM_APLITE)
  static ElmcPebbleDrawCmd scene_cmd;
#else
  ElmcPebbleDrawCmd scene_cmd;
#endif

  CATCH_BEGIN

    const elmc_int_t direct_hoisted_int_1 = (ELMC_TEXT_ALIGN_CENTER + (ELMC_TEXT_OVERFLOW_WORD_WRAP * (1 << ELMC_TEXT_OVERFLOW_SHIFT)));

    owned[0] = elmc_record_get_index(line, ELMC_FIELD_MAIN_QUOTELINE_TEXT);

    elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_TEXT);
    scene_cmd.p0 = elmc_as_int_number(font);
    scene_cmd.p1 = ELMC_RECORD_GET_INDEX_INT(box, ELMC_FIELD_MAIN_RECT_X);
    scene_cmd.p2 = ELMC_RECORD_GET_INDEX_INT(line, ELMC_FIELD_MAIN_QUOTELINE_Y);
    scene_cmd.p3 = ELMC_RECORD_GET_INDEX_INT(box, ELMC_FIELD_MAIN_RECT_W);
    scene_cmd.p4 = ELMC_RECORD_GET_INDEX_INT(line, ELMC_FIELD_MAIN_QUOTELINE_H);
    scene_cmd.p5 = direct_hoisted_int_1;
    if (owned[0] && owned[0]->tag == ELMC_TAG_STRING && owned[0]->payload) {
      const char *direct_text = (const char *)owned[0]->payload;
      int direct_text_i = 0;
      while (direct_text[direct_text_i] && direct_text_i < 63) {
        scene_cmd.text[direct_text_i] = direct_text[direct_text_i];
        direct_text_i++;
      }
      scene_cmd.text[direct_text_i] = '\0';

    }

    Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
    CHECK_RC(Rc);

  CATCH_END
  elmc_release_array_lifo(owned, DIM(owned));

  return Rc;

}

static RC elmc_fn_Main_hourTickOp_commands_append(ElmcValue ** const args, const int argc, ElmcSceneWriter * const writer) {
  elmc_int_t ink = (argc > 0 && args[0]) ? elmc_as_int(args[0]) : 0;
  ElmcValue *tick = (argc > 1) ? args[1] : NULL;

  return elmc_fn_Main_hourTickOp_commands_append_native(ink, tick, writer);
}

static RC elmc_fn_Main_hourTickOp_commands_append_native(const elmc_int_t ink, ElmcValue * const tick, ElmcSceneWriter * const writer) {

  if (!writer)
    return RC_ERR_INVALID_ARG;
  RC Rc = RC_SUCCESS;
#if defined(PBL_PLATFORM_APLITE)
  static ElmcPebbleDrawCmd scene_cmd;
#else
  ElmcPebbleDrawCmd scene_cmd;
#endif

  CATCH_BEGIN

    elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_PUSH_CONTEXT);

    Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
    CHECK_RC(Rc);

    elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_STROKE_COLOR);
    scene_cmd.p0 = ink;
    Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
    CHECK_RC(Rc);

    elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_STROKE_WIDTH);
    scene_cmd.p0 = ELMC_RECORD_GET_INDEX_INT(tick, ELMC_FIELD_MAIN_TICKMARK_WIDTH);
    Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
    CHECK_RC(Rc);

    elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_LINE);
    scene_cmd.p0 = ELMC_RECORD_GET_INDEX_INT(ELMC_RECORD_GET_INDEX(tick, ELMC_FIELD_MAIN_TICKMARK_FROM), ELMC_FIELD_MAIN_POINT_X);
    scene_cmd.p1 = ELMC_RECORD_GET_INDEX_INT(ELMC_RECORD_GET_INDEX(tick, ELMC_FIELD_MAIN_TICKMARK_FROM), ELMC_FIELD_MAIN_POINT_Y);
    scene_cmd.p2 = ELMC_RECORD_GET_INDEX_INT(ELMC_RECORD_GET_INDEX(tick, ELMC_FIELD_MAIN_TICKMARK_TO), ELMC_FIELD_MAIN_POINT_X);
    scene_cmd.p3 = ELMC_RECORD_GET_INDEX_INT(ELMC_RECORD_GET_INDEX(tick, ELMC_FIELD_MAIN_TICKMARK_TO), ELMC_FIELD_MAIN_POINT_Y);
    scene_cmd.p4 = ink;
    Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
    CHECK_RC(Rc);

    elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_POP_CONTEXT);

    Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
    CHECK_RC(Rc);

  CATCH_END
  return Rc;

}

static RC elmc_fn_Main_minuteTickOp_commands_append(ElmcValue ** const args, const int argc, ElmcSceneWriter * const writer) {
  elmc_int_t ink = (argc > 0 && args[0]) ? elmc_as_int(args[0]) : 0;
  ElmcValue *point = (argc > 1) ? args[1] : NULL;

  return elmc_fn_Main_minuteTickOp_commands_append_native(ink, point, writer);
}

static RC elmc_fn_Main_minuteTickOp_commands_append_native(const elmc_int_t ink, ElmcValue * const point, ElmcSceneWriter * const writer) {

  if (!writer)
    return RC_ERR_INVALID_ARG;
  RC Rc = RC_SUCCESS;
#if defined(PBL_PLATFORM_APLITE)
  static ElmcPebbleDrawCmd scene_cmd;
#else
  ElmcPebbleDrawCmd scene_cmd;
#endif

  CATCH_BEGIN

    elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_PIXEL);
    scene_cmd.p0 = ELMC_RECORD_GET_INDEX_INT(point, ELMC_FIELD_MAIN_POINT_X);
    scene_cmd.p1 = ELMC_RECORD_GET_INDEX_INT(point, ELMC_FIELD_MAIN_POINT_Y);
    scene_cmd.p2 = ink;
    Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
    CHECK_RC(Rc);

  CATCH_END
  return Rc;

}

static RC elmc_fn_Main_strokeLine_commands_append(ElmcValue ** const args, const int argc, ElmcSceneWriter * const writer) {
  ElmcValue *from = (argc > 0) ? args[0] : NULL;
  ElmcValue *to = (argc > 1) ? args[1] : NULL;
  elmc_int_t width = (argc > 2 && args[2]) ? elmc_as_int(args[2]) : 0;
  elmc_int_t color = (argc > 3 && args[3]) ? elmc_as_int(args[3]) : 0;

  return elmc_fn_Main_strokeLine_commands_append_native(from, to, width, color, writer);
}

static RC elmc_fn_Main_strokeLine_commands_append_native(ElmcValue * const from, ElmcValue * const to, const elmc_int_t width, const elmc_int_t color, ElmcSceneWriter * const writer) {

  if (!writer)
    return RC_ERR_INVALID_ARG;
  RC Rc = RC_SUCCESS;
#if defined(PBL_PLATFORM_APLITE)
  static ElmcPebbleDrawCmd scene_cmd;
#else
  ElmcPebbleDrawCmd scene_cmd;
#endif

  CATCH_BEGIN

    elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_PUSH_CONTEXT);

    Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
    CHECK_RC(Rc);

    elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_STROKE_COLOR);
    scene_cmd.p0 = color;
    Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
    CHECK_RC(Rc);

    elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_STROKE_WIDTH);
    scene_cmd.p0 = width;
    Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
    CHECK_RC(Rc);

    elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_LINE);
    scene_cmd.p0 = ELMC_RECORD_GET_INDEX_INT(from, ELMC_FIELD_MAIN_POINT_X);
    scene_cmd.p1 = ELMC_RECORD_GET_INDEX_INT(from, ELMC_FIELD_MAIN_POINT_Y);
    scene_cmd.p2 = ELMC_RECORD_GET_INDEX_INT(to, ELMC_FIELD_MAIN_POINT_X);
    scene_cmd.p3 = ELMC_RECORD_GET_INDEX_INT(to, ELMC_FIELD_MAIN_POINT_Y);
    scene_cmd.p4 = color;
    Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
    CHECK_RC(Rc);

    elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_POP_CONTEXT);

    Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
    CHECK_RC(Rc);

  CATCH_END
  return Rc;

}
