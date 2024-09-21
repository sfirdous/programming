#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int rows, cols;
    int min_row, max_col;
    printf("Enter rows and cols of matrix: ");
    scanf("%d%d", &rows, &cols);
    // int **mat = (int*)malloc(rows*sizeof(int)); // using malloc;
    int **mat = calloc(rows, sizeof(int)); // using calloc

    for (int r = 0; r < rows; r++)
    {
        mat[r] = calloc(cols, sizeof(int)); // using calloc
        if (mat[r] == NULL)
        {
            printf("error\n");
            for (int i = 0; i < rows; i++)
            {
                free(mat[i]);
            }
            free(mat);
            exit(0);
        }
    }

    printf("Enter array elements\n");
    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < cols; c++)
        {
            scanf("%d", &mat[r][c]);
        }
    }

    int row_min, col_max = mat[0][0];
    for (int r = 0; r < rows; ++r)
    {
        for (int c = 0; c < cols; ++c)
        {
            min_row = mat[r][0];
            for (int i = 0; i < cols; i++)
            {
                if (min_row > mat[r][i])
                {
                    min_row = mat[r][i];
                }
            }

            max_col = mat[0][c];
            for (int i = 0; i < rows; i++)
            {
                if (max_col < mat[i][c])
                {
                    max_col = mat[i][c];
                }
                
            }

            if(max_col == min_row){
                printf("lucky: %d\n",min_row);
            }
        }
    }
}