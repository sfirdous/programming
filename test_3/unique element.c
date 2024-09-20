#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main() {
   int n;
   bool once = false;
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
   
   int j = 0;
   int k;
   while(j<n){
       k = 0;
       while(k<n){
           if(j != k && nums[j]!=nums[k]){
              once= true;
              break;
           }
           k++;
       }
       if(once){
           break;
       }
       j++;
   }
   
   if(once){
       printf("%d\n",nums[k]);
   }
   


    return 0;
}