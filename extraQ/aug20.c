#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main()
{
    /**### Easy
    // 1. **Print numbers from 1 to 10 using a `for` loop.**
    for(int i = 1; i<10;++i)
    {
        printf("%d\n",i);

    }


    // 2. **Write a `while` loop that prints the first 5 natural numbers.**
    int n = 1;
    while (n <= 5)
    {
        printf("%d\n",n);
        ++n;
    }

    // 3. **Create a `do-while` loop that prints "Welcome" once.**
    do{
        printf("Welcome\n");
    }while(n != 1);

    // 4. **Write a program to find the sum of integers from 1 to 10 using a `for` loop.**
    int sum =0;
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }
    printf("%d\n",sum);

    // 5. **Use a `while` loop to count down from 10 to 1.**
    int n = 10;
    while (n >= 1)
    {
        printf("%d\n",n);
        --n;
    }

    // 6. **Print the first 10 multiples of 3 using a `for` loop.**
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n",3*i);
    }

    // 7. **Create a `do-while` loop that keeps asking for a integer-password until the correct one is entered.**
    int correct_pass = 100042;
    int pass;
    do
    {
        printf("Enter Password: ");
        scanf("%d",&pass);
    } while (pass != correct_pass);**/

    // ### Medium
    // 8. **Write a `for` loop to print a multiplication table for the number 5 (i.e., 5x1, 5x2, ..., 5x10).**
    // for (int  i = 1; i <= 10; i++)
    // {
    //     printf("5 X %d = %d\n",i,5*i);
    // }

    // 9. **Use a `while` loop to calculate the factorial of a given number.**
    // int num;
    // printf("Enter Number: ");
    // scanf("%d",&num);
    // int factorial = 1;
    // while(num > 1)
    // {

    //    factorial *= num;
    //    --num;
    //    printf("%d\t",factorial);

    // }
    // printf("Factorial %d\n",factorial);

    // 10. **Create a `do-while` loop that prompts the user for input and prints the input until the user enters "111".**
    // int input;
    // do
    // {
    //     printf("Enter Input: ");
    //     scanf("%d",&input);
    // } while (input != 111);

    // 11. **Write a program to find the sum of all even numbers between 1 and 50 using a `for` loop.**
    // int sum = 0;
    // for (int i = 1; i <= 50; i++)
    // {
    //     if(i%2 == 0)
    //        sum += i;
    // }
    // printf("Sum %d\n",sum);

    // 12. **Use a `while` loop to print the Fibonacci sequence up to the 10th term.**
    // int fibo = 0,n1 = 0,n2 = 1,nth = 10,n=0;
    // printf("0\t1\t");
    // while (n < nth - 2)
    // {
    //     fibo = n1+n2;
    //     printf("%d\t",fibo);
    //     n1 = n2;
    //     n2 = fibo;
    //     ++n;
    // }

    // 13. **Create a program that prints a triangle pattern of stars using nested `for` loops.**
    
    int sum = 0;
    for(int i = 0 ; i < 3 ; ++i){
        sum =4;
        for (int j = 0; j < 5; ++j)
        {    sum++;
             if(i+j == sum){
                printf("*");
             }else{
                printf(" ");
             }
        }
        
        printf("\n");
        
        
    }

    // 14. **Write a `for` loop that prints the first 10 terms of the series 2, 4, 8, 16, ... (powers of 2).**
    // int power = 2;
    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("%d\t",power);
    //     power *= 2;
    // }

    // 15. **Use a `do-while` loop to repeatedly ask the user to enter a number until the number is greater than 100.**
    // int input;
    // do
    // {
    //     printf("Enter Number: ");
    //     scanf("%d",&input);
    // } while (input < 1);

    // ###Hard
    // 1. **Use nested `for` loops to create a program that generates Pascal’s triangle up to a specified number of rows.**

    // 2. **Write a program using a `while` loop to find the nth prime number.**
    // int nth;
    // printf("Enter n: ");
    // scanf("%d",&nth);
    // int flag = 1;
    // int number = 2;
    // while(number <= nth)
    // {
    //     int i = 2;
    //     while(i <= number)
    //     {
    //         if (number % i == 0)
    //         {
    //             flag = 0;
    //             break;
    //         }
            
    //     }
    //     printf("%d",number);
    //     ++number;
    // }

    // 3. **Write a `do-while` loop that simulates rolling a pair of dice until a double (same number on both dice) is rolled.**
    // int dice1;
    // int dice2;
    // do{

    // }while(dice1 != dice2);
}