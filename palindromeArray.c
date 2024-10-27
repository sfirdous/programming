#include<stdio.h>
#include<stdlib.h>

void acceptArray(int n,int *nums)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&nums[i]);
    }
    
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int *nums = malloc(n*sizeof(int));

    int count = 0;

    acceptArray(n,nums);

    if(n%2 == 0)
    {
        for (int i = 0,j=n-1; j>=n/2,i < n/2; j--,i++)
        {
            if (nums[i] == nums[j])
            {
                count++;
            }
            
        }
        
    }else if(n%2 != 0)
    {
        for (int i = 0,j=n-1; j>n/2,i < n/2; j--,i++)
        {
            if (nums[i] == nums[j])
            {
                count++;
            }
            
        }
        
    }

    if(n/2 == count)
        printf("Array is Palindrome");
    else
         printf("Array is not Palindrome");
        
}