#include <stdio.h>
#include<stdlib.h>

int main() {
   int n;
   printf("Enter size of nums: ");
   scanf("%d",&n);
   
   int *nums = calloc(n,sizeof(n));
   printf("Enter array elements\n");
   for(int i = 0; i< n;++i){
       scanf("%d",&nums[i]);
   }
    

    return 0;
}