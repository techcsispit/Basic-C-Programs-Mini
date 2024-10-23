#include <stdio.h>
long fact(int n)
{
    if (n >= 0)
    {
        if(n==0) return 1;
        int f = 1;
        for (int i = 1; i<=n;i++){
            f *= i;
        }
        return f;
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
