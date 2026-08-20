#ifndef ELMC_GENERATED_H
#define ELMC_GENERATED_H

#include "../runtime/elmc_runtime.h"
#include "../ports/elmc_ports.h"
RC elmc_fn_Main_init(ElmcValue **out, ElmcValue *context);
RC elmc_fn_Main_update(ElmcValue **out, ElmcValue *msg, ElmcValue *model);
RC elmc_fn_Main_subscriptions(ElmcValue **out, ElmcValue *ignoredArg);

#define ELMC_HAVE_DIRECT_COMMANDS_MAIN_DATEOPS 1

#define ELMC_HAVE_DIRECT_COMMANDS_MAIN_FACEOPS 1

#define ELMC_HAVE_DIRECT_COMMANDS_MAIN_HANDOPS 1

#define ELMC_HAVE_DIRECT_COMMANDS_MAIN_HOURTICKOP 1

#define ELMC_HAVE_DIRECT_COMMANDS_MAIN_MINUTETICKOP 1

#define ELMC_HAVE_DIRECT_COMMANDS_MAIN_QUOTELINEOP 1

#define ELMC_HAVE_DIRECT_COMMANDS_MAIN_QUOTEOPS 1

#define ELMC_HAVE_DIRECT_COMMANDS_MAIN_STROKELINE 1

#define ELMC_HAVE_DIRECT_COMMANDS_MAIN_VIEW 1

#define ELMC_HAVE_DIRECT_COMMANDS_MAIN_WATCHOPS 1


#endif
