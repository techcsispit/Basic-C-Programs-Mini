//C program  to find roots of a quadratic equation
#include <stdio.h>
#include<math.h>
int main()
{
  float a,b,c,d,rp,rn;
  printf("The equation is of the form ax^2+bx+c\nEnter a,b,c");
  scanf("%f%f%f", &a,&b,&c);
  printf("The equation looks like %.2fx^2+(%.2f)x+(%.2f)\n",a,b,c);
  d=b*b-4*a*c;
  if(d>0)
  {
    rp= (-b+sqrt(d))/(2*a);
    rn= (-b-sqrt(d))/(2*a);
    printf("The roots of the given equation are %.2f and %.2f",rp,rn);
  }
  
  else
  {printf("No real roots exist");}
}
