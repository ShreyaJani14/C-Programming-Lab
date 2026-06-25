#include <stdio.h>
void main()
{
    printf("enter fahrenheit: ");
    float f, c;
    scanf("%f", &f);
    c = (f - 32) * 5 / 9;
    printf("celsius: %f\n", c);
}