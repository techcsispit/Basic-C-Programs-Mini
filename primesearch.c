//To check the n no. is a prime no. or not
#include <stdio.h>
int main()
{
    int n; int s=0;
    print("Enter the no :");
    scanf("%d",&n);
    if(n==1|| n==0 ){
        printf("Neither prime nor composite");
    }
    else if(n==2){
        printf("prime number");
    }
    else{
    for (int i = 2; i<n; i++){
        if(n%i==0){
          s++;
        }
    }
    if(s==0){
        printf("Prime number");
    }
    else{
        printf("Composite number");
    }}
    return 0;
}