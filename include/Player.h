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
        void movement();
        void animations();
    private:
        sf::Sprite sprite;
        sf::Texture texture;
        bool moving;
        sf::Clock animationTimer;
        
        // Animations
        sf::IntRect currentFrame;

        // Movement

        // Core

        // Functions
        void init();
        void initTexture();
        void initSprite();
        void initAnimations();
};