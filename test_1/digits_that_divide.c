#include<stdio.h>
int main()
{
    int number,count=0,digit;
    printf("Enter a number: ");
    scanf("%d",&number);

    while (number != 0)
    {
        digit = number % 10;
        // printf("%d\n",digit);
        if(number % digit == 0){
            count++;
        }
        number = number / 10;
    }
    printf("%d\n",count);
    
}