#include "game.h"

Game* game = nullptr;
const int FPS = 60;
const int FRAME_DELAY = 1000 / FPS;

Uint32 frame_start;
int frame_time;

#ifdef _WIN32
#include <windows.h>
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    game = new Game();

    game->init("Air Hockey", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 600, false);

    while (game->running()) {

        frame_start = SDL_GetTicks();

        game->handle_events();
        game->update();
        game->render();

        frame_time = SDL_GetTicks() - frame_start;
        if (frame_time < FRAME_DELAY) SDL_Delay(FRAME_DELAY - frame_time);
    }

    game->clean();

    return 0;
}
#endif