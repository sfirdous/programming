#include "Board.hpp"
#include "Queen.hpp"

using namespace std;


Board::Board(int n)
{
    size = n;  //set the size
    board = vector<string>(n, string(n, '.'));  //initialize board vector with no Queens
}

void Board::place(int row)
{
    if (row == size)
    {
        config.push_back(board);  //if all Queens placed add board to final solutions 
        return;
    }

    Queen Q(row);   //set the row of the queen 
    for(int j = 0 ; j < size ; ++j)  //check which column position is safe
    {
        if(isSafe(row,j)){   //if safe 
            board[row][j] = 'Q';  //place the queen
            Q.setCol(j);   //set the column
            place(row+1);  //Place the next queen 
            board[row][j] = '.';  //if the next queen is not placed we need to change place for this queen
        }
    }
    
}

void Board::print()
{
    int count = 0;
    for (const auto& solution : config) 
    {
        cout << "Solution : " << count << endl;
        for (const string& row : solution)
            cout << row << endl;
       
        cout << "\n"; 
        count++;
    }
}


bool Board::isSafe(int row, int col)
{
    for(int j = 0 ; j < size ; ++j)  //check in columns
        if(board[row][j] == 'Q')
            return false;


    for(int i = 0 ; i < size ; ++i)  //check in rows
        if(board[i][col] == 'Q')
            return false;


    for(int i = row-1,j = col - 1 ; j >= 0 && i >=0 ;--i,--j)  //check in 1st diagonal
        if(board[i][j] == 'Q')
            return false;

    for(int i = row-1,j = col + 1 ; j < size && i >=0 ;--i,++j) //check in second diagonal
        if(board[i][j] == 'Q')  
            return false;

    return true;
}