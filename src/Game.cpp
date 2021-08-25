// custom headers
#include "Game.h"

Game::Game()
{
    this->initWindow();
}

Game::~Game()
{

}

void Game::initWindow()
{
    this->window.create(sf::VideoMode(800, 600),"A Wizards Broom", sf::Style::Close | sf::Style::Titlebar);
}

sf::RenderWindow & Game::getWindow()
{
    return this->window;
}

void Game::update()
{
    std::cout << "ROFL";
}

void Game::render()
{
    
}
