#pragma once
#include <iostream>
#include <SDL.h>
#include <SDL_image.h>

class TextureManager {
    public: 
        static SDL_Texture* LoadTexture(SDL_Renderer* ren, const char* filePath);
};