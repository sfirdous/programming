#include<stdio.h>

int main()
{
    int i = 10;
    int *p = &i;
    printf("i = %d p = %d \n",i,p);

    printf("addres of i using & %d\n",&i); 
    printf("Address of pointer variable : %d\n",&p);

    ++*p;
    printf("i = %d p = %d \n",i,p);

}