#include "DecimalToBase.hpp"

DecimalToBase::DecimalToBase()
{
  base = 0;
  number = 0;
}

DecimalToBase::DecimalToBase(int b,int n)
{
    base = b;
    number = n;
}
    

std::string DecimalToBase::convert()
{
    if (base < 2 || base > 36)
        return "Invalid Base"; // Invalid base check

    if (number == 0) {  // Special case for zero
        return "0";
    }

    std::string result = ""; 
    int temp = number;
    const char digits[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    while (temp > 0)
    {
        result = digits[temp % base] + result;

        temp /= base;
    }


    return result;
}
