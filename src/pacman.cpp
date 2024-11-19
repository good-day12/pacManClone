#include "pacman.h"


//Rectangle works like x, y, width, height

//locations for the graphics/discguy.png sprite sheet
const Rectangle RIGHT_MOUTH =    {0, 0, 16, 16};
const Rectangle LEFT_MOUTH =     {0, 16, 16, 16};
const Rectangle UP_MOUTH =       {0, 32, 16, 16};
const Rectangle DOWN_MOUTH =     {0, 48, 16, 16};
const Rectangle CLOSED_MOUTH =   {16, 0, 16, 16};
static double lastTime = 0;

//helper functions
Rectangle updateDirectionBasedOnKeyPressed(Rectangle);

Pacman::Pacman(){
    float x = 100;
    float y = 100;
    speedX = 0;
    speedY = 0;

    position = { x, y };

    pacmanImage = LoadTexture("graphics/discguy.png");
    currImage = RIGHT_MOUTH;
    currDirectionImage = currImage;
}

Rectangle Pacman::getHitBox() const{
    return {position.x, position.y, 16, 16};
    //return our hitbox location which is based on our current position
    // hench x and y
    //and size of our box, 16 by 16
}

void Pacman::Update(){
    double currentTime = GetTime();
    
    updateDirectionBasedOnKeyPressed();

    if (currentTime - lastTime > .25){
        currImage = CLOSED_MOUTH;
        lastTime = currentTime + .5;
    }

    position.x += speedX;
    position.y += speedY;

}


void Pacman::Draw() const {
    DrawTextureRec(pacmanImage, currImage, position, YELLOW);
}

void Pacman::updateDirectionBasedOnKeyPressed(){
    if (IsKeyPressed(KEY_W)){
        currDirectionImage = UP_MOUTH;
        speedY = -2;
        speedX = 0;
    }

    if (IsKeyPressed(KEY_S)){
        currDirectionImage = DOWN_MOUTH;
        speedY = 2;
        speedX = 0;
    }

    if (IsKeyPressed(KEY_A)){
        currDirectionImage = LEFT_MOUTH;
        speedY = 0;
        speedX = -2;
    }

    if (IsKeyPressed(KEY_D)){
        currDirectionImage = RIGHT_MOUTH;
        speedY = 0;
        speedX = 2;
    }

}