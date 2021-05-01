#include "paddle.h"
#include <iostream>

PaddleClass::PaddleClass(int posX, int posY)
{
    originalX = posX;
    originalY = posY;
    x = posX;
    y = posY;
}

void PaddleClass::Reset()
{
    x = originalX;
    y = originalY;
}

int PaddleClass::getX() { return x; }
int PaddleClass::GetY() { return y; }

void PaddleClass::MoveUP() { y--; }
void PaddleClass::MoveDOWN() { y++; }

void PaddleClass::PrintPaddleCoordinates()
{
    cout << "Paddle [" << x << "," << y << "]" << endl;
}