//
// Created by capit on 12/4/2020.
//

#include "Pad.h"

void Pad::Update()
{
    if (IsKeyDown(ControlKeyDown))
    {
        Position.y += GetFrameTime() * Speed;
    }
    
    if (IsKeyDown(ControlKeyUp))
    {
        Position.y -= GetFrameTime() * Speed;
    }
}

void Pad::Draw()
{
    DrawRectangle(Position.x, Position.y - (Size.y / 2), Size.x, Size.y, {255, 255, 255, 255});
}
