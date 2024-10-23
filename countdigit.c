// C program to count number of digits in a number.
#include <stdio.h>
int main()
{   
    int n, dup;
    printf("Enter an integer: ");
        scanf("%d", &n);
        dup = n;
        int count = 0;
        while (n != 0)
        {
            n = n / 10;
            count++;
        }
        printf("Number of digits in the number %d is %d\n", dup, count);
    return 0;
}
