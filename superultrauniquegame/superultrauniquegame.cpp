#include <iostream>
#include <conio.h>
#include <time.h>
#include "gamemanager.h"
using namespace std;



int main()
{
    GameManagerClass game(50, 15);
    srand(time(0));
    game.Run();
}