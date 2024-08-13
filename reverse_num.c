#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    int reverse_num =0;
    while(n!=0)
    {
      reverse_num = (reverse_num*10) + n % 10;
      n = n/10; 
    }

    printf("Reverse Number is %d\n",reverse_num);
}