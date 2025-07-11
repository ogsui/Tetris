#include <raylib.h>
#include "game.h"

double lastUpdateTime = 0;
bool eventTriggered(double interval)
{
    double currentTime = GetTime();
    if(currentTime-lastUpdateTime >= interval)
    {
        lastUpdateTime = currentTime;
        return true;
    }
    return false;
}

int main()
{

    InitWindow(300, 600, "Tetris"); // it is the window size
    SetTargetFPS(144);              // Setting fps else it would be different for each device

    Game game = Game();

    while (WindowShouldClose() == 0)
    {
        game.HandelInputted();
        if(eventTriggered(0.2))
        {
            game.MoveBlockdown();
        }
        
        BeginDrawing();
        ClearBackground(ORANGE); // bg color
        game.Draw();
        EndDrawing();
    }

    CloseWindow();
}