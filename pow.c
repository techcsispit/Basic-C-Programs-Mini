#include <stdio.h>
#include <math.h>
int main()
{
    double x,r;
    double n;

    printf("Enter the x number: ");
    scanf("%lf", &x);

    printf("Enter the n number: ");
    scanf("%lf",&n);

    r = pow(n,x);

    printf("%.1lf^%.1f = %.2lf", x, n, r);

    return 0;
}