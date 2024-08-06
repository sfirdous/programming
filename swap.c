#include<stdio.h>
void main()
{
    int a = 10,b = 20,c;
    printf("Variables before Swapping\na : %d \t b : %d",a,b);
    c = a;
    a = b;
    b = c;
    printf("\nVariables after Swapping\na : %d \t b : %d",a,b);

}