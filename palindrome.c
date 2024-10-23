//C program to check a number whether it is palindrome or not.
#include <stdio.h>
int main()
{
    int rev=0,rmndr,t,n;
    printf("Enter the no : ");
    scanf("%d",&n);
    t = n;
    while (n>0)
    {
        rmndr = n%10;
        rev = rev*10 + rmndr;
        n = n/10;
    }
    
    if (t==rev)
    {
        printf("the no. is palindrome \n");
    }
    else
    {
        printf("the no. is not a palindrome \n");
    }
}

