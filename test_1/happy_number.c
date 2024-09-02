#include <stdio.h>
int main()
{
    int number, digit, number_square = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    while (number / 10 != 0)
    {
        
        while (number != 0)
        {
            digit = number % 10;
           
            number_square += digit * digit;
            number /= 10;
            
        }
    
        number = number_square;
        number_square = 0;
        digit = 0;
    }
  
    if(number == 1)
        printf("true");
    else 
        printf("false");
}