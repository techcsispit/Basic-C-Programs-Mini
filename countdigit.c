//C program to count number of digits in a number.
#include <stdio.h>

int main()
{
    int i, n, y;
    printf("Enter a number:");
    scanf("%d", &n);
    for (i = 1;; i++)
    {
        n = n / 10;
        if (n == 0)
        {
            break;
        }
    }
    printf("The number of digits is/are %d", i);
    return 0;
}