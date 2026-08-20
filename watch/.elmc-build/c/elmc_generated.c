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
#define ELMC_UNION_COMPANION_TYPES_SETMOTIVATIONALTEXT 1
#define ELMC_UNION_COMPANION_TYPES_SETQUOTEDISPLAYSECONDS 3
#define ELMC_UNION_COMPANION_TYPES_SETWATCHDISPLAYSECONDS 2
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
#define ELMC_UNION_CURRENTDATETIME 1
#define ELMC_UNION_DEFAULTFONT 1
#define ELMC_UNION_DICT_BLACK 2
#define ELMC_UNION_DICT_RED 1
#define ELMC_UNION_FROMPHONE 5
#define ELMC_UNION_GOTWATCHCOLOR 9
#define ELMC_UNION_GRAY 6
#define ELMC_UNION_GREEN 10
#define ELMC_UNION_HOURCHANGED 4
#define ELMC_UNION_JUST 1
#define ELMC_UNION_LOADEDQUOTESECONDS 7
#define ELMC_UNION_LOADEDQUOTETEXT 8
#define ELMC_UNION_LOADEDWATCHSECONDS 6
#define ELMC_UNION_MAIN_CURRENTDATETIME 1
#define ELMC_UNION_MAIN_FROMPHONE 5
#define ELMC_UNION_MAIN_GOTWATCHCOLOR 9
#define ELMC_UNION_MAIN_HOURCHANGED 4
#define ELMC_UNION_MAIN_LOADEDQUOTESECONDS 7
#define ELMC_UNION_MAIN_LOADEDQUOTETEXT 8
#define ELMC_UNION_MAIN_LOADEDWATCHSECONDS 6
#define ELMC_UNION_MAIN_MINUTECHANGED 3
#define ELMC_UNION_MAIN_SECONDCHANGED 2
#define ELMC_UNION_MAIN_SHOWQUOTE 2
#define ELMC_UNION_MAIN_SHOWWATCH 1
#define ELMC_UNION_MATTEBLACK 8
#define ELMC_UNION_MAYBE_JUST 1
#define ELMC_UNION_MAYBE_NOTHING 2
#define ELMC_UNION_MINUTECHANGED 3
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
#define ELMC_UNION_SETQUOTEDISPLAYSECONDS 3
#define ELMC_UNION_SETWATCHDISPLAYSECONDS 2
#define ELMC_UNION_SHOWQUOTE 2
#define ELMC_UNION_SHOWWATCH 1
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
#define ELMC_UNION_WHITE 3

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
  ELMC_FIELD_MAIN_MODEL_CASECOLOR = 15,
  ELMC_FIELD_MAIN_MODEL_DATELABEL = 11,
  ELMC_FIELD_MAIN_MODEL_DISPLAYSHAPE = 2,
  ELMC_FIELD_MAIN_MODEL_HANDS = 10,
  ELMC_FIELD_MAIN_MODEL_LAYOUT = 9,
  ELMC_FIELD_MAIN_MODEL_NOW = 3,
  ELMC_FIELD_MAIN_MODEL_PHASE = 7,
  ELMC_FIELD_MAIN_MODEL_QUOTE = 4,
  ELMC_FIELD_MAIN_MODEL_QUOTEBOX = 13,
  ELMC_FIELD_MAIN_MODEL_QUOTEFONT = 12,
  ELMC_FIELD_MAIN_MODEL_QUOTELINES = 14,
  ELMC_FIELD_MAIN_MODEL_QUOTESECONDS = 6,
  ELMC_FIELD_MAIN_MODEL_REMAININGSEC = 8,
  ELMC_FIELD_MAIN_MODEL_SCREENH = 1,
  ELMC_FIELD_MAIN_MODEL_SCREENW = 0,
  ELMC_FIELD_MAIN_MODEL_WATCHSECONDS = 5,
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
#define ELMC_COLOR_ORANGE 244
#define ELMC_COLOR_PASTEL_YELLOW 254
#define ELMC_COLOR_RAJAH 249
#define ELMC_COLOR_RED 240
#define ELMC_COLOR_SPRING_BUD 236
#define ELMC_COLOR_SUNSET_ORANGE 245
#define ELMC_COLOR_TIFFANY_BLUE 202
#define ELMC_COLOR_WHITE 255

static elmc_int_t elmc_fn_Main_storeWatchSeconds(void);
static elmc_int_t elmc_fn_Main_storeQuoteSeconds(void);
static elmc_int_t elmc_fn_Main_storeQuoteText(void);
static elmc_int_t elmc_fn_Main_defaultWatchSeconds(void);
static elmc_int_t elmc_fn_Main_defaultQuoteSeconds(void);
static RC elmc_fn_Main_defaultQuote(ElmcValue **out);
RC elmc_fn_Main_init(ElmcValue **out, ElmcValue *context);
RC elmc_fn_Main_update(ElmcValue **out, ElmcValue *msg, ElmcValue *model);
static RC elmc_fn_Main_updateFromPhone(ElmcValue **out, ElmcValue *message, ElmcValue *model);
static RC elmc_fn_Main_applyWatchSeconds(ElmcValue **out, elmc_int_t seconds, ElmcValue *model);
static RC elmc_fn_Main_applyQuoteSeconds(ElmcValue **out, elmc_int_t seconds, ElmcValue *model);
static RC elmc_fn_Main_applyQuoteText(ElmcValue **out, ElmcValue *text, ElmcValue *model);
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
static RC elmc_fn_Main_quoteFont(ElmcValue **out, ElmcValue *quote);
static RC elmc_fn_Main_quoteBounds(ElmcValue **out, elmc_int_t screenW, elmc_int_t screenH, ElmcValue *displayShape);
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

  ElmcValue *owned[2] = {0};
  CATCH_BEGIN
    /* plan block 0 */
    CATCH_BEGIN
      owned[0] = elmc_retain((argc > 0 ? args[0] : NULL));
      Rc = elmc_record_update_index_cow_drop(&owned[1], owned[0], ELMC_FIELD_PEBBLE_TIME_CURRENTDATETIME_SECOND, captures[0]);
      CHECK_RC(Rc);
      if (owned[1] == owned[0]) {
        owned[1] = elmc_retain(owned[1]);
      }
      owned[0] = NULL;
      *out = owned[1];
      owned[1] = NULL;
    CATCH_END
  CATCH_END

  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}
static RC elmc_fn_Main_setMinute_closure_0(ElmcValue **out, ElmcValue **args, int argc, ElmcValue **captures, int capture_count) {
  (void)capture_count;
  RC Rc = RC_SUCCESS;

  ElmcValue *owned[2] = {0};
  CATCH_BEGIN
    /* plan block 0 */
    CATCH_BEGIN
      owned[0] = elmc_retain((argc > 0 ? args[0] : NULL));
      Rc = elmc_record_update_index_cow_drop(&owned[1], owned[0], ELMC_FIELD_PEBBLE_TIME_CURRENTDATETIME_MINUTE, captures[0]);
      CHECK_RC(Rc);
      if (owned[1] == owned[0]) {
        owned[1] = elmc_retain(owned[1]);
      }
      owned[0] = NULL;
      *out = owned[1];
      owned[1] = NULL;
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
      ElmcValue *plan_ephemeral_box_11202 = NULL;
      Rc = elmc_new_int(&plan_ephemeral_box_11202, plan_native_int_12);
      CHECK_RC(Rc);
      ElmcValue *rec_values_14_4[3] = { owned[3], plan_ephemeral_box_11202, owned[4] };
      Rc = elmc_record_new_values_take(&owned[2], 3, rec_values_14_4);
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
    static ElmcValue plan_str_immortal_10498 = { ELMC_RC_IMMORTAL, ELMC_TAG_STRING, (void *)"Make today count.", 17 };
    owned[0] = elmc_retain(&plan_str_immortal_10498);
    *out = owned[0];
    owned[0] = NULL;
  CATCH_END
  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}

