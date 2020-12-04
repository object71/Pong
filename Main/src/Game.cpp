//
// Created by capit on 12/5/2020.
//

#include "Game.h"

Game* Game::Instance;

Game::Game()
{
    Instance = this;
    
    ScreenWidth = 800;
    ScreenHeight = 450;
    
    LeftPad = Pad({20, ScreenHeight / 2.f}, KEY_W, KEY_S);
    RightPad = Pad({ScreenWidth - 20.f - 10.f, ScreenHeight / 2.f}, KEY_UP, KEY_DOWN);
    GameBall = Ball({ScreenWidth / 2.f, ScreenHeight / 2.f}, {100, 50});
    
    InitWindow(ScreenWidth, ScreenHeight, "Pong");
    SetWindowMinSize(ScreenWidth, ScreenHeight);
    SetTargetFPS(60);
}

void Game::Update()
{
    LeftPad.Update();
    RightPad.Update();
    GameBall.Update();
}

void Game::Draw()
{
    BeginDrawing();
    
    ClearBackground(BLACK);
    
    LeftPad.Draw();
    RightPad.Draw();
    GameBall.Draw();
    
    const char* scoreLeft = TextFormat("%d", LeftPad.Score);
    int scoreSizeLeft = MeasureText(scoreLeft, 20);
    DrawText(scoreLeft, (ScreenWidth / 2) - 10 - scoreSizeLeft, 10, 20, LIGHTGRAY);
    
    const char* scoreRight = TextFormat("%d", RightPad.Score);
    DrawText(scoreRight, (ScreenWidth / 2) + 10, 10, 20, LIGHTGRAY);
    
    DrawLineEx({ScreenWidth / 2.f, 5}, {ScreenWidth / 2.f, ScreenHeight - 5.f}, 2, LIGHTGRAY);
    
    EndDrawing();
}

void Game::Run()
{
    while (!WindowShouldClose())
    {
        Update();
        Draw();
    }
}

Game::~Game()
{
    CloseWindow();
}
