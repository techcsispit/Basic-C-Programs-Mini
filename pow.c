#include <stdio.h>
#include <math.h>
int main()
{
    double x,r;
    int n;

    printf("Enter the x number: ");
    scanf("%lf", &x);

    printf("Enter the n number: ");
    scanf("%d",&n);

    r= pow(n,x);

    printf("%.1f^%.1d = %.2lf", x, n, r);

    return 0;
}