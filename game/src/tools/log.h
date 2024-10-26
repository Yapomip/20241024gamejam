#ifndef __log_h__
#define __log_h__

#include "def.h"

VOID InitLog( VOID );
VOID Log( const std::string &out );
VOID Log( const std::string &out1, const std::string &out2 );

#endif // !__log_h__
