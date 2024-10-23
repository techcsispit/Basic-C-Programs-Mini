//C program to check a number whether it is palindrome or not.
#include<stdio.h>
void main()
{
int n,rev=0,r,pal;
printf("Enter any integer number\n");
scanf("%d", &n);
pal=n;
while(n!=0)
{
 r=n%10;
 rev=rev*10+r;
 n=n/10;
 }
 if(rev==pal)
 printf("The given number is palindrome\n");
 else
 printf("The given number is not palindrome\n");
}
