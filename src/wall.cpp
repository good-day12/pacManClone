#include "wall.hpp"

Wall::Wall(){
    float x = 100;
    float y = 200;
    position = { x, y };
    wallImage = LoadTexture("Graphics/disc_guy_tileset.png");
    thisWall = { 0, 0, 6, 1};
}

void Wall::Draw() const{

    DrawTextureRec(wallImage, thisWall, position, YELLOW);

}