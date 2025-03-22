#include <iostream>
#include <vector>
#include <string>

#ifndef BOARD_HPP
#define BOARD_HPP

class Board
{
private:
    std::vector<std::vector<std::string>> config;  //To store all possible solution's
    std::vector<std::string> board;  //To store the current solution
    int size; //Size of board
public:
    Board(int n ); //Parametrized Constructor
    void place(int row); //Fuction to place Queens
    void print();  //Function to print solutions
    bool isSafe(int row,int col); //To check if particular Queen is Safe

};

#endif