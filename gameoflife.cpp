gameoflife::gameoflife(int s)
{
    speed = s;
}
// start()
// start the game of life
gameoflife::start(){
    init();
}
// init()
// initial the game, with default value or user's input
// generate the board, create the first random cells
gameoflife::init(){

}

// nextGen()
// computer the next generation of the cells on the board
gameoflife::nextGen(board &myBoard)
{
    vector<vector<bool>> currBoard = myBoard.getBoard();
    vector<vector<bool>> nextBoard;
    for(int i = 0; i < myBoard.getHeight();i++)
    {
        for(int j=0;j<myBoard.getWidth();j++)
        {
            
        }
    }
}