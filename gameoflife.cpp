gameoflife::gameoflife(int s)
{
    speed = s;
}
// start()
// start the game of life
void gameoflife::start(){
    init();
}
// init()
// initial the game, with default value or user's input
// generate the board, create the first random cells
void gameoflife::init(){

}

int gameoflife::numofNeighbour(vector<vector<int>> board, int x, int y){
    return board[x-1][y-1]+board[x-1][y]+board[x-1][y+1]+board[x][y-1]+board[x][y+1]+board[x+1][y-1]+board[x+1][y]+board[x+1][y+1];
}

// nextGen()
// computer the next generation of the cells on the board
void gameoflife::nextGen(board &myBoard)
{
    vector<vector<int>> currBoard = myBoard.getBoard();
    vector<vector<int>> nextBoard = vector<vector<int>(myBoard.getWidth()+2,0)>(myBoard.getHeight()+2,0);;
    for(int i = 1; i <= myBoard.getHeight();i++)
    {
        for(int j = 1;j <= myBoard.getWidth();j++)
        {
            if(currBoard[i][j]== 0 && numofNeighbour(currBoard,i,j)==3)
            {
                nextBoard[i][j]=1;
            }else if(currBoard[i][j]== 1 && (numofNeighbour(currBoard,i,j)==2 || numofNeighbour(currBoard,i,j)==3)){
                nextBoard[i][j]=1;
            }else{
                nextBoard[i][j]=0;
            }
        }
    }
    myBoard.setBoard(nextBoard);
}

void gameoflife::display()
{
    
}