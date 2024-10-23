#include <stdio.h>
#define pi 3.1415
int main()
{
    float area, circum,r;
    printf("Enter radius of circle");
    scanf("%f",&r);
    area = pi * r * r;
    circum = 2 * pi * r;
    printf("Area of circle is %f\n", area);
    printf("Circum of circle is %f", circum);
    return 0;
}
