//C program  to find roots of a quadratic equation.
#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    printf("Enter the coefficient of x^2, x and constant respecitvly");
    scanf("%d %d %d",&a,&b,&c);
    int r1=(-b+sqrt(b*b-4*a*c))/(2*a);
    int r2=(-b-sqrt(b*b-4*a*c))/(2*a);
    printf("Roots are %d and %d",r1,r2);
    return 0;
}