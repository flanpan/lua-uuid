#include <lua.h>
#include <lauxlib.h>
#include <uuid/uuid.h>

static int luuid(lua_State *L) {
    char tmp[37];
    uuid_t uuid;
    uuid_generate(uuid);
    uuid_unparse_upper(uuid, tmp);

    lua_pushstring(L, tmp);
    return 1;
}

int luaopen_uuid(lua_State *L) {
    lua_pushcfunction(L, luuid);
    return 1;
}
