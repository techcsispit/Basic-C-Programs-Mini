//C program to count number of digits in a number.
#include<stdio.h>


int main()
{
    int n;
    printf("enter a number: \n");
    scanf("%d",&n);
    int digits = 0;
    while(n>0)
    {
        n = n/10;
        digits++;
    }
printf("The number of digits are :%d\n", digits);
return 0;
}
