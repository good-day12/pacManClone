#include "wall.hpp"

/* if you look at the wall tileset picture, each box is 8x8 pixels*/
Rectangle HORIZONTAL_WALL =     {  8,  0, 32, 16};
Rectangle VERTICAL_WALL =       { 40, 24, 16, 16};
Rectangle TOP_LEFT_CORNER =     { 0, 0, 0, 0 };
Rectangle TOP_RIGHT_CORNER =    { 0, 0, 0, 0 };
Rectangle BOTTOM_RIGHT_CORNER = { 0, 0, 0, 0 };
Rectangle BOTTOM_LEFT_CORNER =  { 0, 0, 0, 0 };

/*What if I used 16x16 blocks for the walls, assigned each vertical or 
horizontalwall a different value like 1 and 2 repsectively, then used a 
CSV sheet in excel to create the map?
could make making the map way easier, give ability to change up the 
maps in the future*/


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