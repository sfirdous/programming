#include <iostream>

#ifndef QUEEN_HPP
#define QUEEN_HPP

class Queen
{
    private:
    int row;  //row position
    int col;  //col position

    public:
    Queen(int r);  //Constructor 
    void setCol(int c); //set column position

};

#endif