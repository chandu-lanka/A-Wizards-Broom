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

        // Texture Functions
        SDL_Texture* LoadTexture(const char* fileName);
        void RenderTexture(SDL_Texture* tex);

        // Main Functions
        void handleEvents();
        void update();
        void render();
        void clean();
        void clear();
        void display();

        // Return Functions
        bool running() { return isRunning; }
        SDL_Renderer* getRenderer() { return renderer; }
        // variables
        
    private:
        bool isRunning;
        SDL_Window *window;
        SDL_Renderer *renderer;
};