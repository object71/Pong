//
// Created by capit on 12/4/2020.
//

#ifndef PONG_PAD_H
#define PONG_PAD_H

#include "raylib.h"

class Pad
{
public:
    Pad() {}
    Pad(Vector2 position, int controlKeyUp, int controlKeyDown) :
            Position(position), ControlKeyUp(controlKeyUp), ControlKeyDown(controlKeyDown)
    {
    }
    
    Vector2 Position;
    int ControlKeyUp = 0;
    int ControlKeyDown = 0;
    int Score = 0;
    
    Vector2 Size = {10, 100};
    float Speed = 220;
    
    void Update();
    
    void Draw();
};

#endif //PONG_PAD_H
