//C program to count number of digits in a number.
#include <stdio.h>

int main(){    
    int num;
    printf("enter the number: ");
    scanf("%d",&num);

    int digits = 0;
    while (num != 0)
    {
        digits++;
        num /= 10;
    }
    printf("the number of digits are : %d",digits);
    

    return 0;
}
