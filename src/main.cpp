#include <raylib.h>
#include "ball.h"
#include "pacman.h"

int main() 
{    
    constexpr int screenWidth = 800;
    constexpr int screenHeight = 600;
    
    // Textures MUST be loaded after Window initiailization (OpenGL context is required)
    InitWindow(screenWidth, screenHeight, "Pacman Clone");
    SetTargetFPS(60);

    Pacman pacman;

    
    while (!WindowShouldClose())
    {
        pacman.Update();
        
        BeginDrawing();
            ClearBackground(BLACK);
            pacman.Draw();
        EndDrawing();
    }
    
    CloseWindow();
}