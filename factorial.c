#include <stdio.h>
int fact(int x);
int fact(int n){
    // complete the function 
    int i=1;
    for(int j=n;j>=1;j--){
        i=i*j;
    }
    return i;
}
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    printf("%d\n",fact(n));
    return 0;
}