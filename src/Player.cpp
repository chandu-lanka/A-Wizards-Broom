#include "Player.h"

void Player::init()
{
    this->moving = false;
}

void Player::initTexture()
{
    if (!this->texture.loadFromFile("res/Wizard.png"))
    {
        std::cout << "ERROR::PLAYER::Could not load the player sheet";
    }
}

void Player::initSprite()
{
    this->sprite.setTexture(this->texture);
    this->currentFrame = sf::IntRect(0,0,32,32);
    this->sprite.setTextureRect(this->currentFrame);
    this->sprite.setScale(2.5f, 2.5f);
}

void Player::initAnimations()
{
    this->animationTimer.restart();
}

Player::Player()
{
    this->init();
    this->initTexture();
    this->initSprite();
    this->initAnimations();
}

Player::~Player() {}

void Player::movement()
{
    this->moving = false;
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A) || sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left)) // Left
    {
        this->sprite.move(-2.f, 0.f);
        this->moving = true;
    }

    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D) || sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right)) // Right
    {
        this->sprite.move(2.0f, 0.f);
        this->moving = true;
    }
}

void Player::animations()
{
    if (this->animationTimer.getElapsedTime().asSeconds() >= 0.3f)
    {        
        if (this->moving == false)
        {
            this->currentFrame.left += 32.f;
            if (this->currentFrame.left >= 96.f)
            {
                this->currentFrame.left = 0;
            }
        }
        else if (this->moving == true)
        {

        }
        this->animationTimer.restart();
        this->sprite.setTextureRect(currentFrame);
    }
}

void Player::update()
{
    this->movement();
    this->animations();
}

void Player::render(sf::RenderTarget& target)
{
    target.draw(this->sprite);
}