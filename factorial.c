#include <stdio.h>
long fact(int n)
{
    int fact=1;
    while(n>0)
    {
        fact=fact*n;
        n--;
    }
    return fact;
    // complete the function 
}
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    printf("%d\n",fact(n));
}