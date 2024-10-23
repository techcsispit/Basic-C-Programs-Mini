//C program to count number of digits in a number.
#include <stdio.h>

int main()
{ 
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);
    int s=0; int a; 
    a=number;
    do{
        a=number%10;
        number=number/10;
        s++;
    }while(number!=0);
    printf("Number of digits : %d",s);
    return 0;
    
}