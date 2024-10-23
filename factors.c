//C program to find factors of any inputted number.
#include<stdio.h>
void main()
{
    int n,i,temp;
    printf("enter a number");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        temp=n%i;
        if(temp==0)
        {
            printf("%d",i);
            printf(",");
        }
    }
    printf("these are the factors.");
} 