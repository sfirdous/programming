#include<stdio.h>

int main()
{
    int n,m;
    printf("Enter n and m: ");
    scanf("%d%d",&n,&m);
    int A[n][m];
    int v[n][m];

    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < m; c++)
        {
            printf("Enter [%d][%d]: ",r,c);
            scanf("%d",&A[n][m]);
        }
        
    }

    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < m; c++)
        {
            printf("Enter [%d][%d]: ",r,c);
            scanf("%d",&v[n][m]);
        }
        
    }

    for (int c = 0; c < m; c++)
    {
        for (int r = 0; r < n; r++)
        {
        
        }
        
    }


    
}