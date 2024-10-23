#include<stdio.h>

void main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("The divisors are: ");
    for(int x=1;x<num;x++){
        if(num%x==0){
           printf("%d ",x);  
        }
    }
}
