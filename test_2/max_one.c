#include<stdio.h>

int main()
{

   
    int mat[3][3] = {{0,0,0},{0,0,1},{0,1,1}};
    int row,count,max_row,max_count = 0;
    for (int i = 0; i < 3; ++i)
    {
        row = i;
        count = 0;
        for (int j = 0; j < 3; ++j)
        {
            if (mat[i][j] == 1)
            {
                count++;
            }
            
        }

        if (count > max_count)
        {
            max_row = row;
            max_count = count;
        }
    }

    printf("[%d,%d]\n",max_row,max_count);
    
}