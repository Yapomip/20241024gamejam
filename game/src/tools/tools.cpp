
#include "precompiled.h"

VOID Exit( VOID )
{
#ifdef GAME_DEBUG
    Log("\nPut some key\n");

    freopen("CONOUT$", "r", stdout);
    getchar();
#endif // GAME_DEBUG
    exit(0);
}
