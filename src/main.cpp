#include <raylib.h>
#include "pacman.hpp"
#include "wall.hpp"

int main() 
{    
    constexpr int screenWidth = 800;
    constexpr int screenHeight = 600;
    
    // Textures MUST be loaded after Window initiailization (OpenGL context is required)
    InitWindow(screenWidth, screenHeight, "Pacman Clone");
    SetTargetFPS(60);

    Pacman pacman;
    Wall wall;

    
    while (!WindowShouldClose())
    {
        pacman.Update();
        
        BeginDrawing();
            ClearBackground(BLACK);
            pacman.Draw();
            wall.Draw();
        EndDrawing();
    }
    
    CloseWindow();
}