#include<stdio.h>
int main()
{
    int swag;
    printf("\nEnter operation (1=+,2=-,3=*,4=/,5=modulus): ");
    scanf("\n%d",&swag);
    float a,b;
    printf("\nEnter two numbers : ");
    scanf("\n%f\n%f",&a,&b);
    switch(swag)
    {
        case 1:
        printf("Addition is %f", a+b);
        break;

        case 2:
        printf("Subtraction is %f", a-b);
        break;

        case 3:
        printf("Multiplication is %f", a*b);
        break;

        case 4:
        printf("Division is %f", a/b);
        break;

        case 5:
        printf("Modulus is %f", (int)a%(int)b);
        break;
        default:
        printf("INVALID");
    }
}