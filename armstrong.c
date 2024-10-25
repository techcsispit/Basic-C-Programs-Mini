#include <stdio.h>
#include<math.h>
int armstrong(int n);
int digits(int n);

int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    
    if (armstrong(n) == 1)
    {
        printf("Armstrong Number\n");
    }
    else 
    printf("Not armstrong number\n");
    

    return 0;
}

int digits(int n)
{
    int digits = 0;
    while(n>0)
    {
        n = n/10;
        digits++;
    }
    return digits;
}

int armstrong(int n)
{
    int b = n;
    int rem;
    int sum = 0;
    
    while(b>0)
    {
        int d = digits(n);
        rem = b%10;
        int p = pow(rem,d);
        sum = sum + p;
        b = b/10;
    }

    if(sum == n)
    return 1;
    else
    return 0;
}