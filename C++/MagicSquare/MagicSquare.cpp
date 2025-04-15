#include "MagicSquare.hpp"
using namespace std;

MagicSquare::MagicSquare(int n)
{
    if (!(n % 2))
    {
        cout << "n should be odd" << endl;
        exit(1);
    }

    this->n = n;
    sqaure = vector<vector<int>>(n,vector<int>(n,0));
}

void MagicSquare::generate()
{
    int i = 0;
    int j = n/2;

    int num = 1;

    while(num <= n*n)
    {
        sqaure[i][j] = num++;
        int new_i = (i - 1 + n)%n;
        int new_j = (j + 1) % n;

        if(sqaure[new_i][new_j] != 0)
        {
            i = (i + 1)%n;
        }else{
            i = new_i;
            j = new_j;
        }
    }
}

void MagicSquare::display()
{
    for(auto r : sqaure)
        {for(auto val : r){
            cout << val << " ";}
        cout << "\n";}
        
}

