#include <stdio.h>
#include <math.h>
int main()
{
    float x,r;
    float n;

    printf("Enter the x number: ");
    scanf("%f", &x);

    printf("Enter the n number: ");
    scanf("%f", &n);

    r = pow(x, n);

    printf("%.1f ^ %.1f = %.2f", x, n, r);

    return 0;
}