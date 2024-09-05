#include <stdio.h>
#include<stdbool.h>
bool flowerbed(int flowerbed[],int n)
{
}
int main()
{
    int n;
    printf("Enter the size of flowerbed: ");
    scanf("%d", &n);

    int flowerbed[n];

    for (int i = 0; i < n; ++i)
    {
        printf("Flower : 1 \t No Flower : 0 ");
        scanf("%d",&flowerbed[i]);
    }

    printf("\n");
    for (int i = 0; i < n; ++i)
    {
        printf("%d\t",flowerbed[i]);
    }
}