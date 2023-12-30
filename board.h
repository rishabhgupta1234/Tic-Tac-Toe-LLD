// #ifndef board_H
// #define board_H
#include <bits/stdc++.h>
using namespace std;
class board
{
private:
    int size;
    vector<vector<char>> playerBoard;

public:
    board(int size);
    void display();
    bool isfull();
    bool placemove(int row, int col, char symbol);
    bool checkwin(char symbol);
};

// #endif