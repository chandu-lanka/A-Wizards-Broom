#pragma once
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


class Game
{
public:    
    Game();
    virtual ~Game();
    const sf::RenderWindow& getWindow() const;
    void update();
    void render();
private:
    sf::RenderWindow window;
    void initWindow(int width, int height);
};