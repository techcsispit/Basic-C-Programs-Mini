#include <stdio.h>
int fib(int n){
    if(n>1){

        if (n==2) return 1;
        return fib(n-1) + fib(n-2);
    }
    return 0;
}
int main(){
    int n,i;
    printf("Enter the number :");
    scanf("%d",&n);
    // printf("%d\n",fib(n));
    
    //for printing all fibonacci numbers
    for (i=1; i<=n; i++) {
        printf("%d ",fib(i));
    }
}
