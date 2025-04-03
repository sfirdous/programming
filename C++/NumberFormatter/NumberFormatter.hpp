#include <iostream>
#include <string>
#include <sstream>

class NumberFormatter{
    private:
    std::string integerPart;
    std::string fractionalPart;

    public:
    NumberFormatter();
    NumberFormatter(float number);

    std::string formatter();
}