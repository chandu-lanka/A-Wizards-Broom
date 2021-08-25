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

// custom headers
#include "Player.h"

class Game
{
public:
    Game();
    virtual ~Game();
    sf::RenderWindow& getWindow();
    
    // update
    void update();
    void updatePlayer();

    // render
    void render();
    void renderPlayer();
private:
    sf::Event ev;
    sf::RenderWindow window;

    Player* player;
    void initPlayer();
    void initWindow();
};