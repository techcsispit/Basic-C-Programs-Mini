#include<stdio.h>
int main()
{
    int a,i;
    int fact=1;
    printf("Enter a number:");
    scanf("%d",&a);
    for(i=a;i>0;i--)
    {
        fact=fact*i;
    }
    printf("Factorail is %d",fact);
}