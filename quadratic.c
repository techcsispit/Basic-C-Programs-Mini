#include <stdio.h>
#include <math.h>

void main(){
    int a,b,c,disc,x1,x2;
    printf("Enter the coefficient of x^2");
    scanf("%d",&a);
    printf("Enter the coefficient of x");
    scanf("%d",&b);
    printf("Enter the constant");
    scanf("%d",&c);

    disc = sqrt((b*b) - (4*a*c));

    if(disc>0){
        printf("The roots are real");
        x1 = (-b + disc)/2*a;
        x1 = (-b - disc)/2*a;
        printf("The roots are %d and %d",x1,x2);
    }else if(disc==0){
        printf("The roots are real and equal");
        x1=x2= (-b + disc)/2*a;
        printf("The roots are %d and %d",x1,x2);
    }else{
        printf("The roots are imaginary");
    }
}