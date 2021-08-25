#include "Player.h"

void Player::initSprite()
{
    if (!this->texture.loadFromFile("res/Wizard.png"))
    {
        std::cout << "ERROR::PLAYER::Could not load the player sheet";
    }
}

void Player::initTexture()
{
    this->sprite.setTexture(this->texture);
}

Player::Player()
{
    this->initTexture();
    this->initSprite();
}

Player::~Player() {}

void Player::update()
{}

void Player::render(sf::RenderTarget& target)
{
    target.draw(this->sprite);
}