#include "wall.hpp"

/* if you look at the wall tileset picture, each box is 8x8 pixels*/
Rectangle HORIZONTAL_WALL =     {  8,  0, 32, 16};
Rectangle VERTICAL_WALL =       { 40, 24, 16, 16};
Rectangle TOP_LEFT_CORNER =     { 0, 0, 0, 0 };
Rectangle TOP_RIGHT_CORNER =    { 0, 0, 0, 0 };
Rectangle BOTTOM_RIGHT_CORNER = { 0, 0, 0, 0 };
Rectangle BOTTOM_LEFT_CORNER =  { 0, 0, 0, 0 };


Wall::Wall(){
    float x = 100;
    float y = 200;
    position = { x, y };
    wallImage = LoadTexture("Graphics/disc_guy_tileset.png");
    thisWall = VERTICAL_WALL;
}

void Wall::Draw() const{
    DrawTextureRec(wallImage, thisWall, position, BLUE);
}