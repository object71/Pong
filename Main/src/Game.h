//
// Created by capit on 12/5/2020.
//

#ifndef PONG_GAME_H
#define PONG_GAME_H

#include "Pad.h"
#include "Ball.h"

class Game
{
public:
    Pad LeftPad;
    Pad RightPad;
    Ball GameBall;
    
    float ScreenWidth;
    float ScreenHeight;
    
    static Game* Instance;
    
    Game();
    ~Game();
    
    void Run();
    void Update();
    void Draw();
};

#endif //PONG_GAME_H
