//
// Created by capit on 12/10/2020.
//

#ifndef PONG_PAD_H
#define PONG_PAD_H

#include <raylib.h>

typedef struct {
    int UpButton;
    int DownButton;
} InputScheme;

typedef struct {
    InputScheme Scheme;
    int Score;
    float Speed;
    
    Vector2 Position;
    Vector2 Size;
} Pad;

void UpdatePad(Pad* pad);
void DrawPad(Pad* pad);

#endif //PONG_PAD_H
