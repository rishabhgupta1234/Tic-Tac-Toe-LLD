#include "game.h"
using namespace std;

game::game(const string &player1name, const string &player2name, int boardSize) : player1(player1name, 'X'),
                                                                                  player2(player2name, 'O'), boardgame(boardSize), currentplayer(&player1), isGameOver(false) {}

bool game::isDraw()
{
    return boardgame.isfull() && !boardgame.checkwin(player1.getSymbol()) && !boardgame.checkwin(player2.getSymbol());
}
void game::start()
{
    cout << "Welcome to the game TIC TAC TOE!" << endl;
    boardgame.display();
    while (!isGameOver)
    {
        playerTurn();
        boardgame.display();
        if (boardgame.checkwin(currentplayer->getSymbol()))
        {
            cout << currentplayer->getName() << " Wins !!!" << endl;
            isGameOver = true;
        }
        else if (boardgame.isfull())
        {
            cout << " It's a draw game!" << endl;
            isGameOver = true;
        }
        else
        {
            currentplayer = (currentplayer == &player1) ? &player2 : &player1;
        }
    }
}
void game::playerTurn()
{
    int row, col;
    cout << currentplayer->getName() << "'s turn. Enter row and column (0 - based indexing) : ";
    cin >> row >> col;
    while (!boardgame.placemove(row, col, currentplayer->getSymbol()))
    {
        cout << "Invalid Move ! please try again..." << endl;
        cin >> row >> col;
    }
}