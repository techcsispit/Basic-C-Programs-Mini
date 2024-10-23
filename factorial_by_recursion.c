#include <stdio.h>
long fact(int n){

    return n *fact(n-1);
}
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    printf("%d\n",fact(n));
}
