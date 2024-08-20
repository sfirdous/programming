#include<stdio.h>

int main()
{
    
    
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
    } while (pass != correct_pass);
    
    
    
    
    
    
}