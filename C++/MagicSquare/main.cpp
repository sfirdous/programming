#include "MagicSquare.hpp"
using namespace std;



int main()
{
    int n;
    cout << "Enter n" << endl;
    cin >> n;

    MagicSquare m(n);
    m.generate();
    m.display();

    return 0;

}