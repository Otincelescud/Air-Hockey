#include "game.h"

Game* game = nullptr;

#ifdef _WIN32
#include <windows.h>
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    game = new Game();

    game->init("Air Hockey", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 600, false);

    while (game->running()) {
        game->handle_events();
        game->update();
        game->render();
    }

    game->clean();

    return 0;
}
#endif