#include "Game.hpp"

Game *game = nullptr;

int main(int argc, char* argv[])
{
    const int FPS = 60;
    const int frameDelay = 1000 / FPS;

    Uint32 frameStart;
    int frameTime;

    game = new Game();
    game->init("A Wizards Broom", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1280, 720, false);
    
    SDL_Texture* wizardTex = game->LoadTexture("gfx/res/Wizard/Idle/Wizard-Idle1.png");

    while (game->running()) {
        frameStart = SDL_GetTicks();

        game->handleEvents();
        game->update();

        // render
        game->clear();
        game->RenderTexture(wizardTex);
        game->display();

        frameTime = SDL_GetTicks() - frameStart;
        if (frameDelay > frameTime) {
            SDL_Delay(frameDelay - frameTime);
        }
    }

    game->clean();

    return 0;
}