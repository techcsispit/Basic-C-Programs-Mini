//C program to count number of digits in a number
#include<stdio.h>
void main()
{
    int n, count=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    while(n>0)
    {
        n = n/10;
        count++;
    }
    printf("The number of digits are:%d\n", count);
}