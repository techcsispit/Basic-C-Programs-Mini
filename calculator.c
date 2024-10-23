#include<stdio.h>
int main()
{
 int a,b;
 printf("Enter two numbers:");
 scanf("%d %d",&a,&b);
 printf("Addition is %d\n",(a+b));
 
 printf("Subtraction is %d\n",(a-b));
 printf("Multiplication is %d\n",(a*b));
 printf("Division is %d\n",(float)(a/b));
 return 0;
}