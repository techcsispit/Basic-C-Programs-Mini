#include<stdio.h>
int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact *= i;
    }
    return fact;
}
void main(){
    int num,f;
    printf("Enter a number: ");
    scanf("%d",&num);
    f = fact(num);
    printf("Factorial is: %d",f);
}