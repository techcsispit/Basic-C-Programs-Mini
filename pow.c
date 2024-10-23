#include <stdio.h>
#include <math.h>
int main()
{
    int x,r;
    int n;

    printf("Enter the x number: ");
    scanf("%d", &x);

    printf("Enter the n number: ");
    scanf("%d",&n);

    r= pow(n,x);

    printf("%d ^ %d = %d", n, x, r);

    return 0;
}