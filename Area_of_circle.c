#include <stdio.h>
int main()
{
    float pi=3.1415;
    int r = 5;
    float area, circum;
    area = pi * r * r;
    circum = 2 * pi * r;
    printf("Area of circle is %.2f.\n", area);
    printf("Circum of circle is %.2f.", circum);
}