//C program to find factors of any inputted number.
#include <stdio.h>

int main (void)
{
    int x;
    printf("Enter a number. ");
    scanf("%d", &x);

    printf("The factors of %i are ", x);
    for(int i=1; i<=x; i++)
    {
        if(x%i==0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}