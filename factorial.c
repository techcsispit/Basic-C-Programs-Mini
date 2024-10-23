#include <stdio.h>

void main(){
    int i,n,fact=1;
    printf("Enter value of n \n");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        fact= fact *i;
    }
    printf("The factorial of given number is %d \n",fact);
}