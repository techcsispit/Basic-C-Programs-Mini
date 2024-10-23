//C program to check a number whether it is palindrome or not.
#include<stdio.h>
int main()
{
    int n,t,l;
    printf("Enter any number:");
    scanf("%d",&n);
    int rev=0;
    t=n;
    while(n>0)
    {
        l=n%10;
        rev=rev*10+l;
        n=n/10;
    }
    if(t==rev)
    {
        printf("Palindrome");
    }
    else
    {
        printf("NOT palindome");
    }
}
