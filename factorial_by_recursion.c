#include <stdio.h>
long fact(int n){
   int factorial = 1;
   if(n==1)
   return factorial;
   else
   factorial = fact(n-1)*n;
}
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    printf("%ld\n",fact(n));
}
