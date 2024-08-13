#include<stdio.h>
void main()
{
    int intNumber = 5;
    float floatNumber = 1.123456789;
    //using two print statement
    printf("Integer : %d\n",intNumber);
    printf("Float : %.7f\n",floatNumber);
    //using one print statement
    printf("Integer : %d\tFloat : %.7f\n",intNumber,floatNumber);
}