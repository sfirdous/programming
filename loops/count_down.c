#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n ");
    scanf("%d",&n);
    //for loop
    // for(int i = n ; i > 0 ; --i)
    // {
    //     printf("%d\t",i);
    // }

    //while loop
    // int i = n;
    // while(i>0)
    // {
    //     printf("%d ",i);
    //     --i;
    // }

    //do while loop
    int i = n+1;
    do{
        printf("%d ",i);
        --i;
    }while(i > 0);
    return 0;
}