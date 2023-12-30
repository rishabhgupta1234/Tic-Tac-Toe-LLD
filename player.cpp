#include "player.h"
using namespace std;
player::player(const string &playerName, char playerSymbol) : name(playerName), symbol(playerSymbol) {}
string player::getName() const { return name; }
char player::getSymbol() const { return symbol; }
