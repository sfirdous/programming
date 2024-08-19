#include<stdio.h>
int main()
{
    int n,sum =0;
    printf("Enter n ");
    scanf("%d",&n);
    //for loop
    // for (int i = 0; i < n; ++i)
    // {
    //     if(i%2 == 0){
    //         sum = sum + i;
    //     }
    // }

    //while loop
    // int i =0;
    // while(i<n){
    //     if(i%2 == 0)
    //     {
    //         sum = sum+i;
    //     }
    //     ++i;
    // }

    //do while
    int i = 0;
    do{
       if(i%2 == 0){
        sum = sum + i;
       }
       
       ++i;
    }while(i<n);
    printf("Sum of Even numbers upto %d is %d\n",n,sum);
    
}