RC elmc_fn_Main_init(ElmcValue **out, ElmcValue *context) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  enum { ELMC_OWNED_SLOT_COUNT = 35 };
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
    Rc = elmc_fn_Main_buildLayout(&owned[17], plan_native_int_2, plan_native_int_4, owned[3]);
    CHECK_RC(Rc);
    if (owned[17] == owned[3]) {
      owned[3] = NULL;
    }
    owned[4] = elmc_record_get_index(context, ELMC_FIELD_PEBBLE_PLATFORM_LAUNCHCONTEXT_SCREEN);
    const elmc_int_t plan_native_int_56 = ELMC_RECORD_GET_INDEX_INT(owned[4], ELMC_FIELD_PEBBLE_PLATFORM_LAUNCHSCREEN_WIDTH);
    owned[5] = elmc_record_get_index(context, ELMC_FIELD_PEBBLE_PLATFORM_LAUNCHCONTEXT_SCREEN);
    const elmc_int_t plan_native_int_57 = ELMC_RECORD_GET_INDEX_INT(owned[5], ELMC_FIELD_PEBBLE_PLATFORM_LAUNCHSCREEN_HEIGHT);
    owned[6] = elmc_record_get_index(context, ELMC_FIELD_PEBBLE_PLATFORM_LAUNCHCONTEXT_SCREEN);
    owned[13] = elmc_record_get_index(owned[6], ELMC_FIELD_PEBBLE_PLATFORM_LAUNCHSCREEN_SHAPE);
    owned[14] = elmc_maybe_nothing();
    Rc = elmc_fn_Main_defaultQuote(&owned[15]);
    CHECK_RC(Rc);
    const elmc_int_t plan_native_int_61 = elmc_fn_Main_defaultWatchSeconds();
    const elmc_int_t plan_native_int_62 = elmc_fn_Main_defaultQuoteSeconds();
    Rc = elmc_new_int(&owned[16], 1);
    CHECK_RC(Rc);
    const elmc_int_t plan_native_int_64 = elmc_fn_Main_defaultWatchSeconds();
    owned[18] = elmc_maybe_nothing();
    static ElmcValue plan_str_immortal_10562 = { ELMC_RC_IMMORTAL, ELMC_TAG_STRING, (void *)"", 0 };
    owned[19] = elmc_retain(&plan_str_immortal_10562);
    Rc = elmc_new_int(&owned[20], 3);
    CHECK_RC(Rc);
    Rc = elmc_new_int(&owned[7], 0);
    CHECK_RC(Rc);
    Rc = elmc_new_int(&owned[8], 0);
    CHECK_RC(Rc);
    Rc = elmc_new_int(&owned[9], 1);
    CHECK_RC(Rc);
    Rc = elmc_new_int(&owned[10], 1);
    CHECK_RC(Rc);
    elmc_int_t rec_values_48_2[4] = { 0, 0, 1, 1 };
    Rc = elmc_record_new_values_ints(&owned[21], 4, rec_values_48_2);
    CHECK_RC(Rc);
    owned[22] = elmc_list_nil();
    Rc = elmc_new_int(&owned[11], 1);
    CHECK_RC(Rc);
    Rc = elmc_fn_Pebble_WatchInfo_caseColor(&owned[23], owned[11]);
    CHECK_RC(Rc);
    if (owned[23] == owned[11]) {
      owned[11] = NULL;
    }
    ElmcValue *plan_ephemeral_box_10626 = NULL;
    Rc = elmc_new_int(&plan_ephemeral_box_10626, plan_native_int_56);
    CHECK_RC(Rc);
    ElmcValue *plan_ephemeral_box_10690 = NULL;
    Rc = elmc_new_int(&plan_ephemeral_box_10690, plan_native_int_57);
    CHECK_RC(Rc);
    ElmcValue *plan_ephemeral_box_10754 = NULL;
    Rc = elmc_new_int(&plan_ephemeral_box_10754, plan_native_int_61);
    CHECK_RC(Rc);
    ElmcValue *plan_ephemeral_box_10818 = NULL;
    Rc = elmc_new_int(&plan_ephemeral_box_10818, plan_native_int_62);
    CHECK_RC(Rc);
    ElmcValue *plan_ephemeral_box_10882 = NULL;
    Rc = elmc_new_int(&plan_ephemeral_box_10882, plan_native_int_64);
    CHECK_RC(Rc);
    ElmcValue *rec_values_71_3[16] = { plan_ephemeral_box_10626, plan_ephemeral_box_10690, owned[13], owned[14], owned[15], plan_ephemeral_box_10754, plan_ephemeral_box_10818, owned[16], plan_ephemeral_box_10882, owned[17], owned[18], owned[19], owned[20], owned[21], owned[22], owned[23] };
    Rc = elmc_record_new_values_take(&owned[12], 16, rec_values_71_3);
    CHECK_RC(Rc);
    owned[13] = NULL;
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
    owned[13] = NULL;
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
    Rc = elmc_fn_Main_refreshDraw(&owned[24], owned[12]);
    CHECK_RC(Rc);
    if (owned[24] == owned[12]) {
      owned[12] = NULL;
    }
    Rc = elmc_fn_Main_refreshQuoteLayout(&owned[25], owned[24]);
    CHECK_RC(Rc);
    if (owned[25] == owned[24]) {
      owned[24] = NULL;
    }
    Rc = elmc_cmd1(&owned[26], ELMC_PEBBLE_CMD_GET_CURRENT_DATE_TIME, ELMC_PEBBLE_MSG_CURRENTDATETIME);
    CHECK_RC(Rc);
    Rc = elmc_new_int(&owned[27], 1);
    CHECK_RC(Rc);
    Rc = elmc_cmd_companion_send_value(&owned[28], owned[27]);
    CHECK_RC(Rc);
    const elmc_int_t plan_native_int_78 = elmc_fn_Main_storeWatchSeconds();
    Rc = elmc_cmd2(&owned[29], ELMC_PEBBLE_CMD_STORAGE_READ_INT, plan_native_int_78, ELMC_PEBBLE_MSG_LOADEDWATCHSECONDS);
    CHECK_RC(Rc);
    const elmc_int_t plan_native_int_81 = elmc_fn_Main_storeQuoteSeconds();
    Rc = elmc_cmd2(&owned[30], ELMC_PEBBLE_CMD_STORAGE_READ_INT, plan_native_int_81, ELMC_PEBBLE_MSG_LOADEDQUOTESECONDS);
    CHECK_RC(Rc);
    const elmc_int_t plan_native_int_84 = elmc_fn_Main_storeQuoteText();
    Rc = elmc_cmd2(&owned[31], ELMC_PEBBLE_CMD_STORAGE_READ_STRING, plan_native_int_84, ELMC_PEBBLE_MSG_LOADEDQUOTETEXT);
    CHECK_RC(Rc);
    Rc = elmc_cmd1(&owned[32], ELMC_PEBBLE_CMD_GET_WATCH_COLOR, ELMC_PEBBLE_MSG_GOTWATCHCOLOR);
    CHECK_RC(Rc);
    ElmcValue *plan_list_items_10946[6] = { owned[26], owned[28], owned[29], owned[30], owned[31], owned[32] };
    Rc = elmc_list_from_values(&owned[33], plan_list_items_10946, 6);
    CHECK_RC(Rc);
    Rc = elmc_cmd_batch(&owned[34], owned[33]);
    CHECK_RC(Rc);
    Rc = elmc_tuple2(out, owned[25], owned[34]);
    CHECK_RC(Rc);
  CATCH_END
  elmc_release_array_lifo(owned, ELMC_OWNED_SLOT_COUNT);
  elmc_owned_slots_release(owned, ELMC_OWNED_SLOT_COUNT);
  return Rc;
}

RC elmc_fn_Main_update(ElmcValue **out, ElmcValue *msg, ElmcValue *model) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  enum { ELMC_OWNED_SLOT_COUNT = 34 };
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
      case ELMC_UNION_MAIN_GOTWATCHCOLOR: goto elmc_plan_block_18;
      default: goto elmc_plan_block_21;
    }
    elmc_plan_block_2:
    owned[1] = elmc_tuple_second_borrow(msg);
    Rc = elmc_maybe_just(&owned[2], owned[1]);
    CHECK_RC(Rc);
    owned[1] = NULL;
    owned[3] = elmc_retain(model);
    Rc = elmc_record_update_index_cow_drop(&owned[4], owned[3], ELMC_FIELD_MAIN_MODEL_NOW, owned[2]);
    CHECK_RC(Rc);
    if (owned[4] == owned[3]) {
      owned[4] = elmc_retain(owned[4]);
    }
    owned[3] = NULL;
    Rc = elmc_fn_Main_refreshDraw(&owned[5], owned[4]);
    CHECK_RC(Rc);
    if (owned[5] == owned[4]) {
      owned[4] = NULL;
    }
    owned[6] = elmc_cmd_none();
    Rc = elmc_tuple2(&owned[0], owned[5], owned[6]);
    CHECK_RC(Rc);
    goto elmc_plan_block_21;
    elmc_plan_block_4:
    owned[7] = elmc_tuple_second_borrow(msg);
    Rc = elmc_fn_Main_setSecond(&owned[8], owned[7], model);
    CHECK_RC(Rc);
    Rc = elmc_fn_Main_tickPhase(&owned[9], owned[8]);
    CHECK_RC(Rc);
    if (owned[9] == owned[8]) {
      owned[8] = NULL;
    }
    Rc = elmc_fn_Main_refreshAfterTick(&owned[10], owned[9]);
    CHECK_RC(Rc);
    if (owned[10] == owned[9]) {
      owned[9] = NULL;
    }
    owned[11] = elmc_cmd_none();
    Rc = elmc_tuple2(&owned[0], owned[10], owned[11]);
    CHECK_RC(Rc);
    goto elmc_plan_block_21;
    elmc_plan_block_6:
    owned[12] = elmc_tuple_second_borrow(msg);
    Rc = elmc_fn_Main_setMinute(&owned[13], owned[12], model);
    CHECK_RC(Rc);
    Rc = elmc_fn_Main_refreshAfterTick(&owned[14], owned[13]);
    CHECK_RC(Rc);
    if (owned[14] == owned[13]) {
      owned[13] = NULL;
    }
    owned[15] = elmc_cmd_none();
    Rc = elmc_tuple2(&owned[0], owned[14], owned[15]);
    CHECK_RC(Rc);
    goto elmc_plan_block_21;
    elmc_plan_block_8:
    owned[16] = elmc_tuple_second_borrow(msg);
    Rc = elmc_cmd1(&owned[17], ELMC_PEBBLE_CMD_GET_CURRENT_DATE_TIME, ELMC_PEBBLE_MSG_CURRENTDATETIME);
    CHECK_RC(Rc);
    owned[18] = elmc_retain(model);
    Rc = elmc_tuple2(&owned[0], owned[18], owned[17]);
    CHECK_RC(Rc);
    goto elmc_plan_block_21;
    elmc_plan_block_10:
    owned[19] = elmc_tuple_second_borrow(msg);
    Rc = elmc_fn_Main_updateFromPhone(&owned[0], owned[19], model);
    CHECK_RC(Rc);
    goto elmc_plan_block_21;
    elmc_plan_block_12:
    owned[20] = elmc_tuple_second_borrow(msg);
    Rc = elmc_fn_Main_applyWatchSeconds(&owned[21], elmc_as_int(owned[20]), model);
    CHECK_RC(Rc);
    owned[22] = elmc_cmd_none();
    Rc = elmc_tuple2(&owned[0], owned[21], owned[22]);
    CHECK_RC(Rc);
    goto elmc_plan_block_21;
    elmc_plan_block_14:
    owned[23] = elmc_tuple_second_borrow(msg);
    Rc = elmc_fn_Main_applyQuoteSeconds(&owned[24], elmc_as_int(owned[23]), model);
    CHECK_RC(Rc);
    owned[25] = elmc_cmd_none();
    Rc = elmc_tuple2(&owned[0], owned[24], owned[25]);
    CHECK_RC(Rc);
    goto elmc_plan_block_21;
    elmc_plan_block_16:
    owned[26] = elmc_tuple_second_borrow(msg);
    Rc = elmc_fn_Main_applyQuoteText(&owned[27], owned[26], model);
    CHECK_RC(Rc);
    owned[28] = elmc_cmd_none();
    Rc = elmc_tuple2(&owned[0], owned[27], owned[28]);
    CHECK_RC(Rc);
    goto elmc_plan_block_21;
    elmc_plan_block_18:
    owned[29] = elmc_tuple_second_borrow(msg);
    Rc = elmc_fn_Pebble_WatchInfo_caseColor(&owned[30], owned[29]);
    CHECK_RC(Rc);
    owned[31] = elmc_retain(model);
    Rc = elmc_record_update_index_cow_drop(&owned[32], owned[31], ELMC_FIELD_MAIN_MODEL_CASECOLOR, owned[30]);
    CHECK_RC(Rc);
    if (owned[32] == owned[31]) {
      owned[32] = elmc_retain(owned[32]);
    }
    owned[31] = NULL;
    owned[33] = elmc_cmd_none();
    Rc = elmc_tuple2(&owned[0], owned[32], owned[33]);
    CHECK_RC(Rc);
    elmc_plan_block_21:
    *out = owned[0];
    owned[0] = NULL;
  CATCH_END
  owned[12] = NULL;
  owned[16] = NULL;
  owned[19] = NULL;
  owned[1] = NULL;
  owned[20] = NULL;
  owned[23] = NULL;
  owned[26] = NULL;
  owned[29] = NULL;
  owned[7] = NULL;
  elmc_release_array_lifo(owned, ELMC_OWNED_SLOT_COUNT);
  elmc_owned_slots_release(owned, ELMC_OWNED_SLOT_COUNT);
  return Rc;
}

static RC elmc_fn_Main_updateFromPhone(ElmcValue **out, ElmcValue *message, ElmcValue *model) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[13] = {0};
  CATCH_BEGIN
    /* plan block 0 */
    switch (elmc_union_tag_as_int(message)) {
      case ELMC_UNION_COMPANION_TYPES_SETMOTIVATIONALTEXT: goto elmc_plan_block_2;
      case ELMC_UNION_COMPANION_TYPES_SETWATCHDISPLAYSECONDS: goto elmc_plan_block_4;
      case ELMC_UNION_COMPANION_TYPES_SETQUOTEDISPLAYSECONDS: goto elmc_plan_block_6;
      default: goto elmc_plan_block_9;
    }
    elmc_plan_block_2:
    owned[1] = elmc_tuple_second_borrow(message);
    Rc = elmc_fn_Main_normalizeQuote(&owned[2], owned[1]);
    CHECK_RC(Rc);
    Rc = elmc_fn_Main_applyQuoteText(&owned[3], owned[2], model);
    CHECK_RC(Rc);
    const elmc_int_t plan_native_int_7 = elmc_fn_Main_storeQuoteText();
    Rc = elmc_cmd2(&owned[4], ELMC_PEBBLE_CMD_STORAGE_WRITE_STRING, plan_native_int_7, elmc_as_int(owned[2]));
    CHECK_RC(Rc);
    Rc = elmc_tuple2(&owned[0], owned[3], owned[4]);
    CHECK_RC(Rc);
    goto elmc_plan_block_9;
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
    goto elmc_plan_block_9;
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
    elmc_plan_block_9:
    *out = owned[0];
    owned[0] = NULL;
  CATCH_END
  owned[1] = NULL;
  owned[5] = NULL;
  owned[9] = NULL;
  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}

