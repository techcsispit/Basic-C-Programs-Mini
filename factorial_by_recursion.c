#include<stdio.h>
int f=1;
int factorial(int n)
{
    if(n!=0)
    {
        factorial(n-1);
        f=f*n;
    }
    return f;
}
int main()
{
int n,a;
printf("\nEnter a number : ");
scanf("%d",&n);
a=factorial(n);
printf("\n%d",a);
return 0;
}