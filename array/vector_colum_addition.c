#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter n and m: ");
    scanf("%d%d", &n, &m);
    int A[n][m];
    int v[n][0];
    int B[n][m];

    printf("Entet Matrix A\n");
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < m; c++)
        {
            printf("Enter [%d][%d]: ", r, c);
            scanf("%d", &A[r][c]);
        }
    }

    printf("Enter vector v\n");
    for (int r = 0; r < n; r++)
    {

        printf("Enter [%d][0]: ", r);
        scanf("%d", &v[r][0]);
    }

    for (int c = 0; c < m; c++)
    {
        for (int r = 0; r < n; r++)
        {
            B[r][c] = v[r][0] + A[c][r];
        }
    }
 
    printf("Matrix B\n");
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < m; c++)
        {
            printf("%d\t", B[r][c]);
        }
        printf("\n");
    }
}