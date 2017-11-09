class board
{
public:
    board();
    board(int, int);
    int getWidth();
    int getHeight();
    vector<vector<bool>> getBoard();
    void setBoard(vector<vector<bool>>);
private:
    int m_width;
    int m_height;
    vector<vector<int>> m_board;
}

