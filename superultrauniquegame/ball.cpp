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

void BallClass::Move()
{
    switch (ball_direction)
    {
    case STOP:
        break;

    case LEFT:
        x--;
        break;

    case UPLEFT:
        x--;
        y--;
        break;

    case DOWNLEFT:
        x--;
        y++;
        break;

    case RIGHT:
        x++;

    case UPRIGHT:
        x++;
        y--;
        break;

    case DOWNRIGHT:
        x++;
        y++;
        break;

    default:
        break;
    }
}


int BallClass::GetX() { return x; }
int BallClass::GetY() { return y; }
DirectionEnum BallClass::GetDirection() { return ball_direction; }