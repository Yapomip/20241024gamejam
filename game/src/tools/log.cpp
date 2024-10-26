
#include "precompiled.h"

VOID InitLog( VOID )
{
#ifdef GAME_DEBUG
    AllocConsole();
    freopen("CONOUT$", "w", stdout);
#endif // GAME_DEBUG
}
VOID Log( const std::string & out )
{
#ifdef GAME_DEBUG
    std::cout << out << "\n";
#endif // GAME_DEBUG
}
