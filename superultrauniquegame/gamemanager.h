#pragma once
#include <iostream>
using namespace std;
class GameManagerClass {

private:
    int width, height;
    int score_1 = 0, score_2 = 0;
    char up_1, down_1, up_2, down_2;
    bool quit;

    BallClass* ball;
    PaddleClass* player1, * player2;
public:
    GameManagerClass(int w, int h);


    ~GameManagerClass();
};