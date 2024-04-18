#ifndef Texture_manager_h
#define Texture_manager_h
#include "game.h"

class TextureManager {
public:
    static SDL_Texture* load_texture(const char* file_name, SDL_Renderer* renderer);
};

#endif /* Texture_manager_h */