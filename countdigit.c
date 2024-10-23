//C program to count number of digits in a number.
#include <stdio.h>

int main(){
    int a;
    int og = a;
    int rem;
    int count = 0;
    printf("Enter your digit : ");
    scanf("%d", &a);
    for(int i = 1; i>0; i*=10){
        if(a/i != 0){
            count += 1;
        }
        else{
            break;
        }
    }
    printf("Number of digits are %d ", count);
    return 0;
}