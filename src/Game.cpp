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

void Game::initWindow(int width, int height)
{
    this->window.create(sf::VideoMode(width, height),"A Wizards Broom", sf::Style::Close | sf::Style::Titlebar);
}

const sf::RenderWindow & Game::getWindow() const
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

Game::Game()
{
    this->initWindow(800, 600);
}

Game::~Game()
{

}