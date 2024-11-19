#include "pacman.h"



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
    Rectangle openMouth{0, 0, 16, 16};
}

void Pacman::Update(){

}


/*
RLAPI ​void​ ​DrawTexturePro​(Texture2D texture, Rectangle source, Rectangle dest, Vector2 origin, ​float​ rotation, Color tint);           ​//​ Draw a part of a texture defined by a rectangle with 'pro' parameters 
    void DrawTextureRec(Texture2D texture, Rectangle source, Vector2 position, Color tint);            // Draw a part of a texture defined by a rectangle
    */
void Pacman::Draw() const {
    Rectangle rect{0, 0, 16, 16}; //{x, y, width, height}
    // DrawTextureV(pacmanImage, position, YELLOW);
    DrawTextureRec(pacmanImage, rect, position, YELLOW);
}