static RC elmc_fn_Main_applyWatchSeconds(ElmcValue **out, elmc_int_t seconds, ElmcValue *model) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[3] = {0};
  CATCH_BEGIN
    /* plan block 0 */
    elmc_int_t plan_call_int_2 = elmc_fn_Main_defaultWatchSeconds();
    Rc = elmc_new_int(&owned[0], plan_call_int_2);
    CHECK_RC(Rc);
    const elmc_int_t plan_native_int_4 = elmc_fn_Main_clampSeconds(seconds, owned[0]);
    owned[1] = elmc_retain(model);
    Rc = elmc_record_update_index_int_cow_drop(&owned[2], owned[1], ELMC_FIELD_MAIN_MODEL_WATCHSECONDS, plan_native_int_4);
    CHECK_RC(Rc);
    if (owned[2] == owned[1]) {
      owned[2] = elmc_retain(owned[2]);
    }
    owned[1] = NULL;
    *out = elmc_fn_Main_refreshRemaining(owned[2]);
  CATCH_END
  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}

static RC elmc_fn_Main_applyQuoteSeconds(ElmcValue **out, elmc_int_t seconds, ElmcValue *model) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[3] = {0};
  CATCH_BEGIN
    /* plan block 0 */
    elmc_int_t plan_call_int_2 = elmc_fn_Main_defaultQuoteSeconds();
    Rc = elmc_new_int(&owned[0], plan_call_int_2);
    CHECK_RC(Rc);
    const elmc_int_t plan_native_int_4 = elmc_fn_Main_clampSeconds(seconds, owned[0]);
    owned[1] = elmc_retain(model);
    Rc = elmc_record_update_index_int_cow_drop(&owned[2], owned[1], ELMC_FIELD_MAIN_MODEL_QUOTESECONDS, plan_native_int_4);
    CHECK_RC(Rc);
    if (owned[2] == owned[1]) {
      owned[2] = elmc_retain(owned[2]);
    }
    owned[1] = NULL;
    *out = elmc_fn_Main_refreshRemaining(owned[2]);
  CATCH_END
  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}

static RC elmc_fn_Main_applyQuoteText(ElmcValue **out, ElmcValue *text, ElmcValue *model) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[3] = {0};
  CATCH_BEGIN
    /* plan block 0 */
    Rc = elmc_fn_Main_normalizeQuote(&owned[0], text);
    CHECK_RC(Rc);
    owned[1] = elmc_retain(model);
    Rc = elmc_record_update_index_cow_drop(&owned[2], owned[1], ELMC_FIELD_MAIN_MODEL_QUOTE, owned[0]);
    CHECK_RC(Rc);
    if (owned[2] == owned[1]) {
      owned[2] = elmc_retain(owned[2]);
    }
    owned[1] = NULL;
    Rc = elmc_fn_Main_refreshQuoteLayout(out, owned[2]);
    CHECK_RC(Rc);
  CATCH_END
  elmc_release_array_lifo(owned, DIM(owned));
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
    static ElmcValue plan_str_immortal_11010 = { ELMC_RC_IMMORTAL, ELMC_TAG_STRING, (void *)"", 0 };
    owned[1] = elmc_retain(&plan_str_immortal_11010);
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
  ElmcValue *owned[6] = {0};
  elmc_int_t plan_native_int_1 __attribute__((unused)) = 0;
  bool plan_native_bool_3 = false;
  bool plan_native_bool_11 = false;
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
  owned[0] = elmc_retain(model);
  owned[1] = NULL;
  {
    RC __alloc_rc = elmc_record_update_index_int_cow_drop(&owned[1], owned[0], ELMC_FIELD_MAIN_MODEL_REMAININGSEC, plan_native_int_5);
    if (__alloc_rc != RC_SUCCESS) {
      ELMC_RC_LOG_FAIL(__alloc_rc, "elmc_record_update_index_int_cow_drop", "allocation failed");
      owned[1] = NULL;;
    }
  }
  if (owned[1] == owned[0]) {
    owned[1] = elmc_retain(owned[1]);
  }
  owned[0] = NULL;
  goto elmc_plan_block_3;
  elmc_plan_block_2:
  const elmc_int_t plan_native_int_9 = ELMC_RECORD_GET_INDEX_INT(model, ELMC_FIELD_MAIN_MODEL_REMAININGSEC);
  plan_native_bool_11 = (plan_native_int_9 < 1);
  if (!plan_native_bool_11) goto elmc_plan_block_6;
  const elmc_int_t plan_native_int_13 = plan_native_int_1;
  owned[2] = elmc_retain(model);
  owned[3] = NULL;
  {
    RC __alloc_rc = elmc_record_update_index_int_cow_drop(&owned[3], owned[2], ELMC_FIELD_MAIN_MODEL_REMAININGSEC, plan_native_int_13);
    if (__alloc_rc != RC_SUCCESS) {
      ELMC_RC_LOG_FAIL(__alloc_rc, "elmc_record_update_index_int_cow_drop", "allocation failed");
      owned[3] = NULL;;
    }
  }
  if (owned[3] == owned[2]) {
    owned[3] = elmc_retain(owned[3]);
  }
  owned[2] = NULL;
  elmc_plan_block_6:
  if (plan_native_bool_11) {
    owned[4] = owned[3];
    owned[3] = NULL;
  } else {
    owned[4] = elmc_retain(model);
  }
  elmc_plan_block_3:
  if (plan_native_bool_3) {
    owned[5] = owned[1];
    owned[1] = NULL;
  } else {
    owned[5] = owned[4];
    owned[4] = NULL;
  }
  {
    ElmcValue *__ret = owned[5];
    elmc_owned_null_aliases(owned, 6, __ret);
    elmc_release_array_lifo(owned, 6);
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
  ElmcValue *owned[11] = {0};
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
    owned[3] = elmc_retain(model);
    Rc = elmc_record_update_index_int_cow_drop(&owned[4], owned[3], ELMC_FIELD_MAIN_MODEL_PHASE, ELMC_UNION_MAIN_SHOWQUOTE);
    CHECK_RC(Rc);
    if (owned[4] == owned[3]) {
      owned[4] = elmc_retain(owned[4]);
    }
    owned[3] = NULL;
    const elmc_int_t plan_native_int_17 = ELMC_RECORD_GET_INDEX_INT(model, ELMC_FIELD_MAIN_MODEL_QUOTESECONDS);
    Rc = elmc_record_update_index_int_cow_drop(&owned[1], owned[4], ELMC_FIELD_MAIN_MODEL_REMAININGSEC, plan_native_int_17);
    CHECK_RC(Rc);
    owned[4] = NULL;
    goto elmc_plan_block_8;
    elmc_plan_block_12:
    Rc = elmc_new_int(&owned[5], 1);
    CHECK_RC(Rc);
    owned[6] = elmc_retain(model);
    Rc = elmc_record_update_index_int_cow_drop(&owned[7], owned[6], ELMC_FIELD_MAIN_MODEL_PHASE, ELMC_UNION_MAIN_SHOWWATCH);
    CHECK_RC(Rc);
    if (owned[7] == owned[6]) {
      owned[7] = elmc_retain(owned[7]);
    }
    owned[6] = NULL;
    const elmc_int_t plan_native_int_23 = ELMC_RECORD_GET_INDEX_INT(model, ELMC_FIELD_MAIN_MODEL_WATCHSECONDS);
    Rc = elmc_record_update_index_int_cow_drop(&owned[1], owned[7], ELMC_FIELD_MAIN_MODEL_REMAININGSEC, plan_native_int_23);
    CHECK_RC(Rc);
    owned[7] = NULL;
    goto elmc_plan_block_8;
    elmc_plan_block_14:
    goto elmc_plan_block_8;
    elmc_plan_block_7:
    const elmc_int_t plan_native_int_26 = direct_hoisted_rec_1;
    const elmc_int_t plan_native_int_28 = plan_native_int_26 - 1;
    owned[8] = elmc_retain(model);
    Rc = elmc_record_update_index_int_cow_drop(&owned[9], owned[8], ELMC_FIELD_MAIN_MODEL_REMAININGSEC, plan_native_int_28);
    CHECK_RC(Rc);
    if (owned[9] == owned[8]) {
      owned[9] = elmc_retain(owned[9]);
    }
    owned[8] = NULL;
    elmc_plan_block_8:
    if (plan_native_bool_9) {
      owned[10] = owned[1];
      owned[1] = NULL;
    } else {
      owned[10] = owned[9];
      owned[9] = NULL;
    }
    *out = owned[10];
    owned[10] = NULL;
  CATCH_END
  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}

static RC elmc_fn_Main_setSecond(ElmcValue **out, ElmcValue *second, ElmcValue *model) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[5] = {0};
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
    owned[4] = elmc_retain(model);
    Rc = elmc_record_update_index_cow_drop(out, owned[4], ELMC_FIELD_MAIN_MODEL_NOW, owned[3]);
    CHECK_RC(Rc);
    if (*out == owned[4]) {
      *out = elmc_retain(*out);
    }
    owned[4] = NULL;
  CATCH_END
  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}

static RC elmc_fn_Main_setMinute(ElmcValue **out, ElmcValue *minute, ElmcValue *model) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[5] = {0};
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
    owned[4] = elmc_retain(model);
    Rc = elmc_record_update_index_cow_drop(out, owned[4], ELMC_FIELD_MAIN_MODEL_NOW, owned[3]);
    CHECK_RC(Rc);
    if (*out == owned[4]) {
      *out = elmc_retain(*out);
    }
    owned[4] = NULL;
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
    owned[1] = elmc_retain(elmc_maybe_just_payload(maybeNow));
    ElmcValue *plan_closure_argv_11074[1] = { owned[1] };
    Rc = elmc_closure_call_rc(&owned[2], fn, plan_closure_argv_11074, 1);
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
  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}

