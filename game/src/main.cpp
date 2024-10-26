
#include "precompiled.h"

static struct system_static_init {
    system_static_init( VOID )
    {
        InitLog();

        if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
        {
            Log("SDL_Init Error: ", SDL_GetError());
            Exit();
        }
    }
} static_init;

INT CALLBACK WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, INT nShowCmd )
{
    render Render;

    Render.Init();

    while (1)
    {
        Render.PrepareScene();

        Render.Input();

        // Render


        Render.PresentScene();

        SDL_Delay(16);
    }

    return 0;
}