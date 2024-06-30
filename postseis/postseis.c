#include "postgres.h"
#include "fmgr.h"
#include "utils/builtins.h"

PG_MODULE_MAGIC;

PG_FUNCTION_INFO_V1(hello_postseis);

Datum hello_postseis(PG_FUNCTION_ARGS)
{
    elog(INFO, "Hello, Postseis!");
    // return hello world
    PG_RETURN_TEXT_P(cstring_to_text("Hello, Postseis!"));
}
