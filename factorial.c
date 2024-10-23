#include<stdio.h>
int main()
{
int n,a, fact;
printf("\nEnter a number : ");
scanf("%d",&n);
while (n>0)
{
    fact = fact*n;
    n--;
}
printf("\n%d",a);
return 0;
}