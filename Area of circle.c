#include <stdio.h>
#define PI 3.14159
int main()
{
    int r = 5;
    float area, circum;
    area = PI * r * r;
    circum = 2 * PI * r;
    printf("Area of circle is %.2f\n", area);
    printf("Circum of circle is %.2f", circum);
    return 0;
}
