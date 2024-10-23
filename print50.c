//C program to print first 50 natural numbers.

#include <stdio.h>

void main(){
    int i,n;
    printf("Enter the number of natural numbers you want \n");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        printf("%d \n",i);
    }
}