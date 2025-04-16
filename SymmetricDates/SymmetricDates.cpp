#include "SymmetricDates.hpp"
#include <sstream>
using namespace std;

SymmetricDates::SymmetricDates(int s, int e)
{
    startYear = s;
    endYear = e;
}

bool SymmetricDates::isPalindrome(const string &str)
{
    int s = 0;
    int e = str.size() - 1;
    while (s < e)
    {
        if (str[s] != str[e])
            return false;
        s++;
        e--;
    }
    return true;
}

bool SymmetricDates::isValidDate(int day, int month, int year)
{
    int DaysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 30, 31, 30, 31, 30};

    if (month == 2)
    {
        bool isLeap = (year % 400 == 0 && year % 100 != 0) || (year % 400 == 0);
        if (isLeap)
            return day <= 29;
    }

    return month >= 1 && month <= 12 && day >= 1 && day <= DaysInMonth[month - 1];
}

void SymmetricDates::printSymmetricDates()
{
    for (int y = startYear; y <= endYear; ++y)
    {
        for (int m = 1; m <= 12; ++m)
        {
            for (int d = 1; d <= 31; ++d)
            {
                if (!isValidDate(d, m, y))
                    continue;

                stringstream ss;

                ss << setw(2) << setfill('0') << d
                   << setw(2) << setfill('0') << m
                   << y;

                string date = ss.str();

                if (isPalindrome(date))
                {
                    cout << setw(2) << setfill('0') << d << "-"
                         << setw(2) << setfill('0') << m << "-"
                         << y << endl;
                }
            }
        }
    }
}