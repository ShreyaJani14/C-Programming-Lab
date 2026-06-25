#include <stdio.h>
void main()
{
    printf("enter radius: ");
    float r, area;
    scanf("%f", &r);
    area = 3.14 * r * r;
    printf("area: %f\n", area);
}