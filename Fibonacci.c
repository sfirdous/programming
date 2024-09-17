
#include <stdio.h>

int main() {
    int n,n1 = 0,n2 = 1,fibo=0;
    printf("Enter the limit ");
    scanf("%d",&n);
    if(n== 0)
      printf("0\n");
    if(n==1)
      printf("1\n");
    printf("0\t1\t");
    for(int i = 0; i < n-2 ;i++)
    {
        fibo = n1 + n2;
        printf("%d\t",fibo);
        n1 = n2;
        n2 = fibo; 
    }
    return 0;
}