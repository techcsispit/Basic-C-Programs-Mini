#include <stdio.h>
#define p printf(
#define f )
#define s scanf(
void gcd(int a,int b)
{
    int gcd;
    for(int i =1; i<a && i<b; i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd = i;
        }
    }
    p"The gcd of %i and %i is %i.\n", a, b, gcd f;
}
int main()
{
    int a,b;
    p"Enter the number for a :"f;
    s"%d",&a f;
    p"Enter the number for b :"f;
    s"%d",&b f;
    gcd(a, b);
    return 0;
}
