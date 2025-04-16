#include "SymmetricDates.hpp"
using namespace std;
int main()
{
    int sYear;
    int eYear;

    cout << "Enter Starting Year and Ending Year" << endl;
    cin >> sYear;
    cin >> eYear;

    SymmetricDates s(sYear,eYear);
    s.printSymmetricDates();


    return 0;
}