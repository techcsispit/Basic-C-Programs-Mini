#include <stdio.h>
int main()
{
    int n,t,sum,l;
    printf("Enter a number:");
    scanf("%d",&n);
    sum=0;
    t=n;
    while(n>0)
    {
        l=n%10;
        sum=sum+(l*l*l);
        n=n/10;
    }
    if(t==n)
    {
        printf("Angstrom number.");
    }
    else
    {
        printf("NOT angstrom number");
    }
    return 0;
}
