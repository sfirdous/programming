#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number to find the factorial\n");
    scanf("%d",&n);
    float fact = 1;
    for(int i = 1 ; i <= n ; i++)
    {
        printf("%d\t",i);
        fact = fact * i;
    }
    printf("\nFactorial is %.2f\n",fact);
}
