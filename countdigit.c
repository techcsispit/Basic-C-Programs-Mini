//C program to count number of digits in a number.
#include <stdio.h>
int main()
{
    int n,c;
    printf("Enter a number:");
    scanf("%d",&n);
    c=0;
    while(n>0)
    {
        n=n/10;
        c++;
    }
    printf("The number of digits are:%d",c);
    return 0;
}