static RC elmc_fn_Main_refreshDraw(ElmcValue **out, ElmcValue *model) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[15] = {0};
  CATCH_BEGIN
    bool plan_native_bool_2 = false;
    /* plan block 0 */
    owned[0] = elmc_record_get_index(model, ELMC_FIELD_MAIN_MODEL_NOW);
    plan_native_bool_2 = elmc_maybe_is_nothing(owned[0]);
    if (!plan_native_bool_2) goto elmc_plan_block_2;
    owned[1] = elmc_maybe_nothing();
    owned[2] = elmc_retain(model);
    Rc = elmc_record_update_index_cow_drop(&owned[3], owned[2], ELMC_FIELD_MAIN_MODEL_HANDS, owned[1]);
    CHECK_RC(Rc);
    if (owned[3] == owned[2]) {
      owned[3] = elmc_retain(owned[3]);
    }
    owned[2] = NULL;
    static ElmcValue plan_str_immortal_11138 = { ELMC_RC_IMMORTAL, ELMC_TAG_STRING, (void *)"", 0 };
    owned[4] = elmc_retain(&plan_str_immortal_11138);
    Rc = elmc_record_update_index_cow_drop(&owned[5], owned[3], ELMC_FIELD_MAIN_MODEL_DATELABEL, owned[4]);
    CHECK_RC(Rc);
    owned[3] = NULL;
    goto elmc_plan_block_3;
    elmc_plan_block_2:
    owned[6] = elmc_retain(elmc_maybe_just_payload(owned[0]));
    owned[7] = elmc_record_get_index(model, ELMC_FIELD_MAIN_MODEL_LAYOUT);
    Rc = elmc_fn_Main_buildHands(&owned[8], owned[7], owned[6]);
    CHECK_RC(Rc);
    if (owned[8] == owned[7]) {
      owned[7] = NULL;
    }
    Rc = elmc_maybe_just_own(&owned[9], owned[8]);
    CHECK_RC(Rc);
    owned[8] = NULL;
    owned[10] = elmc_retain(model);
    Rc = elmc_record_update_index_cow_drop(&owned[11], owned[10], ELMC_FIELD_MAIN_MODEL_HANDS, owned[9]);
    CHECK_RC(Rc);
    if (owned[11] == owned[10]) {
      owned[11] = elmc_retain(owned[11]);
    }
    owned[10] = NULL;
    const elmc_int_t plan_native_int_17 = ELMC_RECORD_GET_INDEX_INT(owned[6], ELMC_FIELD_PEBBLE_TIME_CURRENTDATETIME_DAY);
    Rc = elmc_string_from_native_int(&owned[12], plan_native_int_17);
    CHECK_RC(Rc);
    Rc = elmc_record_update_index_cow_drop(&owned[13], owned[11], ELMC_FIELD_MAIN_MODEL_DATELABEL, owned[12]);
    CHECK_RC(Rc);
    owned[11] = NULL;
    elmc_plan_block_3:
    if (plan_native_bool_2) {
      owned[14] = owned[5];
      owned[5] = NULL;
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
  ElmcValue *owned[14] = {0};
  CATCH_BEGIN
    /* plan block 0 */
    owned[0] = elmc_record_get_index(model, ELMC_FIELD_MAIN_MODEL_QUOTE);
    Rc = elmc_fn_Main_quoteFont(&owned[1], owned[0]);
    CHECK_RC(Rc);
    if (owned[1] == owned[0]) {
      owned[0] = NULL;
    }
    const elmc_int_t plan_native_int_3 = ELMC_RECORD_GET_INDEX_INT(model, ELMC_FIELD_MAIN_MODEL_SCREENW);
    const elmc_int_t plan_native_int_4 = ELMC_RECORD_GET_INDEX_INT(model, ELMC_FIELD_MAIN_MODEL_SCREENH);
    owned[2] = elmc_record_get_index(model, ELMC_FIELD_MAIN_MODEL_DISPLAYSHAPE);
    Rc = elmc_fn_Main_quoteBounds(&owned[3], plan_native_int_3, plan_native_int_4, owned[2]);
    CHECK_RC(Rc);
    if (owned[3] == owned[2]) {
      owned[2] = NULL;
    }
    Rc = elmc_fn_Pebble_Ui_Resources_fontInfo(&owned[4], owned[1]);
    CHECK_RC(Rc);
    const elmc_int_t plan_native_int_9 = ELMC_RECORD_GET_INDEX_INT(owned[4], ELMC_FIELD_PEBBLE_UI_RESOURCES_FONTINFO_HEIGHT);
    const elmc_int_t plan_native_int_16 = ELMC_RECORD_GET_INDEX_INT(owned[3], ELMC_FIELD_MAIN_RECT_W);
    const elmc_int_t plan_native_int_18 = ((4 >= elmc_int_idiv(plan_native_int_16, ((6 >= elmc_int_idiv(((14 >= plan_native_int_9) ? 14 : plan_native_int_9), 2)) ? 6 : elmc_int_idiv(((14 >= plan_native_int_9) ? 14 : plan_native_int_9), 2)))) ? 4 : elmc_int_idiv(plan_native_int_16, ((6 >= elmc_int_idiv(((14 >= plan_native_int_9) ? 14 : plan_native_int_9), 2)) ? 6 : elmc_int_idiv(((14 >= plan_native_int_9) ? 14 : plan_native_int_9), 2))));
    owned[6] = elmc_retain(owned[3]);
    ElmcValue *plan_ephemeral_box_11266 = NULL;
    Rc = elmc_new_int(&plan_ephemeral_box_11266, ((14 >= plan_native_int_9) ? 14 : plan_native_int_9));
    CHECK_RC(Rc);
    owned[7] = plan_ephemeral_box_11266;
    owned[8] = elmc_record_get_index(model, ELMC_FIELD_MAIN_MODEL_QUOTE);
    Rc = elmc_fn_Main_wrapQuoteWords(&owned[9], owned[8], plan_native_int_18);
    CHECK_RC(Rc);
    ElmcValue *list_walk_map_caps_0[2] = { owned[6], owned[7] };
    ElmcValue *list_walk_map_head_0 = elmc_list_nil();
    if (owned[9] && owned[9]->tag == ELMC_TAG_INT_LIST) {
      ElmcIntListPayload *direct_ilp_0 = (ElmcIntListPayload *)owned[9]->payload;
      int direct_ilen_0 = direct_ilp_0 ? direct_ilp_0->length : 0;
      for (int direct_ii_0 = 0;
      Rc == RC_SUCCESS && direct_ii_0 < direct_ilen_0;
      direct_ii_0++) {
        ElmcValue *__map_head_box__ = NULL;
        Rc = elmc_new_int(&__map_head_box__, direct_ilp_0->values[direct_ii_0]);
        CHECK_RC(Rc);
        ElmcValue *list_walk_map_item_0 = NULL;
        ElmcValue *__idx_box__ = NULL;
        Rc = elmc_new_int(&__idx_box__, direct_ii_0);
        CHECK_RC(Rc);
        ElmcValue *loop_args[2] = { __idx_box__, __map_head_box__ };
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
        elmc_release(__map_head_box__);
        __map_head_box__ = NULL;
      }
    } else if (owned[9] && owned[9]->tag == ELMC_TAG_LAZY_MAP) {
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
    owned[13] = list_walk_map_head_0;
    owned[10] = owned[1];
    owned[1] = NULL;
    owned[11] = elmc_retain(model);
    Rc = elmc_record_update_index_cow_drop(out, owned[11], ELMC_FIELD_MAIN_MODEL_QUOTEFONT, owned[10]);
    CHECK_RC(Rc);
    if (*out == owned[11]) {
      *out = elmc_retain(*out);
    }
    owned[11] = NULL;
    owned[12] = owned[3];
    owned[3] = NULL;
    Rc = elmc_record_update_index_cow_drop(out, *out, ELMC_FIELD_MAIN_MODEL_QUOTEBOX, owned[12]);
    CHECK_RC(Rc);
    Rc = elmc_record_update_index_cow_drop(out, *out, ELMC_FIELD_MAIN_MODEL_QUOTELINES, owned[13]);
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
    ElmcValue *plan_list_items_11330[4] = { owned[0], owned[1], owned[2], owned[3] };
    Rc = elmc_list_from_values(&owned[4], plan_list_items_11330, 4);
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
    ElmcValue *plan_ephemeral_box_11394 = NULL;
    Rc = elmc_new_int(&plan_ephemeral_box_11394, maxChars);
    CHECK_RC(Rc);
    owned[1] = plan_ephemeral_box_11394;
    ElmcValue *plan_cap_4[1] = { owned[1] };
    Rc = elmc_closure_new_rc(&owned[0], elmc_fn_Main_wrapQuoteWords_closure_0, 2, 1, plan_cap_4);
    CHECK_RC(Rc);
    owned[2] = elmc_list_nil();
    Rc = elmc_string_words(&owned[3], quote);
    CHECK_RC(Rc);
    /* elm/core: List.foldl */
    Rc = elmc_list_foldl(&owned[4], owned[0], owned[2], owned[3]);
    CHECK_RC(Rc);
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
    ElmcValue *plan_list_items_11458[1] = { word };
    Rc = elmc_list_from_values(&owned[0], plan_list_items_11458, 1);
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
    static ElmcValue plan_str_immortal_11522 = { ELMC_RC_IMMORTAL, ELMC_TAG_STRING, (void *)" ", 1 };
    owned[5] = elmc_retain(&plan_str_immortal_11522);
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

static RC elmc_fn_Main_quoteFont(ElmcValue **out, ElmcValue *quote) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[2] = {0};
  CATCH_BEGIN
    bool plan_native_bool_3 = false;
    bool plan_native_bool_7 = false;
    /* plan block 0 */
    Rc = elmc_string_length_val(&owned[0], quote);
    CHECK_RC(Rc);
    plan_native_bool_3 = (elmc_as_int(owned[0]) < 36);
    plan_native_bool_7 = (plan_native_bool_3) ? true : (elmc_as_int(owned[0]) == 36);
    if (plan_native_bool_7) {
      Rc = elmc_new_int(&owned[1], 3);
      CHECK_RC(Rc);
    } else {
      Rc = elmc_new_int(&owned[1], 2);
      CHECK_RC(Rc);
    }
    *out = owned[1];
    owned[1] = NULL;
  CATCH_END
  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
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
    elmc_int_t rec_values_31_5[4] = { plan_native_int_27, plan_native_int_28, ((48 >= screenW - plan_native_int_16) ? 48 : screenW - plan_native_int_16), ((48 >= screenH - plan_native_int_23) ? 48 : screenH - plan_native_int_23) };
    Rc = elmc_record_new_values_ints(out, 4, rec_values_31_5);
    CHECK_RC(Rc);
  CATCH_END
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
    ElmcValue *plan_ephemeral_box_11586 = NULL;
    Rc = elmc_new_int(&plan_ephemeral_box_11586, elmc_int_idiv(screenW, 2));
    CHECK_RC(Rc);
    ElmcValue *plan_ephemeral_box_11650 = NULL;
    Rc = elmc_new_int(&plan_ephemeral_box_11650, elmc_int_idiv(screenH, 2));
    CHECK_RC(Rc);
    ElmcValue *rec_values_11_6[2] = { plan_ephemeral_box_11586, plan_ephemeral_box_11650 };
    Rc = elmc_record_new_values_take(&owned[0], 2, rec_values_11_6);
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
    ElmcValue *plan_ephemeral_box_11714 = NULL;
    Rc = elmc_new_int(&plan_ephemeral_box_11714, plan_native_int_23);
    CHECK_RC(Rc);
    owned[5] = plan_ephemeral_box_11714;
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
    ElmcValue *plan_ephemeral_box_11778 = NULL;
    Rc = elmc_new_int(&plan_ephemeral_box_11778, plan_native_int_23);
    CHECK_RC(Rc);
    owned[10] = plan_ephemeral_box_11778;
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
    elmc_int_t rec_values_69_7[4] = { elmc_int_idiv(screenW, 2) + elmc_int_idiv((plan_native_int_23 * 42), 100) - elmc_int_idiv(22, 2), elmc_int_idiv(screenH, 2) - elmc_int_idiv(16, 2), plan_native_int_68, plan_native_int_69 };
    Rc = elmc_record_new_values_ints(&owned[15], 4, rec_values_69_7);
    CHECK_RC(Rc);
    ElmcValue *plan_ephemeral_box_11842 = NULL;
    Rc = elmc_new_int(&plan_ephemeral_box_11842, plan_native_int_23);
    CHECK_RC(Rc);
    ElmcValue *plan_ephemeral_box_11906 = NULL;
    Rc = elmc_new_int(&plan_ephemeral_box_11906, plan_native_int_23 - 3);
    CHECK_RC(Rc);
    ElmcValue *plan_ephemeral_box_11970 = NULL;
    Rc = elmc_new_int(&plan_ephemeral_box_11970, ((16 >= plan_native_int_23 - 18) ? 16 : plan_native_int_23 - 18));
    CHECK_RC(Rc);
    ElmcValue *rec_values_78_8[7] = { owned[12], plan_ephemeral_box_11842, plan_ephemeral_box_11906, plan_ephemeral_box_11970, owned[13], owned[14], owned[15] };
    Rc = elmc_record_new_values_take(out, 7, rec_values_78_8);
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
    ElmcValue *rec_values_56_9[4] = { owned[4], owned[5], owned[6], owned[7] };
    Rc = elmc_record_new_values_take(out, 4, rec_values_56_9);
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
    static const elmc_int_t plan_list_int_values_12034[12] = { 0, 5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55 };
    Rc = elmc_list_from_int_array(out, plan_list_int_values_12034, 12);
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
    ElmcValue *plan_ephemeral_box_12098 = NULL;
    Rc = elmc_new_int(&plan_ephemeral_box_12098, plan_native_int_14);
    CHECK_RC(Rc);
    ElmcValue *rec_values_25_10[3] = { owned[0], owned[1], plan_ephemeral_box_12098 };
    Rc = elmc_record_new_values_take(out, 3, rec_values_25_10);
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
    elmc_int_t rec_values_20_11[2] = { plan_native_int_6 + elmc_int_idiv(plan_native_int_7, 1000), plan_native_int_12 + elmc_int_idiv(plan_native_int_13, 1000) };
    Rc = elmc_record_new_values_ints(out, 2, rec_values_20_11);
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
  ElmcValue *owned[11] = {0};
  CATCH_BEGIN
    /* plan block 0 */
    switch (elmc_union_tag_as_int(font)) {
      case ELMC_UNION_PEBBLE_UI_RESOURCES_DEFAULTFONT: goto elmc_plan_block_2;
      case ELMC_UNION_PEBBLE_UI_RESOURCES_QUOTE24: goto elmc_plan_block_4;
      case ELMC_UNION_PEBBLE_UI_RESOURCES_QUOTE28: goto elmc_plan_block_6;
      case ELMC_UNION_PEBBLE_UI_RESOURCES_QUOTE42: goto elmc_plan_block_8;
      default: goto elmc_plan_block_11;
    }
    elmc_plan_block_2:
    Rc = elmc_new_int(&owned[1], 1);
    CHECK_RC(Rc);
    const elmc_int_t plan_native_int_3 = 1;
    static ElmcValue plan_str_immortal_12162 = { ELMC_RC_IMMORTAL, ELMC_TAG_STRING, (void *)"DefaultFont", 11 };
    owned[2] = elmc_retain(&plan_str_immortal_12162);
    owned[4] = elmc_retain(owned[2]);
    owned[3] = elmc_retain(owned[1]);
    ElmcValue *plan_ephemeral_box_12226 = NULL;
    Rc = elmc_new_int(&plan_ephemeral_box_12226, 14);
    CHECK_RC(Rc);
    ElmcValue *rec_values_10_12[3] = { owned[3], owned[4], plan_ephemeral_box_12226 };
    Rc = elmc_record_new_values_take(&owned[0], 3, rec_values_10_12);
    CHECK_RC(Rc);
    owned[3] = NULL;
    owned[4] = NULL;
    owned[3] = NULL;
    owned[4] = NULL;
    goto elmc_plan_block_11;
    elmc_plan_block_4:
    Rc = elmc_new_int(&owned[5], 2);
    CHECK_RC(Rc);
    static ElmcValue plan_str_immortal_12290 = { ELMC_RC_IMMORTAL, ELMC_TAG_STRING, (void *)"Quote24", 7 };
    owned[6] = elmc_retain(&plan_str_immortal_12290);
    ElmcValue *plan_ephemeral_box_12354 = NULL;
    Rc = elmc_new_int(&plan_ephemeral_box_12354, 24);
    CHECK_RC(Rc);
    ElmcValue *rec_values_21_13[3] = { owned[5], owned[6], plan_ephemeral_box_12354 };
    Rc = elmc_record_new_values_take(&owned[0], 3, rec_values_21_13);
    CHECK_RC(Rc);
    owned[5] = NULL;
    owned[6] = NULL;
    owned[5] = NULL;
    owned[6] = NULL;
    goto elmc_plan_block_11;
    elmc_plan_block_6:
    Rc = elmc_new_int(&owned[7], 3);
    CHECK_RC(Rc);
    static ElmcValue plan_str_immortal_12418 = { ELMC_RC_IMMORTAL, ELMC_TAG_STRING, (void *)"Quote28", 7 };
    owned[8] = elmc_retain(&plan_str_immortal_12418);
    ElmcValue *plan_ephemeral_box_12482 = NULL;
    Rc = elmc_new_int(&plan_ephemeral_box_12482, 28);
    CHECK_RC(Rc);
    ElmcValue *rec_values_32_14[3] = { owned[7], owned[8], plan_ephemeral_box_12482 };
    Rc = elmc_record_new_values_take(&owned[0], 3, rec_values_32_14);
    CHECK_RC(Rc);
    owned[7] = NULL;
    owned[8] = NULL;
    owned[7] = NULL;
    owned[8] = NULL;
    goto elmc_plan_block_11;
    elmc_plan_block_8:
    Rc = elmc_new_int(&owned[9], 4);
    CHECK_RC(Rc);
    static ElmcValue plan_str_immortal_12546 = { ELMC_RC_IMMORTAL, ELMC_TAG_STRING, (void *)"Quote42", 7 };
    owned[10] = elmc_retain(&plan_str_immortal_12546);
    ElmcValue *plan_ephemeral_box_12610 = NULL;
    Rc = elmc_new_int(&plan_ephemeral_box_12610, 42);
    CHECK_RC(Rc);
    ElmcValue *rec_values_43_15[3] = { owned[9], owned[10], plan_ephemeral_box_12610 };
    Rc = elmc_record_new_values_take(&owned[0], 3, rec_values_43_15);
    CHECK_RC(Rc);
    owned[9] = NULL;
    owned[10] = NULL;
    owned[9] = NULL;
    owned[10] = NULL;
    elmc_plan_block_11:
    *out = owned[0];
    owned[0] = NULL;
  CATCH_END
  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}

static __attribute__((noinline, noclone)) RC elmc_fn_Pebble_WatchInfo_caseColor(ElmcValue **out, ElmcValue *color) {
  /* Ownership policy: borrow_arg, borrow_result, direct_call_abi */
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[1] = {0};
  CATCH_BEGIN
    /* plan block 0 */
    switch (elmc_union_tag_as_int(color)) {
      case ELMC_UNION_PEBBLE_WATCHINFO_UNKNOWNCOLOR: goto elmc_plan_block_2;
      case ELMC_UNION_PEBBLE_WATCHINFO_BLACK: goto elmc_plan_block_4;
      case ELMC_UNION_PEBBLE_WATCHINFO_WHITE: goto elmc_plan_block_6;
      case ELMC_UNION_PEBBLE_WATCHINFO_RED: goto elmc_plan_block_8;
      case ELMC_UNION_PEBBLE_WATCHINFO_ORANGE: goto elmc_plan_block_10;
      case ELMC_UNION_PEBBLE_WATCHINFO_GRAY: goto elmc_plan_block_12;
      case ELMC_UNION_PEBBLE_WATCHINFO_STAINLESSSTEEL: goto elmc_plan_block_14;
      case ELMC_UNION_PEBBLE_WATCHINFO_MATTEBLACK: goto elmc_plan_block_16;
      case ELMC_UNION_PEBBLE_WATCHINFO_BLUE: goto elmc_plan_block_18;
      case ELMC_UNION_PEBBLE_WATCHINFO_GREEN: goto elmc_plan_block_20;
      case ELMC_UNION_PEBBLE_WATCHINFO_PINK: goto elmc_plan_block_22;
      case ELMC_UNION_PEBBLE_WATCHINFO_TIMEWHITE: goto elmc_plan_block_24;
      case ELMC_UNION_PEBBLE_WATCHINFO_TIMEBLACK: goto elmc_plan_block_26;
      case ELMC_UNION_PEBBLE_WATCHINFO_TIMERED: goto elmc_plan_block_28;
      case ELMC_UNION_PEBBLE_WATCHINFO_TIMESTEELSILVER: goto elmc_plan_block_30;
      case ELMC_UNION_PEBBLE_WATCHINFO_TIMESTEELBLACK: goto elmc_plan_block_32;
      case ELMC_UNION_PEBBLE_WATCHINFO_TIMESTEELGOLD: goto elmc_plan_block_34;
      case ELMC_UNION_PEBBLE_WATCHINFO_TIMEROUNDSILVER14: goto elmc_plan_block_36;
      case ELMC_UNION_PEBBLE_WATCHINFO_TIMEROUNDBLACK14: goto elmc_plan_block_38;
      case ELMC_UNION_PEBBLE_WATCHINFO_TIMEROUNDSILVER20: goto elmc_plan_block_40;
      case ELMC_UNION_PEBBLE_WATCHINFO_TIMEROUNDBLACK20: goto elmc_plan_block_42;
      case ELMC_UNION_PEBBLE_WATCHINFO_TIMEROUNDROSEGOLD14: goto elmc_plan_block_44;
      case ELMC_UNION_PEBBLE_WATCHINFO_PEBBLE2HRBLACK: goto elmc_plan_block_46;
      case ELMC_UNION_PEBBLE_WATCHINFO_PEBBLE2HRLIME: goto elmc_plan_block_48;
      case ELMC_UNION_PEBBLE_WATCHINFO_PEBBLE2HRFLAME: goto elmc_plan_block_50;
      case ELMC_UNION_PEBBLE_WATCHINFO_PEBBLE2HRWHITE: goto elmc_plan_block_52;
      case ELMC_UNION_PEBBLE_WATCHINFO_PEBBLE2HRAQUA: goto elmc_plan_block_54;
      case ELMC_UNION_PEBBLE_WATCHINFO_PEBBLE2SEBLACK: goto elmc_plan_block_56;
      case ELMC_UNION_PEBBLE_WATCHINFO_PEBBLE2SEWHITE: goto elmc_plan_block_58;
      case ELMC_UNION_PEBBLE_WATCHINFO_PEBBLETIME2BLACK: goto elmc_plan_block_60;
      case ELMC_UNION_PEBBLE_WATCHINFO_PEBBLETIME2SILVER: goto elmc_plan_block_62;
      case ELMC_UNION_PEBBLE_WATCHINFO_PEBBLETIME2GOLD: goto elmc_plan_block_64;
      case ELMC_UNION_PEBBLE_WATCHINFO_COREDEVICESP2DBLACK: goto elmc_plan_block_66;
      case ELMC_UNION_PEBBLE_WATCHINFO_COREDEVICESP2DWHITE: goto elmc_plan_block_68;
      case ELMC_UNION_PEBBLE_WATCHINFO_COREDEVICESPT2BLACKGREY: goto elmc_plan_block_70;
      case ELMC_UNION_PEBBLE_WATCHINFO_COREDEVICESPT2BLACKRED: goto elmc_plan_block_72;
      case ELMC_UNION_PEBBLE_WATCHINFO_COREDEVICESPT2SILVERBLUE: goto elmc_plan_block_74;
      case ELMC_UNION_PEBBLE_WATCHINFO_COREDEVICESPT2SILVERGREY: goto elmc_plan_block_76;
      case ELMC_UNION_PEBBLE_WATCHINFO_COREDEVICESPR2BLACK20: goto elmc_plan_block_78;
      case ELMC_UNION_PEBBLE_WATCHINFO_COREDEVICESPR2SILVER20: goto elmc_plan_block_80;
      case ELMC_UNION_PEBBLE_WATCHINFO_COREDEVICESPR2GOLD14: goto elmc_plan_block_82;
      case ELMC_UNION_PEBBLE_WATCHINFO_COREDEVICESPR2SILVER14: goto elmc_plan_block_84;
      default: goto elmc_plan_block_87;
    }
    elmc_plan_block_2:
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_BLACK);
    CHECK_RC(Rc);
    goto elmc_plan_block_87;
    elmc_plan_block_4:
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_BLACK);
    CHECK_RC(Rc);
    goto elmc_plan_block_87;
    elmc_plan_block_6:
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_WHITE);
    CHECK_RC(Rc);
    goto elmc_plan_block_87;
    elmc_plan_block_8:
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_RED);
    CHECK_RC(Rc);
    goto elmc_plan_block_87;
    elmc_plan_block_10:
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_ORANGE);
    CHECK_RC(Rc);
    goto elmc_plan_block_87;
    elmc_plan_block_12:
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_LIGHT_GRAY);
    CHECK_RC(Rc);
    goto elmc_plan_block_87;
    elmc_plan_block_14:
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_LIGHT_GRAY);
    CHECK_RC(Rc);
    goto elmc_plan_block_87;
    elmc_plan_block_16:
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_BLACK);
    CHECK_RC(Rc);
    goto elmc_plan_block_87;
    elmc_plan_block_18:
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_BLUE);
    CHECK_RC(Rc);
    goto elmc_plan_block_87;
    elmc_plan_block_20:
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_GREEN);
    CHECK_RC(Rc);
    goto elmc_plan_block_87;
    elmc_plan_block_22:
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_BRILLIANT_ROSE);
    CHECK_RC(Rc);
    goto elmc_plan_block_87;
    elmc_plan_block_24:
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_WHITE);
    CHECK_RC(Rc);
    goto elmc_plan_block_87;
    elmc_plan_block_26:
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_BLACK);
    CHECK_RC(Rc);
    goto elmc_plan_block_87;
    elmc_plan_block_28:
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_RED);
    CHECK_RC(Rc);
    goto elmc_plan_block_87;
    elmc_plan_block_30:
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_LIGHT_GRAY);
    CHECK_RC(Rc);
    goto elmc_plan_block_87;
    elmc_plan_block_32:
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_BLACK);
    CHECK_RC(Rc);
    goto elmc_plan_block_87;
    elmc_plan_block_34:
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_BRASS);
    CHECK_RC(Rc);
    goto elmc_plan_block_87;
    elmc_plan_block_36:
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_LIGHT_GRAY);
    CHECK_RC(Rc);
    goto elmc_plan_block_87;
    elmc_plan_block_38:
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_BLACK);
    CHECK_RC(Rc);
    goto elmc_plan_block_87;
    elmc_plan_block_40:
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_LIGHT_GRAY);
    CHECK_RC(Rc);
    goto elmc_plan_block_87;
    elmc_plan_block_42:
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_BLACK);
    CHECK_RC(Rc);
    goto elmc_plan_block_87;
    elmc_plan_block_44:
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_RAJAH);
    CHECK_RC(Rc);
    goto elmc_plan_block_87;
    elmc_plan_block_46:
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_BLACK);
    CHECK_RC(Rc);
    goto elmc_plan_block_87;
    elmc_plan_block_48:
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_SPRING_BUD);
    CHECK_RC(Rc);
    goto elmc_plan_block_87;
    elmc_plan_block_50:
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_SUNSET_ORANGE);
    CHECK_RC(Rc);
    goto elmc_plan_block_87;
    elmc_plan_block_52:
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_WHITE);
    CHECK_RC(Rc);
    goto elmc_plan_block_87;
    elmc_plan_block_54:
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_TIFFANY_BLUE);
    CHECK_RC(Rc);
    goto elmc_plan_block_87;
    elmc_plan_block_56:
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_BLACK);
    CHECK_RC(Rc);
    goto elmc_plan_block_87;
    elmc_plan_block_58:
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_WHITE);
    CHECK_RC(Rc);
    goto elmc_plan_block_87;
    elmc_plan_block_60:
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_BLACK);
    CHECK_RC(Rc);
    goto elmc_plan_block_87;
    elmc_plan_block_62:
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_LIGHT_GRAY);
    CHECK_RC(Rc);
    goto elmc_plan_block_87;
    elmc_plan_block_64:
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_BRASS);
    CHECK_RC(Rc);
    goto elmc_plan_block_87;
    elmc_plan_block_66:
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_BLACK);
    CHECK_RC(Rc);
    goto elmc_plan_block_87;
    elmc_plan_block_68:
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_WHITE);
    CHECK_RC(Rc);
    goto elmc_plan_block_87;
    elmc_plan_block_70:
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_BLACK);
    CHECK_RC(Rc);
    goto elmc_plan_block_87;
    elmc_plan_block_72:
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_DARK_CANDY_APPLE_RED);
    CHECK_RC(Rc);
    goto elmc_plan_block_87;
    elmc_plan_block_74:
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_CADET_BLUE);
    CHECK_RC(Rc);
    goto elmc_plan_block_87;
    elmc_plan_block_76:
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_LIGHT_GRAY);
    CHECK_RC(Rc);
    goto elmc_plan_block_87;
    elmc_plan_block_78:
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_BLACK);
    CHECK_RC(Rc);
    goto elmc_plan_block_87;
    elmc_plan_block_80:
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_LIGHT_GRAY);
    CHECK_RC(Rc);
    goto elmc_plan_block_87;
    elmc_plan_block_82:
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_BRASS);
    CHECK_RC(Rc);
    goto elmc_plan_block_87;
    elmc_plan_block_84:
    Rc = elmc_new_int(&owned[0], ELMC_COLOR_LIGHT_GRAY);
    CHECK_RC(Rc);
    elmc_plan_block_87:
    *out = owned[0];
    owned[0] = NULL;
  CATCH_END
  elmc_release_array_lifo(owned, DIM(owned));
  return Rc;
}

