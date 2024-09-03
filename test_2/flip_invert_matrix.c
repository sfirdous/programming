#include<stdio.h>
int main()
{
    int image[3][3] = {{1,1,0},{0,1,1},{0,0,1}};
    int flipimage[3][3];
    int temp;

    printf("Original Matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",image[i][j]);
        }
        printf("\n");
        
    }

    for (int i = 0; i < 3; ++i)
    {
       for (int j = 2,k=0; k<3,j >= 0; --j,++k)
       {
            flipimage[i][k] = image[i][j];
       }
       
    }

    printf("Flipped Matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",flipimage[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if(flipimage[i][j] == 1)
                flipimage[i][j] = 0;
            else
                flipimage[i][j] = 1;    
        }
        
    }

    printf("Inverted  Matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",flipimage[i][j]);
        }
        printf("\n");
    }
    
}