#include <stdio.h>
#include <math.h>
int main()
{
   int n,sum=0,r,a,d=0,b,x;
    printf("enter any number:");
    scanf("%d",&n);
    a=n;
    b=a;
    while(n!=0)
    {
        r=n%10;
        d=d+1;  
        n=n/10;
    }
    while(a!=0)
    {
        x=a%10;
        sum=sum + pow(x,d);
        a=a/10;
    }
    if(b==sum)
        printf("yes this number is an amstrong number\n");
    else
        printf("no this number is not an amstrong number\n");
}
 // complete the code//
