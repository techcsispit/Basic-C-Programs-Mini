//C program to count number of digits in a number.
#include<stdio.h>
void main()
{
    int n,d=0;
    printf("enter any number:\n");
    scanf("%d",&n);
    while(n!=0)
    {
        d=d+1;  
        n=n/10;
    }
    printf("the number of digits is:%d\n", d);
}
