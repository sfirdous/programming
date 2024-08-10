
#include <stdio.h>

int main() {
    int a,b;
    printf("Enter Values of a and b ");
    scanf("%d %d",&a,&b);
    if(b!=0)
    {
        float quotient = a/b;
        int remainder = a%b;
        printf("Quotient: %.2f \t Reaminder : %d", quotient,remainder);
    }
    else {
        printf("Division by zero error\n");
    }

    return 0;
}