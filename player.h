// #ifndef player_H
// #define player_H
#include <bits/stdc++.h>
using namespace std;
class player
{
private:
    string name;
    char symbol;

public:
    player(const string &playerName, char playerSymbol);
    string getName() const;
    char getSymbol() const;
};

// #endif