static RC elmc_fn_Main_view_commands_append(ElmcValue ** const args, const int argc, ElmcSceneWriter * const writer);
static RC elmc_fn_Main_watchOps_commands_append(ElmcValue ** const args, const int argc, ElmcSceneWriter * const writer);
static RC elmc_fn_Main_watchOps_commands_append_native(ElmcValue * const layout, ElmcValue * const maybeHands, const char * const dateLabel, const elmc_int_t caseColor, ElmcSceneWriter * const writer);
static RC elmc_fn_Main_quoteOps_commands_append(ElmcValue ** const args, const int argc, ElmcSceneWriter * const writer);
static RC elmc_fn_Main_quoteLineOp_commands_append(ElmcValue ** const args, const int argc, ElmcSceneWriter * const writer);
static RC elmc_fn_Main_hourTickOp_commands_append(ElmcValue ** const args, const int argc, ElmcSceneWriter * const writer);
static RC elmc_fn_Main_minuteTickOp_commands_append(ElmcValue ** const args, const int argc, ElmcSceneWriter * const writer);
static RC elmc_fn_Main_strokeLine_commands_append(ElmcValue ** const args, const int argc, ElmcSceneWriter * const writer);
static RC elmc_fn_Main_strokeLine_commands_append_native(ElmcValue * const from, ElmcValue * const to, const elmc_int_t width, const elmc_int_t color, ElmcSceneWriter * const writer);

