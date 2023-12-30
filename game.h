// #ifndef game_H
// #define game_H
#include "player.h"
#include "board.h"
#include <bits/stdc++.h>
using namespace std;
class game
{
private:
    board boardgame;
    player player1;
    player player2;
    player *currentplayer;
    bool isGameOver;

public:
    game(const string &player1name, const string &player2name, int boardSize);
    void start();
    void playerTurn();
    bool isDraw();
};
// #endif