//C program to display simple calculator.
#include<stdio.h>

int sum(int num1, int num2);
int sum(int num1, int num2)
{
    return num1 + num2;
}
int sub(int num1, int num2)
{
    return num1 - num2;
}
int prod(int num1, int num2)
{
    return num1 * num2;
}
int div(int num1, int num2)
{
    return num1 / num2;
}
int mod(int num1, int num2)
{
    return num1 % num2;
}

int main()
{
    int num1, num2, operator;
    

    printf("Enter two numbers:");
    scanf("%d %d", &num1, &num2);

    printf("Enter operator\n(1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n5 for remainder):");
    scanf("%d",&operator);

    if (operator == 1)
    {
        printf("The sum of %d and %d is %d.",num1, num2, sum(num1,num2));
    }
    else if (operator == 2)
    {
        printf("The subtraction of %d and %d is %d.",num1, num2, sub(num1,num2));
    }
    else if (operator == 3)
    {
        printf("The multiplication of %d and %d is %d.",num1, num2, prod(num1,num2));
    }
    else if (operator == 4)
    {
        printf("The division of %d and %d is %d.",num1, num2, div(num1,num2));
    }
    else if (operator == 5)
    {
        printf("The remainder of %d and %d is %d.",num1, num2, mod(num1,num2));
    }
    else
    {
        printf("Enter valid operator.");
    }
    
    return 0;
}