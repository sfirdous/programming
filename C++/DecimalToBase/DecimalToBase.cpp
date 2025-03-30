#include "DecimalToBase.hpp"

DecimalToBase::DecimalToBase()
{
  base = 0;
  number = 0;
}

DecimalToBase::DecimalToBase(int b,int n)
{
    base = b;
    n = number;
}
    

bool DecimalToBase::convert()
{
    if (base < 2 || base > 36)
        return false; // Invalid base check

    if (number == 0) { 
        converted = "0"; // Special case for zero
        return true;
    }

    unsigned long quotient = number; // Ensure correct initialization
    converted = ""; // Clear previous results

    std::string temp;

    while (quotient > 0)
    {
        int remainder = quotient % base;

        if (remainder < 10)
            temp.push_back(remainder + '0');  // Convert to character '0'-'9'
        else
            temp.push_back(remainder - 10 + 'A');  // Convert to character 'A'-'Z'

        quotient /= base;
    }

    // Reverse the result
    converted = std::string(temp.rbegin(), temp.rend());

    return true;
}
