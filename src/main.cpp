// std
#include "iostream"
#include "ctime"
#include "cstdlib"
#include "time.h"

// SFML
#include "SFML/System.hpp"
#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"
#include "SFML/Window.hpp"
#include "SFML/Network.hpp"

// custom headers
#include "Game.h"

int main()
{
    Game game;
    while (game.getWindow().isOpen())
    {
        game.update();
        game.render();    
    }
    return 0;
}