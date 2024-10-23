#include<stdio.h>

void main(){
    int a,b;
    int operation;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&a,&b);
    printf("Enter operation(1 add,2 sub,3 mul,4 div): ");
    scanf("%d%d",&operation);
    switch(operation){
        case 1:
          printf("Addition is %d",a+b);
          break;
        case 2:
          printf("Subtraction is %d",a-b);
          break;
        case 3:
          printf("Multiplication is %d",a*b);
        case 4:
          printf("Division is %d",a/b);
        default:
          printf("Invalid code");
    }
}