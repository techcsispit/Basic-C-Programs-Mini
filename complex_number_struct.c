//Construct a program to add, subtract and multiply two complex numbers using structure.
#include <stdio.h>
typedef struct complex {
    float real;
    float imag;
} complex;

complex add(complex n1, complex n2);
complex subs(complex n1, complex n2);
complex multi(complex n1, complex n2);

int main() {
    complex n1, n2, result;

    printf("For 1st complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n1.real, &n1.imag);
    printf("\nFor 2nd complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n2.real, &n2.imag);

    result = add(n1, n2);
    printf("Sum = %.1f + %.1fi\n", result.real, result.imag);
    result = subs(n1, n2);
    printf("subs = %.1f + %.1fi\n", result.real, result.imag);
    result = multi(n1, n2);
    printf("multi = %.1f + %.1fi\n", result.real, result.imag);

    return 0;
}

complex add(complex n1, complex n2) {
    complex n3;
    n3.real = n1.real + n2.real;
    n3.imag = n1.imag + n2.imag;
    return n3;
}
complex subs(complex n1, complex n2) {
    complex n3;
    n3.real = n1.real - n2.real;
    n3.imag = n1.imag - n2.imag;
    return n3;
    //
}
complex multi(complex n1, complex n2) {
    complex n3;
    n3.real = (n1.real*n2.real) - (n1.imag*n2.imag);
    n3.imag = (n1.real*n2.imag) + (n1.imag*n2.real);
    return n3;
    //
}