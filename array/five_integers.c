#include<stdio.h>

int main()
{
    int n = 5;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element: ",i+1);
        scanf("%d",&array[i]);      
    }


    printf("Elements of array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d Element: %d\n",i+1,array[i]);
    }
    
}