#include "board.h"
board::board()
{
    m_width = 5;
    m_height = 5;
    m_board = vector<vector<int>(m_width,0)>(m_height,0);
}
board::board(int x, int y)
{
    m_width = x;
    m_height = y;
    m_board = vector<vector<int>(m_width,0)>(m_height,0);
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