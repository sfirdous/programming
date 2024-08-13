
#include <stdio.h>

int main() {
   
    int a,b;
    printf("Enter the values for a and b\n");
    scanf("%d %d",&a,&b);
    printf("a : %d and b : %d\n",a,b);
    a = a - b;
    b = a + b;
    a = b - a;
    printf("a : %d and b : %d\n",a,b);
    return 0;
}