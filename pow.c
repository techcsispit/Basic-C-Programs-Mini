#include <stdio.h>
#include <math.h>
int main()
{
    double x,r;
    int n;

    printf("Enter the x number: ");
    scanf("%d", &x);

    printf("Enter the n number: ");
    scanf("%d",&n);

    r= pow(x,n);

    printf("%.1d^%.1d = %.2d", x, n, r);
    return 0;
}