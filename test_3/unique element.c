#include <stdio.h>
#include<stdlib.h>

int main() {
   int n;
   printf("Enter size of nums: ");
   scanf("%d",&n);
   
   int *nums = calloc(n,sizeof(n));
   printf("Enter array elements\n");
   //using while loop
   int i = 0;
   while(i<n){
       scanf("%d",&nums[i]);
       i++;
   }
    

    return 0;
}