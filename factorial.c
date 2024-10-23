#include <stdio.h>

int fact(int num);
int fact(int num)
{
    if(num==0 || num==1)
    {
        return 1;
    }
    else
    {
        return fact(num-1)*num;
    }
}
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    int factorial = fact(num);
    printf("Factorial of %d is %d." ,num, factorial);
    return 0;
}