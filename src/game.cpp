#include "game.h"
#include "texture_manager.h"

SDL_Texture* tex;
SDL_Rect src_rect, dest_rect;

Game::Game() {}
Game::~Game() {}

void Game::init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen) {
    int flags = 0;
    if (fullscreen) flags = SDL_WINDOW_FULLSCREEN;

    if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {

        window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);

        renderer = SDL_CreateRenderer(window, -1, 0);
        if (renderer) SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);

        cnt = 0;
        is_running = true;
    }
    else is_running = false;

    tex = TextureManager::load_texture("assets/test img.png", renderer);
}

void Game::handle_events() {
    SDL_Event event;
    SDL_PollEvent(&event);
    switch (event.type) {
        case SDL_QUIT:
            is_running = false;
            break;
        default:
            break;
    }
}

void Game::update() {
    cnt++;
    dest_rect.w = 64;
    dest_rect.h = 64;
    dest_rect.x = cnt;
    dest_rect.y = cnt/2;
}

void Game::render() {
    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, tex, NULL, &dest_rect);
    SDL_RenderPresent(renderer);
}

void Game::clean() {
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
}

bool Game::running() { return is_running; }