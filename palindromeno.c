//Palindrome of the number.
#include <stdio.h>
int main()
{
    int rev=0,rmndr,t,n;
    print("Enter the no :");
    scanf("%d",&n);
    t = n;
    while (n>0)
    {
        rmndr = n%10;
        rev = rev*10 + rmndr;
        n = n/10;
    }
    print("the reverse of this no. is %s",rev);
    if (t=rev)
    {
        print("the no. is palindrome %d\n",t);
    }
    else
    {
        print("the no. is not a palindrome %d\n",t);
    }
}
