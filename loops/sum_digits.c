#include<stdio.h>
void main()
{
    int number,sum = 0;
    printf("Enter Number ");
    scanf("%d",&number);
    //while loop
    // while(number != 0){
    //     sum = sum + number%10;
    //     number = number/10;
    // }

    //for loop
    // for(int i = number; i !=0 ; i /= 10 )
    // {
    //     sum = sum + i%10;
    // }

    //do while loop
    do{
        sum = sum + number%10;
        number = number/10;
    }while(number != 0);
    
    printf("Sum of Digits of is %d\n",sum);

}