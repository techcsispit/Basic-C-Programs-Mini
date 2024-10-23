#include <stdio.h>
int main() //main function
{
  float a, b;

  printf("Enter first number:\n");
  scanf("%f", &a);
  printf("Enter second number:\n");
  scanf("%f", &b);

  printf("Addition of two numbers = %.2f", (a + b));
  return 0;
}
