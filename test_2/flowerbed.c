#include <stdio.h>
#include<stdbool.h>
bool flowerbed(int flowerbed[],int n,int new_f)
{
    for (int i = 0; i < n; ++i)
    {
        if (flowerbed[i] == 0)
        {
            bool left;
            bool right;
            if(i == 0 || flowerbed[i-1] == 0){
                left = true;
            }
            if (i == n || flowerbed[i+1]){
                right = true;
            }
            
            
        }
        
    }
    
}
int main()
{
    int n,new_f;
    printf("Enter the size of flowerbed: ");
    scanf("%d", &n);

    int flowerbed[n];

    for (int i = 0; i < n; ++i)
    {
        printf("Flower : 1 \t No Flower : 0 ");
        scanf("%d",&flowerbed[i]);
    }

    printf("Enter number of new flowers to be plotted: ");
    scanf("%d",&new_f);



    printf("\n");
    for (int i = 0; i < n; ++i)
    {
        printf("%d\t",flowerbed[i]);
    }
}