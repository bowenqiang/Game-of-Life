#include "board.h"
class gameoflife
{
public:
    gameoflife(int)
    void start();

private:
    void init();
    void nextGen(board &);
    void display();
    int numofNeighbour(vector<vector<int>>, int, int);
    board myboard;
    int speed;
}