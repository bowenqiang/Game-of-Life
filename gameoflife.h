#include "board.h"
class gameoflife
{
public:
    gameoflife(int)
    void start();

private:
    void init();
    void nextGen(board &);
    int numofNeighbour(vector<vector<int>>, int, int);
    board myboard;
    int speed;
}