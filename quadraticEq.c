#include<stdio.h>
#include<math.h>
void main()
{
    int a = 1,b = -5,c=6;
    double discriminant , root1,root2;
    
    discriminant = b * b - 4 * a * c;

    root1 = (-b + sqrt(discriminant)) / (2 * a);
    root2 = (-b - sqrt(discriminant)) / (2 * a);
    printf("root1 = %.2lf and root2 = %.2lf",root1,root2);
}