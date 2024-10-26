#ifndef __render_h__
#define __render_h__


#include "SDL2\include\SDL.h"

#pragma comment(lib, "SDL2.lib")

#include "def.h"

class render
{
private:
    struct app
    {
        SDL_Renderer * Renderer;
        SDL_Window * Window;
        UINT Width = 0;
        UINT Height = 0;
    } App;
public:
    VOID Init( VOID );
    VOID Destroy( VOID );
    VOID Exit( VOID );
    VOID Input( VOID );
    VOID PrepareScene( VOID );
    VOID PresentScene( VOID );
};

#endif // !__render_h__
