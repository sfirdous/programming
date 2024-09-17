#include<stdio.h>
int main()
{
    int *p = NULL;
    printf("p = %p\n",p);

    int i;
    p = &i;
    printf("p = %p\n",p);

}