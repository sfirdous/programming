#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter n and m: ");
    scanf("%d%d",&n,&m);
    int mat[n][n];
    int sum = 0;
    for (int row = 0;row < n; ++row)
    {
        for (int col = 0; col < m; ++col)
        {
            scanf("%d",&mat[row][col]);      
        }
        
    }

    for (int row = 0;row < n; ++row)
    {
        for (int col = 0; col < m; ++col)
        {
            printf("%d\t",mat[row][col]);      
        }
        printf("\n");
    }
    
    //using for loop
    for (int row = 0; row < n; ++row)
    {
            sum += mat[row][(n-1)-row];
            printf("n-row [%d][%d]\n",row,(n-1)-row);
            // printf("Sum : %d\n",sum);

    }

    printf("Sum : %d\n",sum);

    //using while loop
    int row = 0,col = n-1;
    sum = 0;
    while (row < n && col >= 0)
    { 
        
        sum += mat[row][col];
        printf("row-col [%d][%d]\n",row,col);
        row++;
        col--;
       
    }

    printf("Sum : %d\n",sum);
    
    
}