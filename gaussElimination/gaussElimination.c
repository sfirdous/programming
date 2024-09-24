#include <stdio.h>
#include <stdlib.h>


void accept_mat(int **mat,int n,int m){
    printf("\nEnter matrix Elements: ");
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < m; c++)
        {
            scanf("%d",&mat[r][c]);
        }
        
    }
    
}

void display_mat(int **mat,int n,int m){
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < m; c++)
        {
            printf("%d ",mat[r][c]);
        }
        printf("\n");
    }
}
int main()
{
    int n, m;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &n, &m);

    int **A = calloc(n, sizeof(n));
    for (int r = 0; r < n; r++)
    {
        A[r] = calloc(m, sizeof(m));
        if (A[r] == NULL)
        {
            printf("error");
            for (int i = 0; i < n; i++)
            {
                free(A[i]);
            }

            free(A);
        }
    }

    accept_mat(A,n,m);
    display_mat(A,n,m);

    return 0;
}