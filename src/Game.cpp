#include "Game.hpp"

SDL_Texture* playerTex;

Game::Game() {}
Game::~Game() {}

// functions
void Game::init(const char* title, int x, int y, int width, int height, bool fullScreen) {
    int flags = 0;

    if (fullScreen) {
        flags = SDL_WINDOW_FULLSCREEN;
    }

    if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
        std::cout << "SDL2 Initialization Successful" << std::endl;
        window = SDL_CreateWindow(title, x, y, width, height, flags);
        if (window) {
            std::cout << "SDL2 Window Successfully Created" << std::endl;
        }

        renderer = SDL_CreateRenderer(window, -1, 0);
        if (renderer) {
            SDL_SetRenderDrawColor(renderer, 255,255,255,255);
            std::cout << "SDL2 Renderer Successfully Created" << std::endl;
        }

        isRunning = true;
    } else {
        isRunning = false;
    }

    SDL_Surface* playerSurface = IMG_Load("bin/res/Wizard/Idle/Wizard-Idle1.png");
    playerTex = SDL_CreateTextureFromSurface(renderer,playerSurface);
    SDL_FreeSurface(playerSurface);
}

void Game::handleEvents() {
    SDL_Event event;
    SDL_PollEvent(&event);

    switch (event.type) {
        case SDL_QUIT:
            isRunning = false;
            break;
    }
}

void Game::update() {}

void Game::render() {
    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, playerTex, NULL, NULL);
    SDL_RenderPresent(renderer);
}

void Game::clean() {
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_QUIT;
}
