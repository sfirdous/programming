#include <iostream>
#include <iomanip>
class SymmetricDates
{
    private:
    int startYear;
    int endYear;

    public:
    SymmetricDates(int s,int e);
    bool isPalindrome(const std::string &str);
    bool isValidDate(int day,int month,int year);
    void printSymmetricDates();
};