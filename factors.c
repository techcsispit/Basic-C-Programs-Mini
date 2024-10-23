//C program to find factors of any inputted number.
#include<stdio.h>
int main(){
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    printf("The factors are:");
    for(int i = 1; i<=n; i++){
        if(n % i == 0){
            printf("%d ", i);
        }
        else{
            continue;
        }
    }
}