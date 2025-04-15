#include <iostream>
#include <vector>

class MagicSquare
{
private:
    int n;
    std::vector<std::vector<int>> sqaure;

public:
    MagicSquare(int n);
    void generate();
    void display();
   
};