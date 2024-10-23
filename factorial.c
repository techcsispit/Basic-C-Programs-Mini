#include<stdio.h>
int main()
{
int n,a, fact;
fact = 1;
printf("\nEnter a number : ");
scanf("%d",&n);
while (n>0)
{
    fact = fact*n;
    n--;
}
printf("\n%d",fact);
return 0;
}