#include <math.h>
#include <stdio.h>

int prime(int x)
{
    int d = 0;
    if (x != 1)
    {
        for (int i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                d = d + 2;
                return d;
            }
            else
            {
                d = 0;
            }
        }
    }
    else
    {
        return 1;
    }
    return d;
}

int main()
{
    int n;
    printf("Enter a number to check PRIME or NON-PRIME : ");
    scanf("%d", &n);

    int y = prime(n);

    if (y == 2)
    {
        printf("\nNON-PRIME\n");
    }
    else if (y == 1)
    {
        printf("\nNeither PRIME nor COMPOSITE\n");
    }
    else
    {
        printf("\nPRIME\n");
    }
    return 0;
}
