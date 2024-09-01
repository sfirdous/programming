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
            // printf("%d\n", digit);
            number_square += digit * digit;
            number /= 10;
            // printf("%d\n", number);
        }
        // printf("%d\n", number_square);
        number = number_square;
        number_square = 0;
        digit = 0;
    }
    // printf("%d\n", number_square);
    if(number == 1)
        printf("true");
    else 
        printf("false");
}