#include<stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int mat[n][n];
    int sum = 0;
    for (int row = 0;row < n; ++row)
    {
        for (int col = 0; col < n; ++col)
        {
            scanf("%d",&mat[row][col]);      
        }
        
    }

    for (int row = 0;row < n; ++row)
    {
        for (int col = 0; col < n; ++col)
        {
            printf("%d\t",mat[row][col]);      
        }
        printf("\n");
    }
    
    for (int row = 0; row < n; ++row)
    {
            sum += mat[row][(n-1)-row];
            printf("n-row [%d][%d]\n",row,n-row);
            printf("Sum : %d\n",sum);

    }

    printf("Sum : %d\n",sum);
    
}