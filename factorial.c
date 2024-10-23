#include <stdio.h>
int main(){
    int n, fact;
    printf("Calculate factorial for? \n");
    scanf("%d", &n);
    fact = 1;
    for(int i = n; i>0; i--){
        fact*=i;
    }
    printf("%d \n", fact);
    return 0;
} 
