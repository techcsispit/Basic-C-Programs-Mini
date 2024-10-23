//C program to display simple calculator.
#include <stdio.h>

int sum(int, int);
int diff(int, int);
int product(int, int);
int div(int, int);
int mod(int, int);

int main(void)
{
    int a, b, z;
    printf("Enter 2 integers: ");
    scanf("%d %d", &a, &b);

    printf("Which operation do you want to perform?\nEnter \n0:+\n1:-\n2:*\n3:/\n4:%%\n");
    scanf("%d", &z);

    switch(z)
    {
        case 0:
        printf("The sum of %i and %i is %i\n", a, b, sum(a, b));
        break;
        case 1:
        printf("The difference of %i from %i is %i\n", b, a, diff(a, b));
        break;
        case 2:
        printf("The product of %i and %i is %i\n", a, b, product(a, b));
        break;
        case 3:
        printf("Dividing %i by %i gives %i\n", b, a, div(a, b));
        break;
        case 4:
        printf("Modding %i by %i gives %i\n", b, a, mod(a, b));
        break;
    }
}

int sum(int x, int y)
{
    return x+y;
}

int diff(int x, int y)
{
    return x-y;
}

int product(int x, int y)
{
    return x*y;
}

int div(int x, int y)
{
    return x/y;
}

int mod(int x, int y)
{
    return x%y;
}