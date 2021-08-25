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

class Player{
    public:
        Player();
        ~Player();
        void update();
        void render(sf::RenderTarget& target);
    private:
        sf::Sprite sprite;
        sf::Texture texture;

        // Animations

        // Movement

        // Core

        // Functions
        void initTexture();
        void initSprite();
};