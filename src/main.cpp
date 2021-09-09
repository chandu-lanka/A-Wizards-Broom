#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include "Game.hpp"

Game *game = nullptr;

int main(int argc, char* argv[])
{
    game = new Game();
    game->init("A Wizards Broom", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1280, 720, false);
    while (game->running()) {
        game->handleEvents();
        game->update();
        game->render();
    }

    game->clean();

    return 0;
}