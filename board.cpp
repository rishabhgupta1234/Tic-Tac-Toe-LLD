#include "board.h"
using namespace std;
board::board(int n) : size(n), playerBoard(n, vector<char>(n, ' ')) {}
void board::display()
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << " " << playerBoard[i][j];
            if (j < size - 1)
                cout << " |";
        }
        cout << endl;
        if (i < size - 1)
        {
            for (int j = 0; j < size; j++)
            {
                cout << "----";
            }
            cout << endl;
        }
    }
}
bool board::isfull()
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (playerBoard[i][j] == ' ')
                return false;
        }
    }
    return true;
}
bool board::placemove(int row, int col, char symbol)
{
    if (row < 0 || col < 0 || row >= size || col >= size || playerBoard[row][col] != ' ')
        return false;
    playerBoard[row][col] = symbol;
    return true;
}
bool board::checkwin(char symbol)
{
    for (int i = 0; i < size; i++)
    {
        bool rowWin = true;
        bool colWin = true;
        for (int j = 0; j < size; j++)
        {
            if (playerBoard[i][j] != symbol)
            {
                rowWin = false;
            }
            if (playerBoard[j][i] != symbol)
            {
                colWin = false;
            }
        }
        if (rowWin || colWin)
            return true;
    }
    bool mainDiagonalWin = true;
    bool antiDiagonalWin = true;
    for (int i = 0; i < size; i++)
    {
        if (playerBoard[i][i] != symbol)
        {
            mainDiagonalWin = false;
        }
        if (playerBoard[i][size - i - 1] != symbol)
        {
            antiDiagonalWin = false;
        }
    }
    if (mainDiagonalWin || antiDiagonalWin)
        return true;
    return false;
}
