#include <raylib.h>
#include "ball.h"
#include "pacman.h"

int main() 
{
    const Color darkGreen = {20, 160, 133, 255};
    
    constexpr int screenWidth = 800;
    constexpr int screenHeight = 600;
    
    Ball ball;
    // Textures MUST be loaded after Window initiailization (OpenGL context is required)
    InitWindow(screenWidth, screenHeight, "My first RAYLIB program!");
    SetTargetFPS(60);

    Pacman pacman;

    
    while (!WindowShouldClose())
    {
        // ball.Update();
        
        BeginDrawing();
            ClearBackground(BLACK);
            // ball.Draw();
            pacman.Draw();
        EndDrawing();
    }
    
    CloseWindow();
}