#include "board.h"
board::board()
{
    m_width = 5;
    m_height = 5;
    m_board = vector<vector<int>(m_width+2,0)>(m_height+2,0);  //with padding at edge
}
board::board(int x, int y)
{
    m_width = x;
    m_height = y;
    m_board = vector<vector<int>(m_width+2,0)>(m_height+2,0); //with padding at edge
}

int board::getWidth()
{
    return m_width;
}

int board::getHeight()
{
    return m_height;
}

vector<vector<bool>> board::getBoard()
{
    return m_board;
}

void board::setBoard(vector<vector<bool>> board)
{
    m_board = board;
}