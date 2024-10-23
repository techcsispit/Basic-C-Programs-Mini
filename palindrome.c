//C program to check a number whether it is palindrome or not.

#include <stdio.h>

int main(void)
{
    int x, og, rv=0, rm;
    printf("Enter a integer. ");
    scanf("%i", &x);

    og = x;

    for(int i=1; i>0; i++)
    {
        rm = x%10;
        rv = rv*10 + rm;
        x /= 10;

        if(x==0){
            break;
        }
    }
    if(rv == og){
        printf("number is palindrome");
    }
    else{
        printf("number is not palindrome");
    }
    
    return 0;
}