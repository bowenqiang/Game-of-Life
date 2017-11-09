#include "board.h"
class gameoflife
{
public:
    gameoflife(int)
    void start();

private:
    void init();
    void nextGen(board &);
    board myboard;
    int speed;
}