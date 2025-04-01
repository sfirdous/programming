#include <iostream>

class DecimalToBase{
    private:
    int base;
    int number;

    public:
    DecimalToBase();
    DecimalToBase(int b,int n);

    int getBase(){return this->base;}
    int getNumber(){return this->number;}

    void setBase(int b){this->base = b;}
    void setNumber(int n){this->number = n;}


    std::string convert();
};
