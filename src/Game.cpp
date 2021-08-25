// custom headers
#include "Game.h"

Game::Game()
{
    this->initWindow();
    this->initPlayer();
}

Game::~Game()
{
    delete this->player;
}

void Game::initPlayer()
{
    this->player = new Player();
}

void Game::initWindow()
{
    this->window.create(sf::VideoMode(800, 600),"A Wizards Broom", sf::Style::Close | sf::Style::Titlebar);
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
    this->window.clear();
    
    // Render Game
    this->renderPlayer();
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
    this->window.draw(shape);

    this->window.display();
}

