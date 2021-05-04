#include "gamemanager.h"
using namespace std;

GameManagerClass::GameManagerClass(int w, int h)
{
    quit = false;

    up_1 = 'w';
    down_1 = 's';

    up_2 = 'i';
    down_2 = 'k';

    width = w;
    height = h;

    ball = new BallClass(width / 2, height / 2);

    player1 = new PaddleClass(1, height / 2 - 3);
    player2 = new PaddleClass(width - 2, height / 2 - 3);
}

GameManagerClass::~GameManagerClass()
{
    delete ball;
    delete player1;
    delete player2;
}

void GameManagerClass::ScoreUp(PaddleClass* player)
{
    if (player == player1)
        score_1++;
    else
        score_2++;

    ball->Reset();
    player1->Reset();
    player2->Reset();
}

void GameManagerClass::Draw()
{
    system("cls");

    int ballX = ball->GetX();
    int ballY = ball->GetY();

    int player1_X = player1->getX();
    int player1_Y = player1->GetY();

    int player2_X = player2->getX();
    int player2_Y = player2->GetY();

    cout << endl << endl << "\t";

    for (int i = 0; i < width + 2; i++)
        cout << "\xB0";

    cout << endl;

    for (int i = 0; i < height; i++)
    {
        cout << "\t";
        for (int j = 0; j < width; j++)
        {
            if (j == 0)
                cout << "\xB0";

            if (ballX == j && ballY == i)
                cout << "O";


            else if (player1_X == j && player1_Y == i)
                cout << "\xDB";
            else if (player1_X == j && player1_Y + 1 == i)
                cout << "\xDB";
            else if (player1_X == j && player1_Y + 2 == i)
                cout << "\xDB";
            else if (player1_X == j && player1_Y + 3 == i)
                cout << "\xDB";


            else if (player2_X == j && player2_Y == i)
                cout << "\xDB";
            else if (player2_X == j && player2_Y + 1 == i)
                cout << "\xDB";
            else if (player2_X == j && player2_Y + 2 == i)
                cout << "\xDB";
            else if (player2_X == j && player2_Y + 3 == i)
                cout << "\xDB";

            else
                cout << " ";

            if (j == width - 1)
                cout << "\xB0";

        }
        cout << endl;
    }

    cout << "\t";

    for (int i = 0; i < width + 2; i++)
        cout << "\xB0";

    cout << endl << endl;
    cout << "\tPlayer 1:\t\t\t\tPlayer 2: " << endl << "\t" << score_1 << "\t\t\t\t\t" << score_2;

}
