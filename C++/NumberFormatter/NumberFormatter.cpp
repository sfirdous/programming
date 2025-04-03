#include "NumberFormatter.hpp"

NumberFormatter::NumberFormatter()
{
    std::cout << "Pass number as arguments" << std::endl;
    exit(1);
}
    
NumberFormatter::NumberFormatter(float number)
{
 std::ostringstream oss;
 oss.precision(5);
 oss << std::flixed << number;

 if(number < 0)
    std::cout << "Please Enter a positive number" << std::endl;
    exit(1);

 std::string str = oss.str();
 size_t dot_p = str.find('.');

 if(dotp != std::string:npos)
 {
    integerPart = str.substr(0,dot_p);
    fractionalPart = str.substr(dot_p + 1);
 }
}

std::string NumberFormatter::formatter()
{
    std::string hashseq(5 - fractionalPart.length(),'#');
    return fractionalPart + hashseq + "." + integerPart;
}