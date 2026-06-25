#include <stdio.h>
void main()
{
    printf("enter height and base: ");
    float h, b, area;
    scanf("%f %f", &h, &b);
    area = 0.5 * b * h;
    printf("area: %f\n", area);
}