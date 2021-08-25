#pragma once
#include "headers/Imports.h"

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