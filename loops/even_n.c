#include<stdio.h>
int main()
{
    int n;
    printf("Enter n ");
    scanf("%d",&n);

    //for loop
    // for(int i = 1;i<=n;++i)
    // {
    //     if (i%2 == 0)
    //     {
    //         printf("%d\t",i);
    //     }
        
    // }

    //

    //while loop
    // int i = 0;
    // while(i < n)
    // {
    //     // printf("Entered while loop\n");
    //     if(i%2 == 0)
    //     {
    //         printf("%d ",i);
    //     }
    //     ++i;
    // }

    //do while loop
    int i = 1;
    do{
       if(i % 2 ==0)
       {
        printf("%d ",i);
       } 
       ++i;
    }while(i < n);
    return 0;
}