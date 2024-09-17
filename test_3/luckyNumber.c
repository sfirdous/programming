#include<stdio.h>
#include<stdlib.h>

int main()
{
    int rows,cols;
    printf("Enter rows and cols of matrix: ");
    scanf("%d%d",&rows,&cols);
    // int **mat = (int*)malloc(rows*sizeof(int)); // using malloc;
    int **mat = calloc(rows,sizeof(int)); //using calloc
   
    for (int r = 0; r < rows; r++){
        mat[r] = calloc(cols,sizeof(int)); //using calloc
        if(mat[r] == NULL){
            printf("error\n");
            for (int  i = 0; i < rows; i++){
                free(mat[i]);
            }
            free(mat);
            exit(0);
        }
    }

    printf("Enter array elements\n");
    for (int r = 0; r < rows; r++){
        for (int c = 0; c < cols; c++){
            scanf("%d",&mat[r][c]);
        } 
    }

    int row_min, col_max = mat[0][0];
    for (int k = 0; k < rows; ++k){
        row_min = mat[k][0];
        for (int c = 0; c < cols ; ++c){
            if(mat[k][c] < row_min){
                row_min = mat[k][c];
            }
            for (int r = 0; r < rows; ++r){
                col_max = [0][c];
                if (col_max < mat[r][c]){
                    col_max = mat[r][c];
                }
                
            }
               
        }
        printf("%d\n",row_min);
            
    }
    
    
    

}