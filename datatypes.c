#include<stdio.h>
void main()
{
    printf("short int : %d\n",sizeof(short int)); //%hd
    printf("unsigned short int : %d\n",sizeof(unsigned short int)); //%hu
    printf("int : %d\n",sizeof(int)); //%d
    printf("unsigned int : %d\n",sizeof(unsigned int)); //%u
    printf("long int : %d\n",sizeof(long int)); //%ld
    printf("unsigned long int : %d\n",sizeof(unsigned long int)); //%lu
    printf("long long int : %d\n",sizeof(long long int)); //%lld
    printf("unsigned long long int : %d\n",sizeof(unsigned long long int)); //%llu
    printf("char : %d\n",sizeof(char)); //%c
    printf("unsigned char : %d\n",sizeof(unsigned char)); //%c
    printf("float : %d\n",sizeof(float)); //%f
    printf("double : %d\n",sizeof(double)); //%lf
    printf("long double : %d\n",sizeof(long double)); //%Lf
}