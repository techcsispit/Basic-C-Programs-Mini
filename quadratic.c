// C program  to find roots of a quadratic equation.
#include <stdio.h>

int main()
{
    int a, b, c;
    float r1, r2;
    printf("Enter values of a, b, c in ax2 + bx + c =0 : ");
    scanf("%d %d %d", &a, &b, &c);

    float x = b * b - 4 * a * c;
    if (x >= 0)
    {
        int y = pow(x, 0.5);
        r1 = ((-1 * b) + y) / (2 * a);
        r2 = ((-1 * b) - y) / (2 * a);
        printf("Roots are %f and %f", r1, r2);
    }
    else
    {
        printf("It has non real roots  ");
    }

    return 0;
}