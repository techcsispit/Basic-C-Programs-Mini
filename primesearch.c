//To check the n no. is a prime no. or not
#include <stdio.h>
int main()
{
    int i,n,flag;
    flag=0;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n==1)
    {
        printf("Neither prime nor compostie");
    }
    else
    {
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("The number %d is prime.",n);
    }
    else
    {
        printf("The numbe is not prime umber.");
    }
    }
    return 0;
}