static RC elmc_fn_Main_view_commands_append(ElmcValue ** const args, const int argc, ElmcSceneWriter * const writer) {
  ElmcValue *model = (argc > 0) ? args[0] : NULL;

  if (!writer)
    return RC_ERR_INVALID_ARG;
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[4] = {0};

  static ElmcPebbleDrawCmd scene_cmd;

  CATCH_BEGIN

    owned[0] = elmc_record_get_index(model, ELMC_FIELD_MAIN_MODEL_PHASE);

    if (elmc_union_tag_matches(owned[0], ELMC_UNION_SHOWWATCH)) {

      owned[1] = elmc_record_get_index(model, ELMC_FIELD_MAIN_MODEL_LAYOUT);

      owned[2] = elmc_record_get_index(model, ELMC_FIELD_MAIN_MODEL_HANDS);

      owned[3] = elmc_record_get_index(model, ELMC_FIELD_MAIN_MODEL_DATELABEL);

      ElmcValue *native_string_5_src = owned[3];
      const char *native_string_5 =
      (native_string_5_src && native_string_5_src->tag == ELMC_TAG_STRING && native_string_5_src->payload)
      ? (const char *)native_string_5_src->payload
      : "";

      Rc = elmc_fn_Main_watchOps_commands_append_native(owned[1], owned[2], native_string_5, ELMC_RECORD_GET_INDEX_INT(model, ELMC_FIELD_MAIN_MODEL_CASECOLOR), writer);
      CHECK_RC(Rc);

    }
    else if (elmc_union_tag_matches(owned[0], ELMC_UNION_SHOWQUOTE)) {

      ElmcValue *direct_call_args_7[1] = { model };
      Rc = elmc_fn_Main_quoteOps_commands_append(direct_call_args_7, 1, writer);
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
  ElmcValue *layout = (argc > 0) ? args[0] : NULL;
  ElmcValue *maybeHands = (argc > 1) ? args[1] : NULL;
  const char *dateLabel =
  (argc > 2 && args[2] && args[2]->tag == ELMC_TAG_STRING && args[2]->payload)
  ? (const char *)args[2]->payload
  : "";

  elmc_int_t caseColor = (argc > 3 && args[3]) ? elmc_as_int(args[3]) : 0;

  return elmc_fn_Main_watchOps_commands_append_native(layout, maybeHands, dateLabel, caseColor, writer);
}

static RC elmc_fn_Main_watchOps_commands_append_native(ElmcValue * const layout, ElmcValue * const maybeHands, const char * const dateLabel, const elmc_int_t caseColor, ElmcSceneWriter * const writer) {

  if (!writer)
    return RC_ERR_INVALID_ARG;
  RC Rc = RC_SUCCESS;
  ElmcValue *owned[10] = {0};

  static ElmcPebbleDrawCmd scene_cmd;

  CATCH_BEGIN

    elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_CLEAR);
    scene_cmd.p0 = caseColor;
    Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
    CHECK_RC(Rc);

    elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_FILL_CIRCLE);
    scene_cmd.p0 = ELMC_RECORD_GET_INDEX_INT(ELMC_RECORD_GET_INDEX(layout, ELMC_FIELD_MAIN_LAYOUT_CENTER), ELMC_FIELD_MAIN_POINT_X);
    scene_cmd.p1 = ELMC_RECORD_GET_INDEX_INT(ELMC_RECORD_GET_INDEX(layout, ELMC_FIELD_MAIN_LAYOUT_CENTER), ELMC_FIELD_MAIN_POINT_Y);
    scene_cmd.p2 = ELMC_RECORD_GET_INDEX_INT(layout, ELMC_FIELD_MAIN_LAYOUT_RADIUS);
    scene_cmd.p3 = ELMC_COLOR_PASTEL_YELLOW;
    Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
    CHECK_RC(Rc);

    elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_CIRCLE);
    scene_cmd.p0 = ELMC_RECORD_GET_INDEX_INT(ELMC_RECORD_GET_INDEX(layout, ELMC_FIELD_MAIN_LAYOUT_CENTER), ELMC_FIELD_MAIN_POINT_X);
    scene_cmd.p1 = ELMC_RECORD_GET_INDEX_INT(ELMC_RECORD_GET_INDEX(layout, ELMC_FIELD_MAIN_LAYOUT_CENTER), ELMC_FIELD_MAIN_POINT_Y);
    scene_cmd.p2 = ELMC_RECORD_GET_INDEX_INT(layout, ELMC_FIELD_MAIN_LAYOUT_RADIUS);
    scene_cmd.p3 = ELMC_COLOR_BLACK;
    Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
    CHECK_RC(Rc);

    elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_CIRCLE);
    scene_cmd.p0 = ELMC_RECORD_GET_INDEX_INT(ELMC_RECORD_GET_INDEX(layout, ELMC_FIELD_MAIN_LAYOUT_CENTER), ELMC_FIELD_MAIN_POINT_X);
    scene_cmd.p1 = ELMC_RECORD_GET_INDEX_INT(ELMC_RECORD_GET_INDEX(layout, ELMC_FIELD_MAIN_LAYOUT_CENTER), ELMC_FIELD_MAIN_POINT_Y);
    scene_cmd.p2 = ELMC_RECORD_GET_INDEX_INT(layout, ELMC_FIELD_MAIN_LAYOUT_BEZELINNER);
    scene_cmd.p3 = ELMC_COLOR_BLACK;
    Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
    CHECK_RC(Rc);

    elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_CIRCLE);
    scene_cmd.p0 = ELMC_RECORD_GET_INDEX_INT(ELMC_RECORD_GET_INDEX(layout, ELMC_FIELD_MAIN_LAYOUT_CENTER), ELMC_FIELD_MAIN_POINT_X);
    scene_cmd.p1 = ELMC_RECORD_GET_INDEX_INT(ELMC_RECORD_GET_INDEX(layout, ELMC_FIELD_MAIN_LAYOUT_CENTER), ELMC_FIELD_MAIN_POINT_Y);
    scene_cmd.p2 = ELMC_RECORD_GET_INDEX_INT(layout, ELMC_FIELD_MAIN_LAYOUT_RAILRADIUS);
    scene_cmd.p3 = ELMC_COLOR_BLACK;
    Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
    CHECK_RC(Rc);

    owned[0] = elmc_record_get_index(layout, ELMC_FIELD_MAIN_LAYOUT_HOURTICKS);

    if (owned[0] && owned[0]->tag == ELMC_TAG_RECORD_SEQ) {
      int direct_rlen_6 = elmc_record_seq_length(owned[0]);
      for (int direct_ii_6 = 0;
      Rc == RC_SUCCESS && direct_ii_6 < direct_rlen_6; direct_ii_6++) {;
        ElmcValue *direct_item_value_6 = elmc_record_seq_get(owned[0], direct_ii_6);
        ElmcValue *direct_call_args_6[1] = {0};

        direct_call_args_6[0] = direct_item_value_6;
        Rc = elmc_fn_Main_hourTickOp_commands_append(direct_call_args_6, 1, writer);
        elmc_release(direct_item_value_6);
        CHECK_RC(Rc);
      }
    } else
    if (owned[0] && owned[0]->tag == ELMC_TAG_LAZY_MAP) {
      int direct_llen_6 = elmc_lazy_map_length(owned[0]);
      for (int direct_ii_6 = 0;
      Rc == RC_SUCCESS && direct_ii_6 < direct_llen_6; direct_ii_6++) {;
        ElmcValue *direct_item_value_6 = NULL;
        Rc = elmc_lazy_map_nth(&direct_item_value_6, owned[0], direct_ii_6);
        CHECK_RC(Rc);
        ElmcValue *direct_call_args_6[1] = {0};

        direct_call_args_6[0] = direct_item_value_6;
        Rc = elmc_fn_Main_hourTickOp_commands_append(direct_call_args_6, 1, writer);
        elmc_release(direct_item_value_6);
        CHECK_RC(Rc);
      }
    } else if (owned[0] && owned[0]->tag == ELMC_TAG_INT_LIST) {
      ElmcIntListPayload *direct_ilp_6 = (ElmcIntListPayload *)owned[0]->payload;
      int direct_ilen_6 = direct_ilp_6 ? direct_ilp_6->length : 0;
      for (int direct_ii_6 = 0;
      Rc == RC_SUCCESS && direct_ii_6 < direct_ilen_6; direct_ii_6++) {;
        ElmcValue *direct_item_value_6 = NULL;
        Rc = elmc_new_int(&direct_item_value_6, direct_ilp_6->values[direct_ii_6]);
        CHECK_RC(Rc);
        ElmcValue *direct_call_args_6[1] = {0};

        direct_call_args_6[0] = direct_item_value_6;
        Rc = elmc_fn_Main_hourTickOp_commands_append(direct_call_args_6, 1, writer);
        elmc_release(direct_item_value_6);
        CHECK_RC(Rc);
      }
    } else {
      ElmcValue *direct_cursor_6 = owned[0];
      while (Rc == RC_SUCCESS && direct_cursor_6 && direct_cursor_6->tag == ELMC_TAG_LIST && direct_cursor_6->payload != NULL) {
        ElmcCons *direct_node_6 = (ElmcCons *)direct_cursor_6->payload;
        ElmcValue *direct_call_args_6[1] = {0};

        direct_call_args_6[0] = direct_node_6->head;
        Rc = elmc_fn_Main_hourTickOp_commands_append(direct_call_args_6, 1, writer);
        CHECK_RC(Rc);
        direct_cursor_6 = direct_node_6->tail;
      }
    }

    owned[1] = elmc_record_get_index(layout, ELMC_FIELD_MAIN_LAYOUT_MINUTETICKS);

    if (owned[1] && owned[1]->tag == ELMC_TAG_RECORD_SEQ) {
      int direct_rlen_6 = elmc_record_seq_length(owned[1]);
      for (int direct_ii_6 = 0;
      Rc == RC_SUCCESS && direct_ii_6 < direct_rlen_6; direct_ii_6++) {;
        ElmcValue *direct_item_value_6 = elmc_record_seq_get(owned[1], direct_ii_6);
        ElmcValue *direct_call_args_6[1] = {0};

        direct_call_args_6[0] = direct_item_value_6;
        Rc = elmc_fn_Main_minuteTickOp_commands_append(direct_call_args_6, 1, writer);
        elmc_release(direct_item_value_6);
        CHECK_RC(Rc);
      }
    } else
    if (owned[1] && owned[1]->tag == ELMC_TAG_LAZY_MAP) {
      int direct_llen_6 = elmc_lazy_map_length(owned[1]);
      for (int direct_ii_6 = 0;
      Rc == RC_SUCCESS && direct_ii_6 < direct_llen_6; direct_ii_6++) {;
        ElmcValue *direct_item_value_6 = NULL;
        Rc = elmc_lazy_map_nth(&direct_item_value_6, owned[1], direct_ii_6);
        CHECK_RC(Rc);
        ElmcValue *direct_call_args_6[1] = {0};

        direct_call_args_6[0] = direct_item_value_6;
        Rc = elmc_fn_Main_minuteTickOp_commands_append(direct_call_args_6, 1, writer);
        elmc_release(direct_item_value_6);
        CHECK_RC(Rc);
      }
    } else if (owned[1] && owned[1]->tag == ELMC_TAG_INT_LIST) {
      ElmcIntListPayload *direct_ilp_6 = (ElmcIntListPayload *)owned[1]->payload;
      int direct_ilen_6 = direct_ilp_6 ? direct_ilp_6->length : 0;
      for (int direct_ii_6 = 0;
      Rc == RC_SUCCESS && direct_ii_6 < direct_ilen_6; direct_ii_6++) {;
        ElmcValue *direct_item_value_6 = NULL;
        Rc = elmc_new_int(&direct_item_value_6, direct_ilp_6->values[direct_ii_6]);
        CHECK_RC(Rc);
        ElmcValue *direct_call_args_6[1] = {0};

        direct_call_args_6[0] = direct_item_value_6;
        Rc = elmc_fn_Main_minuteTickOp_commands_append(direct_call_args_6, 1, writer);
        elmc_release(direct_item_value_6);
        CHECK_RC(Rc);
      }
    } else {
      ElmcValue *direct_cursor_6 = owned[1];
      while (Rc == RC_SUCCESS && direct_cursor_6 && direct_cursor_6->tag == ELMC_TAG_LIST && direct_cursor_6->payload != NULL) {
        ElmcCons *direct_node_6 = (ElmcCons *)direct_cursor_6->payload;
        ElmcValue *direct_call_args_6[1] = {0};

        direct_call_args_6[0] = direct_node_6->head;
        Rc = elmc_fn_Main_minuteTickOp_commands_append(direct_call_args_6, 1, writer);
        CHECK_RC(Rc);
        direct_cursor_6 = direct_node_6->tail;
      }
    }

    owned[2] = elmc_record_get_index(layout, ELMC_FIELD_MAIN_LAYOUT_DATEBOX);

    const elmc_int_t direct_hoisted_int_12 = (ELMC_TEXT_ALIGN_CENTER + (ELMC_TEXT_OVERFLOW_WORD_WRAP * (1 << ELMC_TEXT_OVERFLOW_SHIFT)));
    Rc = elmc_new_string(&owned[4], dateLabel);
    CHECK_RC(Rc);

    Rc = elmc_new_string(&owned[6], "");
    CHECK_RC(Rc);

    const bool native_cmp_8 = elmc_string_equals(owned[4], owned[6]);

    if (!(native_cmp_8)) {

      elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_RECT);
      scene_cmd.p0 = ELMC_RECORD_GET_INDEX_INT(owned[2], ELMC_FIELD_MAIN_RECT_X);
      scene_cmd.p1 = ELMC_RECORD_GET_INDEX_INT(owned[2], ELMC_FIELD_MAIN_RECT_Y);
      scene_cmd.p2 = ELMC_RECORD_GET_INDEX_INT(owned[2], ELMC_FIELD_MAIN_RECT_W);
      scene_cmd.p3 = ELMC_RECORD_GET_INDEX_INT(owned[2], ELMC_FIELD_MAIN_RECT_H);
      scene_cmd.p4 = ELMC_COLOR_BLACK;
      Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
      CHECK_RC(Rc);

      elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_PUSH_CONTEXT);

      Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
      CHECK_RC(Rc);

      elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_TEXT_COLOR);
      scene_cmd.p0 = ELMC_COLOR_BLACK;
      Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
      CHECK_RC(Rc);

      const elmc_int_t direct_hoisted_int_12 = (ELMC_TEXT_ALIGN_CENTER + (ELMC_TEXT_OVERFLOW_WORD_WRAP * (1 << ELMC_TEXT_OVERFLOW_SHIFT)));

      elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_TEXT);
      scene_cmd.p0 = 1;
      scene_cmd.p1 = ELMC_RECORD_GET_INDEX_INT(owned[2], ELMC_FIELD_MAIN_RECT_X);
      scene_cmd.p2 = ELMC_RECORD_GET_INDEX_INT(owned[2], ELMC_FIELD_MAIN_RECT_Y);
      scene_cmd.p3 = ELMC_RECORD_GET_INDEX_INT(owned[2], ELMC_FIELD_MAIN_RECT_W);
      scene_cmd.p4 = ELMC_RECORD_GET_INDEX_INT(owned[2], ELMC_FIELD_MAIN_RECT_H);
      scene_cmd.p5 = direct_hoisted_int_12;
      {
        const char *direct_text = dateLabel;
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

    owned[7] = elmc_record_get_index(layout, ELMC_FIELD_MAIN_LAYOUT_CENTER);

    if (elmc_maybe_is_just(maybeHands)) {

      owned[8] = elmc_record_get_index(elmc_maybe_or_tuple_just_payload_borrow(maybeHands), ELMC_FIELD_MAIN_HANDS_HOURTO);

      Rc = elmc_fn_Main_strokeLine_commands_append_native(owned[7], owned[8], 4, ELMC_COLOR_BLACK, writer);
      CHECK_RC(Rc);

      owned[9] = elmc_record_get_index(elmc_maybe_or_tuple_just_payload_borrow(maybeHands), ELMC_FIELD_MAIN_HANDS_MINUTETO);

      Rc = elmc_fn_Main_strokeLine_commands_append_native(owned[7], owned[9], 2, ELMC_COLOR_BLACK, writer);
      CHECK_RC(Rc);

      elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_PUSH_CONTEXT);

      Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
      CHECK_RC(Rc);

      elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_STROKE_COLOR);
      scene_cmd.p0 = ELMC_COLOR_FOLLY;
      Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
      CHECK_RC(Rc);

      elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_STROKE_WIDTH);
      scene_cmd.p0 = 1;
      Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
      CHECK_RC(Rc);

      elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_LINE);
      scene_cmd.p0 = ELMC_RECORD_GET_INDEX_INT(owned[7], ELMC_FIELD_MAIN_POINT_X);
      scene_cmd.p1 = ELMC_RECORD_GET_INDEX_INT(owned[7], ELMC_FIELD_MAIN_POINT_Y);
      scene_cmd.p2 = ELMC_RECORD_GET_INDEX_INT(ELMC_RECORD_GET_INDEX(elmc_maybe_or_tuple_just_payload_borrow(maybeHands), ELMC_FIELD_MAIN_HANDS_SECONDTO), ELMC_FIELD_MAIN_POINT_X);
      scene_cmd.p3 = ELMC_RECORD_GET_INDEX_INT(ELMC_RECORD_GET_INDEX(elmc_maybe_or_tuple_just_payload_borrow(maybeHands), ELMC_FIELD_MAIN_HANDS_SECONDTO), ELMC_FIELD_MAIN_POINT_Y);
      scene_cmd.p4 = ELMC_COLOR_FOLLY;
      Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
      CHECK_RC(Rc);

      elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_LINE);
      scene_cmd.p0 = ELMC_RECORD_GET_INDEX_INT(owned[7], ELMC_FIELD_MAIN_POINT_X);
      scene_cmd.p1 = ELMC_RECORD_GET_INDEX_INT(owned[7], ELMC_FIELD_MAIN_POINT_Y);
      scene_cmd.p2 = ELMC_RECORD_GET_INDEX_INT(ELMC_RECORD_GET_INDEX(elmc_maybe_or_tuple_just_payload_borrow(maybeHands), ELMC_FIELD_MAIN_HANDS_SECONDTAIL), ELMC_FIELD_MAIN_POINT_X);
      scene_cmd.p3 = ELMC_RECORD_GET_INDEX_INT(ELMC_RECORD_GET_INDEX(elmc_maybe_or_tuple_just_payload_borrow(maybeHands), ELMC_FIELD_MAIN_HANDS_SECONDTAIL), ELMC_FIELD_MAIN_POINT_Y);
      scene_cmd.p4 = ELMC_COLOR_FOLLY;
      Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
      CHECK_RC(Rc);

      elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_POP_CONTEXT);

      Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
      CHECK_RC(Rc);

    }

    elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_FILL_CIRCLE);
    scene_cmd.p0 = ELMC_RECORD_GET_INDEX_INT(ELMC_RECORD_GET_INDEX(layout, ELMC_FIELD_MAIN_LAYOUT_CENTER), ELMC_FIELD_MAIN_POINT_X);
    scene_cmd.p1 = ELMC_RECORD_GET_INDEX_INT(ELMC_RECORD_GET_INDEX(layout, ELMC_FIELD_MAIN_LAYOUT_CENTER), ELMC_FIELD_MAIN_POINT_Y);
    scene_cmd.p2 = 5;
    scene_cmd.p3 = ELMC_COLOR_BLACK;
    Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
    CHECK_RC(Rc);

    elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_FILL_CIRCLE);
    scene_cmd.p0 = ELMC_RECORD_GET_INDEX_INT(ELMC_RECORD_GET_INDEX(layout, ELMC_FIELD_MAIN_LAYOUT_CENTER), ELMC_FIELD_MAIN_POINT_X);
    scene_cmd.p1 = ELMC_RECORD_GET_INDEX_INT(ELMC_RECORD_GET_INDEX(layout, ELMC_FIELD_MAIN_LAYOUT_CENTER), ELMC_FIELD_MAIN_POINT_Y);
    scene_cmd.p2 = 2;
    scene_cmd.p3 = ELMC_COLOR_PASTEL_YELLOW;
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
  ElmcValue *owned[3] = {0};

  static ElmcPebbleDrawCmd scene_cmd;

  CATCH_BEGIN

    elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_CLEAR);
    scene_cmd.p0 = ELMC_COLOR_PASTEL_YELLOW;
    Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
    CHECK_RC(Rc);

    elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_PUSH_CONTEXT);

    Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
    CHECK_RC(Rc);

    elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_TEXT_COLOR);
    scene_cmd.p0 = ELMC_COLOR_BLACK;
    Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
    CHECK_RC(Rc);

    owned[2] = elmc_record_get_index(model, ELMC_FIELD_MAIN_MODEL_QUOTELINES);

    owned[0] = elmc_record_get_index(model, ELMC_FIELD_MAIN_MODEL_QUOTEFONT);

    owned[1] = elmc_record_get_index(model, ELMC_FIELD_MAIN_MODEL_QUOTEBOX);

    if (owned[2] && owned[2]->tag == ELMC_TAG_RECORD_SEQ) {
      int direct_rlen_4 = elmc_record_seq_length(owned[2]);
      for (int direct_ii_4 = 0;
      Rc == RC_SUCCESS && direct_ii_4 < direct_rlen_4; direct_ii_4++) {;
        ElmcValue *direct_item_value_4 = elmc_record_seq_get(owned[2], direct_ii_4);
        ElmcValue *direct_call_args_4[3] = {0};
        direct_call_args_4[0] = owned[0];
        direct_call_args_4[1] = owned[1];
        direct_call_args_4[2] = direct_item_value_4;
        Rc = elmc_fn_Main_quoteLineOp_commands_append(direct_call_args_4, 3, writer);
        elmc_release(direct_item_value_4);
        CHECK_RC(Rc);
      }
    } else
    if (owned[2] && owned[2]->tag == ELMC_TAG_LAZY_MAP) {
      int direct_llen_4 = elmc_lazy_map_length(owned[2]);
      for (int direct_ii_4 = 0;
      Rc == RC_SUCCESS && direct_ii_4 < direct_llen_4; direct_ii_4++) {;
        ElmcValue *direct_item_value_4 = NULL;
        Rc = elmc_lazy_map_nth(&direct_item_value_4, owned[2], direct_ii_4);
        CHECK_RC(Rc);
        ElmcValue *direct_call_args_4[3] = {0};
        direct_call_args_4[0] = owned[0];
        direct_call_args_4[1] = owned[1];
        direct_call_args_4[2] = direct_item_value_4;
        Rc = elmc_fn_Main_quoteLineOp_commands_append(direct_call_args_4, 3, writer);
        elmc_release(direct_item_value_4);
        CHECK_RC(Rc);
      }
    } else if (owned[2] && owned[2]->tag == ELMC_TAG_INT_LIST) {
      ElmcIntListPayload *direct_ilp_4 = (ElmcIntListPayload *)owned[2]->payload;
      int direct_ilen_4 = direct_ilp_4 ? direct_ilp_4->length : 0;
      for (int direct_ii_4 = 0;
      Rc == RC_SUCCESS && direct_ii_4 < direct_ilen_4; direct_ii_4++) {;
        ElmcValue *direct_item_value_4 = NULL;
        Rc = elmc_new_int(&direct_item_value_4, direct_ilp_4->values[direct_ii_4]);
        CHECK_RC(Rc);
        ElmcValue *direct_call_args_4[3] = {0};
        direct_call_args_4[0] = owned[0];
        direct_call_args_4[1] = owned[1];
        direct_call_args_4[2] = direct_item_value_4;
        Rc = elmc_fn_Main_quoteLineOp_commands_append(direct_call_args_4, 3, writer);
        elmc_release(direct_item_value_4);
        CHECK_RC(Rc);
      }
    } else {
      ElmcValue *direct_cursor_4 = owned[2];
      while (Rc == RC_SUCCESS && direct_cursor_4 && direct_cursor_4->tag == ELMC_TAG_LIST && direct_cursor_4->payload != NULL) {
        ElmcCons *direct_node_4 = (ElmcCons *)direct_cursor_4->payload;
        ElmcValue *direct_call_args_4[3] = {0};
        direct_call_args_4[0] = owned[0];
        direct_call_args_4[1] = owned[1];
        direct_call_args_4[2] = direct_node_4->head;
        Rc = elmc_fn_Main_quoteLineOp_commands_append(direct_call_args_4, 3, writer);
        CHECK_RC(Rc);
        direct_cursor_4 = direct_node_4->tail;
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

  static ElmcPebbleDrawCmd scene_cmd;

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
  ElmcValue *tick = (argc > 0) ? args[0] : NULL;

  if (!writer)
    return RC_ERR_INVALID_ARG;
  RC Rc = RC_SUCCESS;
  static ElmcPebbleDrawCmd scene_cmd;

  CATCH_BEGIN

    elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_PUSH_CONTEXT);

    Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
    CHECK_RC(Rc);

    elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_STROKE_COLOR);
    scene_cmd.p0 = ELMC_COLOR_BLACK;
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
    scene_cmd.p4 = ELMC_COLOR_BLACK;
    Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
    CHECK_RC(Rc);

    elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_POP_CONTEXT);

    Rc = elmc_scene_writer_push_cmd(writer, &scene_cmd);
    CHECK_RC(Rc);

  CATCH_END
  return Rc;

}

static RC elmc_fn_Main_minuteTickOp_commands_append(ElmcValue ** const args, const int argc, ElmcSceneWriter * const writer) {
  ElmcValue *point = (argc > 0) ? args[0] : NULL;

  if (!writer)
    return RC_ERR_INVALID_ARG;
  RC Rc = RC_SUCCESS;
  static ElmcPebbleDrawCmd scene_cmd;

  CATCH_BEGIN

    elmc_draw_cmd_init(&scene_cmd, ELMC_RENDER_OP_PIXEL);
    scene_cmd.p0 = ELMC_RECORD_GET_INDEX_INT(point, ELMC_FIELD_MAIN_POINT_X);
    scene_cmd.p1 = ELMC_RECORD_GET_INDEX_INT(point, ELMC_FIELD_MAIN_POINT_Y);
    scene_cmd.p2 = ELMC_COLOR_BLACK;
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
  static ElmcPebbleDrawCmd scene_cmd;

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
