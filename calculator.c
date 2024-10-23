//C program to display simple calculator.
#include<stdio.h>
int main() 
{
int a,b,c,d,e,f,g;
printf("enter any two numbers"); 
scanf("%d%d",&a,&b); 
c=a+b; 
d=a-b; 
e=a*b; 
f=a/b; 
g=a%b; 
printf("the sum is :"); 
printf("%d\n",c); 
printf("the difference is :"); 
printf("%d\n",d); 
printf("the product is :"); 
printf("%d\n",e); 
printf("the division is :"); 
printf("%d\n",f); 
printf("the modulus is :"); 
printf("%d\n",g); 
return 0;
}
