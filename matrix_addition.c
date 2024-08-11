
#include <stdio.h>
#define max 10

int matrix_c[max][max];
void accept_matrix(int n,int m,int matrix[max][max])
{
    for(int i = 0; i < n;i++)
    {
         for(int j = 0;j < m;j++)
         {
               scanf("%d",&matrix[i][j]);
         }
    }
}

void display_matrix(int n,int m,int matrix[max][max])
{
     for(int i = 0; i < n;i++)
    {
         for(int j = 0;j < m;j++)
         {
               printf("%d\t",matrix[i][j]);
         }
         printf("\n");
    }
}

void matrix_addition(int n,int m, int matrix_a[max][max],
    int matrix_b[max][max]
    )
    {
          for(int i = 0; i < n;i++)
    {
         for(int j = 0;j < m;j++)
         {
               matrix_c[i][j] = matrix_a[i][j] + matrix_b[i][j];
         }
         
    }
    }
int main() {
    int matrix_a[max][max];
    int matrix_b[max][max];
   
    int n,m;
    printf("Enter number of rows and columns  ");
    scanf("%d%d",&n,&m);
    
    printf("Enter matrix A\n");
    accept_matrix(n,m,matrix_a);
    
    printf("Enter matrix B\n");
    accept_matrix(n,m,matrix_b);
    
    matrix_addition(n,m,matrix_a,matrix_b);
    
    display_matrix(n,m,matrix_c);
   
   

   

    return 0;
}