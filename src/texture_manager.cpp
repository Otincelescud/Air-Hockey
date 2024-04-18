#include "texture_manager.h"

SDL_Texture* TextureManager::load_texture(const char* texture, SDL_Renderer* renderer) {
    SDL_Surface* tmp_surface = IMG_Load(texture);
    SDL_Texture* tex = SDL_CreateTextureFromSurface(renderer, tmp_surface);
    SDL_FreeSurface(tmp_surface);

    return tex;
};