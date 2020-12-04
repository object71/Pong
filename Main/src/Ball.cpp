//
// Created by capit on 12/5/2020.
//

#include "Ball.h"
#include "Game.h"

void Ball::Update()
{
    Pad& leftPad = Game::Instance->LeftPad;
    if (Position.x > GetScreenWidth())
    {
        leftPad.Score++;
        ResetBall();
    }
    
    Pad& rightPad = Game::Instance->RightPad;
    if (Position.x < 0)
    {
        rightPad.Score++;
        ResetBall();
    }
    
    if (Position.y <= 0)
    {
        Velocity.y *= -1;
    }
    
    if (Position.y >= GetScreenHeight())
    {
        Velocity.y *= -1;
    }
    
    if (Position.x >= rightPad.Position.x && Position.x <= rightPad.Position.x + rightPad.Size.x)
    {
        if (Position.y >= rightPad.Position.y - (rightPad.Size.y / 2) && Position.y <= rightPad.Position.y + (
                rightPad.Size.y / 2
        ))
        {
            Velocity.x *= -1.5;
            Velocity.y *= 1.2;
        }
    }
    
    if (Position.x >= leftPad.Position.x && Position.x <= leftPad.Position.x + leftPad.Size.x)
    {
        if (Position.y >= leftPad.Position.y - (leftPad.Size.y / 2) && Position.y <= leftPad.Position.y + (
                leftPad.Size.y / 2
        ))
        {
            Velocity.x *= -1.5;
            Velocity.y *= 1.2;
        }
    }
    
    Position.x += GetFrameTime() * Velocity.x;
    Position.y += GetFrameTime() * Velocity.y;
}

void Ball::ResetBall()
{
    Position = {GetScreenWidth() / 2.f, GetScreenHeight() / 2.f};
    Velocity = InitialVelocity;
    Velocity.x *= -1;
}

void Ball::Draw()
{
    DrawRectangle(Position.x - 5, Position.y - 5, 10, 10, WHITE);
}
