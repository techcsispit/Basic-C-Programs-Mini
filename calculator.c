#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;
    printf("Enter Numbers to perform Operations\n");
    printf("Enter Number 1: ");
    scanf("%d", &a); // input 1
    printf("Enter Number 2: ");
    scanf("%d", &b); // input 2
    // all arithmetic operations
    printf("The ADDITION of numbers is : %d \n", a + b);
    printf("The SUBTRACTION of numbers is : %d \n", a - b);
    printf("The MULTIPLICATION of numbers is: %d \n", a * b);
    if (b = 0)
    {
        printf("Please enter NON-ZERO values.\n ");
    }
    else
    {
        printf("\nThe DIVISION of numbers is : %d\n", a / b);
    }
    printf("The MODULO of numbers is : %d\n", a % b);
    return 0;
}