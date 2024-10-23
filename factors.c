//C program to find factors of any inputted number.
#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter the number\n");
    scanf("%d", &n);
    for(i = 1; i<=n/2; i++)
    {
        if(n%i==0)
        {
            printf("%d is a factor of %d\n", i, n);
        }
    }
}
