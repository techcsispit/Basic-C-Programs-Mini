#include <stdio.h>
#define p printf(
#define f )
#define s scanf(
void gcd(int a,int b)
{
    int high = a;
    if(b>a) high = b;

    for (int i = high/2;i>0;i-- ){
        if(b%i==0 && a%i == 0){
            p"the gcd is %d\n",i f;
            break;
        }
    }
    
}
int main()
{
    int a,b;
    p"Enter the number for a :"f;
    s"%d",&a f;
    p"Enter the number for b :"f;
    s"%d",&b f;
    gcd(a, b);
}
