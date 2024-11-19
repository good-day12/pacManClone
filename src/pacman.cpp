#include "pacman.h"

const Rectangle rightMouth = {0, 0, 16, 16};
const Rectangle closeMouth = {16, 0, 16, 16};

Pacman::Pacman(){
    float x = 100;
    float y = 100;
    speedX = 5;
    speedY = 5;

    // Vector2 position;
    // position.x = x;
    // position.y = y;

    position = { x, y };

    pacmanImage = LoadTexture("graphics/discguy.png");
    currImage = closeMouth;
}

void Pacman::Update(){
    int currentTime = GetTime();
    

    if (currentTime % 2 == 0){
        currImage = rightMouth;
    } else {
        currImage = closeMouth;
    }
}


/*
RLAPI ​void​ ​DrawTexturePro​(Texture2D texture, Rectangle source, Rectangle dest, Vector2 origin, ​float​ rotation, Color tint);           ​//​ Draw a part of a texture defined by a rectangle with 'pro' parameters 
    void DrawTextureRec(Texture2D texture, Rectangle source, Vector2 position, Color tint);            // Draw a part of a texture defined by a rectangle
    */
void Pacman::Draw() const {

    // DrawTextureV(pacmanImage, position, YELLOW);
    DrawTextureRec(pacmanImage, currImage, position, YELLOW);

}