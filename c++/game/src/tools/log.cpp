
#include "precompiled.h"

VOID InitLog( VOID )
{
#ifdef GAME_DEBUG
    AllocConsole();
    freopen("CONOUT$", "w", stdout);
#endif // GAME_DEBUG
}

VOID Log_no_end( const std::string & out )
{
#ifdef GAME_DEBUG
    std::cout << out;
#endif // GAME_DEBUG
}

VOID Log( const std::string & out )
{
    Log_no_end(out);
    Log_no_end("\n");
}

VOID Log( const std::string & out1, const std::string & out2 )
{
    Log_no_end(out1);
    Log_no_end(out2);
    Log_no_end("\n");
}
