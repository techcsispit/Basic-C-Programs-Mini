//check palindrome or not
#include <stdio.h>

int main()
{   
    int n,i,rem,sum=0,t1;
    printf("Enter a number");
    scanf("%d",&n);
    t1=n;
    while (n!=0)
    {
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    if(t1==sum)
    printf("%d is a palindrome",t1);
    else
    printf("%d is not a palindrome",t1);
    return 0;
}


