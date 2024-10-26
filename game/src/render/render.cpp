
#include "precompiled.h"

VOID render::Init( VOID )
{
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        Exit();
    }

    SDL_DisplayMode DisplayMode;
    INT request = SDL_GetDesktopDisplayMode(0,&DisplayMode);
    App.Width = DisplayMode.w;
    App.Height = DisplayMode.h;

    INT WindowFlags = 0;

    App.Window = SDL_CreateWindow("Game", 
        SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 
        App.Width, App.Height, WindowFlags);

    if (!App.Window)
    {
        Exit();
    }

    SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "linear");

    INT RendererFlags = SDL_RENDERER_ACCELERATED;

    App.Renderer = SDL_CreateRenderer(App.Window, -1, RendererFlags);

    if (!App.Renderer)
    {
        Exit();
    }
}

VOID render::Destroy( VOID )
{
    SDL_DestroyRenderer(App.Renderer);
    SDL_DestroyWindow(App.Window);
    SDL_Quit();
}

VOID render::Exit( VOID )
{
    Destroy();
    exit(0);
}

VOID render::Input( VOID )
{
    SDL_Event event;

    while (SDL_PollEvent(&event))
    {
        switch (event.type)
        {
            case SDL_QUIT:
                Exit();
                break;

            default:
                ;
        }
    }
}
VOID render::PrepareScene( VOID )
{
    SDL_SetRenderDrawColor(App.Renderer, 96, 128, 255, 255);
    SDL_RenderClear(App.Renderer);
}
VOID render::PresentScene( VOID )
{
    SDL_RenderPresent(App.Renderer);
}