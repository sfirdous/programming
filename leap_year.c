
#include <stdio.h>

int main() {
    int year;
    printf("Enter Year: ");
    scanf("%d",&year);
    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                
            printf("\n%d is a Leap Year",year);
            }
        }
        printf("\n%d is a  Not Leap Year",year);
    }
   
    return 0;
}