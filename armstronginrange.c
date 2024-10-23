/*C program to display armstrong number
between 1 to 1000*/
#include <stdio.h>
int main()
{
    int n,t,sum,l;
    t=n;
    int i;
    for(i=0;i<=1000;i++)
    {
        t=i;
    while(i>0)
    {
        l=i%10;
        sum=sum+(l*l*l);
        i=i/10;
    }
    if(t==sum)
    {
        printf("%d is an Angstrom number.\n",i);
    }
    sum=0;
    }
    return 0;
}


