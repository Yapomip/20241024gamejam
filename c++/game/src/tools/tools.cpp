
#include "precompiled.h"
#include <conio.h>

VOID Exit( VOID )
{
#ifdef GAME_DEBUG
    Log_no_end("Put some key: ");

    freopen("CONOUT$", "r", stdout);
    _getch();
#endif // GAME_DEBUG
    exit(0);
}
