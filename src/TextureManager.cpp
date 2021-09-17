#include "TextureManager.hpp"

SDL_Texture* TextureManager::LoadTexture(SDL_Renderer* ren, const char* filePath) {
    SDL_Texture* tex = NULL;
    tex = IMG_LoadTexture(ren, filePath);

    if (tex == NULL) {
        std::cout << "Texture Couldn't Be Found. Error: " << SDL_GetError() << std::endl;
    }

    return tex;
}