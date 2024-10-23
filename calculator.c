//C program to display simple calculator.
#include <stdio.h>
#include<math.h>
int main()
{   
    float a,b,c;
    int ch;
    printf("Select one of the following operations\n1.add\n2.sub\n3.multiply\n4.divide\n");
    scanf("%d",&ch);
    printf("Enter 2 numbers");
    scanf("%f%f",&a,&b);
    switch (ch)
    {
    case 1:
    printf("Addition is %.3f",a+b);
    
    case 2:
    printf("Substraction is %.3f",a-b);
    
    case 3:
    printf("Multiplication is %.3f",a*b);
    case 4:
    
        c=a/b;
    printf("Division is %3.f",c);
    
    }
    return 0;
}


