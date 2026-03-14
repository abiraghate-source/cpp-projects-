#include<iostream>
#include<raylib.h>

int main()
{
    // Initialization
    //--------------------------------------------------------------------------------------
    int ballX = 400 ;
    int ballY = 400 ;
    Color green = {20, 160,133,255};
    InitWindow(800, 800, "My First Raylib Game!");         // Initialize window and OpenGL context

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        if (IsKeyDown(KEY_RIGHT)) ballX += 3 ;
        if (IsKeyDown(KEY_LEFT)) ballX -= 3 ;
        if (IsKeyDown(KEY_UP)) ballY -= 3 ;
        if (IsKeyDown(KEY_DOWN)) ballY += 3 ;
        BeginDrawing();
        ClearBackground(green);
        DrawCircle(ballX, ballY, 20, MAROON);
        EndDrawing();
    }
    CloseWindow();  
    return 0;
}        // Close window and OpenGL context
