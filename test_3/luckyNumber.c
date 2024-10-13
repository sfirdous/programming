#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void matrixAllocation(int **mat, int rows, int cols)
{

    for (int i = 0; i < rows; ++i)
    {
        mat[i] = calloc(cols, sizeof(int));
    }
}

void matrixDeallocation(int **mat, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        free(mat[i]);
    }
    free(mat);
}

void matrixAccept(int **mat, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}

void displayLucky(int **mat, int rows, int cols)
{
}

int main()
{
    int rows, cols;

    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &rows, &cols);

    int **mat = (int **)malloc(rows * sizeof(int));

    matrixAllocation(mat, rows, cols);
    printf("Enter matrix\n");
    matrixAccept(mat, rows, cols);
    // displayLucky(mat,rows,cols);


    int min,max;
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            min = max = mat[i][j];
            for (int k = 0; k < cols ; k++)
            {
                if (mat[i][k] < min)
                    min = mat[i][k];
                // printf("%d\t", min);
            }

            for (int l = 0; l < rows; l++)
            {
                if (mat[l][j] > max)
                    max = mat[l][j];
                // printf("%d\n", max);
            }

            if (min == max)
                printf("lucky %d", min);
        }
    }
}