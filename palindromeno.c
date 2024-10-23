//Palindrome of the number.
#include <stdio.h>
int main()
{
    int rev=0,rmndr,t,n;
    printf("Enter the no: ");
    scanf("%d",&n);
    t = n;
    while (n>0)
    {
        rmndr = n%10;
        rev = rev*10 + rmndr;
        n = n/10;
    }
    printf("the reverse of this number is %d\n",rev);
    if (t==rev)
    {
        printf("the number is palindrome %d\n",t);
    }
    else
    {
        printf("the number is not a palindrome %d\n",t);
    }
    return 0;
}
