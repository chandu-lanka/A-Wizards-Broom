#pragma once
#include "C:/SDL2-w64/include/SDL.h"
#include "C:/SDL2-w64/include/SDL_image.h"
#include "iostream"

class Game 
{
    public:
        Game();
        ~Game();

        void init(const char* title, int x, int y, int width, int height, bool fullScreen);
        void handleEvents();
        void update();
        void render();
        void clean();
        bool running() { return isRunning; }

    private:
        bool isRunning;
        SDL_Window *window;
        SDL_Renderer *renderer;
};