/* This is from the repo https://github.com/educ8s/CPP-Space-Invaders-Game-with-raylib
    he made a space invaders game so I will be using examples of his code to learn how
    to work this game using my prior cpp knowledge
    
#include "alien.hpp"

Texture2D Alien::alienImages[3] = {};

Alien::Alien(int type, Vector2 position)
{
    this -> type = type;
    this -> position = position;

    if(alienImages[type -1].id == 0){

    switch (type) {
        case 1:
            alienImages[0] = LoadTexture("Graphics/alien_1.png");
            break;
        case 2:
            alienImages[1] = LoadTexture("Graphics/alien_2.png");
            break;
        case 3: 
            alienImages[2] = LoadTexture("Graphics/alien_3.png");
            break;
        default:
            alienImages[0] = LoadTexture("Graphics/alien_1.png");
            break;
    }
}
}

void Alien::Draw() {
    DrawTextureV(alienImages[type - 1], position, WHITE);
}

int Alien::GetType() {
    return type;
}

void Alien::UnloadImages()
{
    for(int i = 0; i < 4; i++) {
        UnloadTexture(alienImages[i]);
    }
}

Rectangle Alien::getRect()
{
    return {position.x, position.y,
    float(alienImages[type - 1].width),
    float(alienImages[type - 1].height)
    };
}

void Alien::Update(int direction) {
    position.x += direction;
}
*/