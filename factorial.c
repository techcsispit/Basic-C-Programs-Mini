#include<stdio.h>
void main()
{
    int fact=1 , n ;
    printf("Enter a number");
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++){
        fact = fact*i ;
    }

    printf("Factorial = %d", fact);
}