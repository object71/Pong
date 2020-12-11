//
// Created by capit on 11/29/2020.
//

#ifndef PONG_MAIN_H
#define PONG_MAIN_H

#include <raylib.h>
#include "pad.h"
#include "ball.h"

typedef struct {
    Pad player1;
    Pad player2;
    Ball ball;
} GameData;

void InitializeGameWindow();
void Loop(GameData* data);
void Update(GameData* data);
void Draw(GameData* data);


#endif //RAYLIBDOOM_MAIN_H
