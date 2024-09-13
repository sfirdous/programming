#include<stdio.h>

// a. Declare a pointer variable of type integer and assign NULL to it.
// b. Print the value of the pointer variable
// c. Assign the address of an integer variable to the pointer variable
// d. Print the value of the pointer variable

int main()
{
    int i = 10;
    int *ptr = NULL;

    printf("Value of null pointer Variable %d\n",ptr);
    ptr = &i;
    printf("Value of int pointer Variable %d\n",ptr);

}