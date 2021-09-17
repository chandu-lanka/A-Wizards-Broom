#pragma once
#include "SDL.h"
#include "SDL_image.h"
#include "iostream"

class Game {
    public:
        Game();
        ~Game();

        void init(const char* title, int x, int y, int width, int height, bool fullScreen);

        // Main Functions
        void handleEvents();
        void update();
        void render();
        void clean();

        // Return Functions
        bool running() { return isRunning; }
        SDL_Renderer* getRenderer() { return renderer; }
        
    private:
        bool isRunning;
        SDL_Window *window;
        SDL_Renderer *renderer;
};