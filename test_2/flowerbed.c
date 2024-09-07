#include <stdio.h>
#include <stdbool.h>
bool plot_flowers(int flowerbed[],int n, int new_f)
{
    
    for (int i = 0; i < n; ++i)
    {
        bool left = false;
        bool right = false;
        if (flowerbed[i] == 0)
        {
            if (i == 0 || flowerbed[i - 1] == 0){
                left = true;
            }
            if (i == n - 1 || flowerbed[i + 1] == 0){
                right = true;
            }
            if (left && right)
            {
                flowerbed[i] = 1;
                new_f--;
            }
        }
    }
    return new_f;
}
int main()
{
    int n, new_f;
    printf("Enter the size of flowerbed: ");
    scanf("%d", &n);

    int flowerbed[n];

    for (int i = 0; i < n; ++i)
    {
        printf("Flower : 1 \t No Flower : 0 ");
        scanf("%d", &flowerbed[i]);
    }

    printf("Enter number of new flowers to be plotted: ");
    scanf("%d", &new_f);

    printf("\n");
    for (int i = 0; i < n; ++i)
    {
        printf("%d\t", flowerbed[i]);
    }
     printf("\n");

    bool plotted = plot_flowers(flowerbed, n, new_f);
    if (plotted){
        printf("%d\n",plotted);
    }
    else{
         printf("%d\n",plotted);
    }

    for (int i = 0; i < n; ++i)
    {
        printf("%d\t", flowerbed[i]);
    }
}