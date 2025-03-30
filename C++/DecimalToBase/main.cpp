#include "DecimalToBase.hpp"
using namespace std;


int main()
{
    DecimalToBase d(16, 16);
    if (d.convert()) {
        std::cout << d.getConverted() << std::endl;
    }
    

    return 0;
}