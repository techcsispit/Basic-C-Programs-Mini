#include <stdio.h>
long fact(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    else 
    {
        return n*fact(n-1);
    }
    // complete the function 
}
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    printf("%d\n",fact(n));
}
