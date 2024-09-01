#include <stdio.h>
int main()
{
    int number, digit, number_sum=0;
    printf("Enter a number: ");
    scanf("%d", &number);

    while (number / 10 != 0)
    {
        while (number != 0)
        {
            digit = number% 10;
            number_sum += digit;
            // printf("%d\n", number_sum);
            number /= 10;
            // printf("%d\n", number);
        }
        number = number_sum;
        digit = 0;
        number_sum = 0;
        
    } 
    printf("%d\n", number);

        
    
}