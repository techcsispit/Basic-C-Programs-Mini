//To check the n no. is a prime no. or not
#include <stdio.h>
int main()
{
    int n, i, count=0;
    printf("Enter a number:");
    scanf("%d", &n);
    if(n<2)
    {
        count = 1;
    }
    for(i = 2; i<=n/2; i++)
    {
        if(n%i==0)
        {
           count++;
           break;
        }
    }
    if(count>0)
    {
        printf("Given number is not prime\n");
    }
    else
    {
        printf("Given number is prime");
    }
}