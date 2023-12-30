#include "game.h"
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int boardSize;
    string player1Name, player2Name;
    cout << "Board Size : ";
    cin >> boardSize;
    cout << "Player 1 Name : ";
    cin >> player1Name;
    cout << "Player 2 Name : ";
    cin >> player2Name;

    game tictactoe(player1Name, player2Name, boardSize);
    tictactoe.start();

    return 0;
}