#pragma once 
#include <iostream>
#include <conio.h>
#include <time.h>
#include "ball.h"

using namespace std;
class PaddleClass {

private:
    int x, y, originalX, originalY;

public:
    PaddleClass(int posX, int posY);


    void Reset();


    int getX();
    int GetY();
    void MoveUP();
    void MoveDOWN();

    void PrintPaddleCoordinates();

};