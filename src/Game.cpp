// custom headers
#include "Game.h"

Game::Game()
{
    this->initWindow();
    this->initPlayer();
}

Game::~Game()
{
    //delete this->player;
}

void Game::initPlayer()
{
    this->player = new Player();
}

void Game::initWindow()
{
    this->window.create(sf::VideoMode(1280, 720),"A Wizards Broom", sf::Style::Close | sf::Style::Titlebar);
    this->window.setFramerateLimit(60);
}

sf::RenderWindow & Game::getWindow()
{
    return this->window;
}
void Game::updatePlayer()
{
    this->player->update();
}

void Game::update()
{
    while (this->window.pollEvent(this->ev))
    {
        switch (this->ev.type)
        {
            case sf::Event::Closed:
                this->window.close();
                break;
            case sf::Event::KeyPressed:
                if (this->ev.key.code == sf::Keyboard::Escape)
                    this->window.close();
                break;
        }
    }
    this->updatePlayer();
}

void Game::renderPlayer()
{
    this->player->render(this->window);
}

void Game::render()
{
    this->window.clear(sf::Color::White);
    
    // Render Game
    this->renderPlayer();

    this->window.display();
}

