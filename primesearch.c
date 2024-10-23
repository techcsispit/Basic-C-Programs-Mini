//To check the n no. is a prime no. or not
#include <stdio.h>
int main()
{
    int n,i,k=0,c;
    printf("Enter a number");
    scanf("%d",&n);
    for ( i = 2; i <=n/2; i++)
    {
        c=n%i;
        if(c==0)
        {k=1;}
    }
    if (k==0)
    printf("%d is a prime number",n);
    else
    printf("%d is not a prime number",n); 
}