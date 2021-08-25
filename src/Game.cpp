#include "headers/Imports.h"
#include "headers/Game.h"

Game::initWindow(int width, int height)
{
    this.window.create(sf::VideoMode(width, height),"A Wizards Broom", sf::Style::Close | st::Style::Titlebar);
}

const sf::RenderWindow & Game::getWindow() const
{
    return this.window;
}

void Game::update()
{
    std::cout << "ROFL";
}

void Game::render()
{
    
}

Game::Game()
{
    this.initWindow(800, 600);
}

Game::~Game()
{

}