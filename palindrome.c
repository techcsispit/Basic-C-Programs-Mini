#include<stdio.h>
int main()
{
    int n;
    printf("enter the number to check wheter it is palindrome num or not");
scanf("%d",&n);
int rev;
int org=n;
while (n!=0)
{
    int i=n%10;
    rev=rev*10+i;
    n=n/10;



}
if(org==rev)
printf("the number is palindrome number");
else
printf("the number is not palindrome number");
}

