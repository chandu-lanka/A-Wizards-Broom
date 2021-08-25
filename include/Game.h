#pragma once
// std
#include "iostream"
#include "ctime"
#include "cstdlib"
#include "time.h"

// SFML
#include "SFML/System.hpp"
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"

class Game
{
public:
    Game();
    virtual ~Game();
    sf::RenderWindow& getWindow();
    void update();
    void render();
private:
    sf::RenderWindow window;
    void initWindow();
};