#include "ball.h"


BallClass::BallClass(int posX, int posY)
{
    original_X = posX;
    original_Y = posY;
    x = posX;
    y = posY;
    ball_direction = STOP;
}
void BallClass::Reset()
{
    x = original_X;
    y = original_Y;
    ball_direction = STOP;
}

void BallClass::ChangeDirection(DirectionEnum dir)
{
    ball_direction = dir;
}
void BallClass::RandomDirection()
{
    ball_direction = (DirectionEnum)(rand() % 6 + 1);
}