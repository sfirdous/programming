#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter n and m: ");
    scanf("%d%d", &n, &m);
    int mat[n][m];

    for (int row = 0; row < n; ++row)
    {
        for (int col = 0; col < m; ++col)
        {
            scanf("%d", &mat[row][col]);
        }
    }

    for (int row = 0; row < n; ++row)
    {
        for (int col = 0; col < m; ++col)
        {
            printf("%d\t", mat[row][col]);
        }
        printf("\n");
    }

    int smallest = mat[0][0];
    for (int row = 0; row < n; ++row)
    {
        for (int col = 0; col < m; ++col)
        {
            
            if (smallest > mat[row][col])
            {
                smallest = mat[row][col];
            }
            
        }
    }

    printf("The smallest element is %d\n",smallest);
}