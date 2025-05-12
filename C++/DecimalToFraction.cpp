#include "DecimalToFraction.hpp"

int getDecimal()
{
    this->decimal = this->number - (int)this->number;
}

int getInt()
{
    this->integer = this->number - this->decimal;
}
