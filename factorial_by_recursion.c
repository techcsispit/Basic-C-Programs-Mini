#include <stdio.h>
long fact(int n)
{
    // complete the function
    if (n >= 0)
    {
        if (n == 1 || n==0)
        {
            return 1;
        }

        return n * fact(n - 1);
    }

    return 0;
}
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d", &n);
    printf("%d\n", fact(n));
}
