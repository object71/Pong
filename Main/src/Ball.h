//
// Created by capit on 12/5/2020.
//

#ifndef PONG_BALL_H
#define PONG_BALL_H

#include <raylib.h>
#include "Pad.h"

class Ball
{
public:
    Ball()
    {
    }
    
    Ball(Vector2 position, Vector2 velocity) : Position(position), Velocity(velocity), InitialVelocity(velocity)
    {
    }
    
    Vector2 Position;
    Vector2 Velocity;
    Vector2 InitialVelocity;
    
    void Update();
    
    void Draw();
    
    void ResetBall();
};

#endif //PONG_BALL_H
