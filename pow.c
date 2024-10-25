#include <stdio.h>
#include <math.h>
int main()
{
    double x,r;
    double n;
    printf("Enter the x number: ");
    scanf("%d", &x);

    printf("Enter the n number: ");
    scanf("%lf",&n);

    r= pow(x,n);
    printf("%.1d^%.1d = %.2d", x, n, r);
    return 0;
}