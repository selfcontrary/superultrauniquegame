#pragma once 
#include <iostream>
#include <conio.h>
#include <time.h>
#include "paddle.h"
using namespace std;

enum DirectionEnum { STOP = 0, LEFT = 1, UPLEFT = 2, DOWNLEFT = 3, RIGHT = 4, UPRIGHT = 5, DOWNRIGHT = 6 };
class BallClass {

private:
    int x, y, original_X, original_Y;
    DirectionEnum ball_direction;
public:
    BallClass(int posX, int posY);


    void Reset();


    void ChangeDirection(DirectionEnum dir);


    void RandomDirection();


    void Move();


    void PrintBallCoordinates();


    int GetX();
    int GetY();
    DirectionEnum GetDirection();
};