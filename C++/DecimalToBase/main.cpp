#include "DecimalToBase.hpp"
using namespace std;


int main()
{
    DecimalToBase d(16, 16);
    string asnwer = d.convert();

    cout << asnwer << endl;
    

    return 0;
}