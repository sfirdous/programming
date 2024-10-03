ii#include <stdio.h>
#include <stdlib.h>

void accept_mat(int **mat, int n, int m) //function to accept matrix
{
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < m; c++)
        {
            scanf("%d", &mat[r][c]);
        }
    }
}

void display_mat(int **mat, int n, int m) //function to display matrix
{
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < m; c++)
        {
            printf("%d ", mat[r][c]);
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
    for (int r = 0; r < n; r++)//dynamically allocating memory for matrix
    {
        A[r] = calloc(m + 1, sizeof(m));
        if (A[r] == NULL)
        {
            printf("error");
            for (int i = 0; i < n; i++)
            {
                free(A[i]);
            }

            free(A);
            exit(0);
        }
    }

    printf("\nEnter matrix: ");
    accept_mat(A, n, m);
    display_mat(A, n, m);

    int pivot;
    for (int r = 0; r < n; r++)
    {
        pivot = A[r][r];
        if(pivot != 1){
            for (int c = 0; c < m; c++)
            {
                A[r][c] = A[r][c] / pivot;
            }
        }

        for (int r1 = r+1; r1 < n; r1++)
        {
            int e = A[r1][r];
            for (int c = r; c < m; c++)
            {
                A[r1][c] = A[r1][c] - r*A[r][c];
            }
            
        }
        
    }
    
    display_mat(A, n, m);

    int ans[n] = {0};
    //back substitution 
    for(int row = n-1 ; row >=0 ; ++row){

        ans[row] = A[row][m-1];
        for(int col = 0 ; col < m; ++col){
            ans[row] -= A[row][col]*ans[col]; 
        }
    }
    return 0;

}