//C program to find factors of any inputted number.

#include <stdio.h>

int main(){    
    int num;
    printf("enter number: ");
    scanf("%d",&num);

    printf("the factors are: ");
    for (int i = 1;i<=num;i++ ){
        if (num % i == 0){
            printf("%d ",i);
        }
    }
    printf("\n");

    return 0;
}