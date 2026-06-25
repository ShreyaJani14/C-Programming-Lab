#include <stdio.h>
void main()
{
    printf("enter principal, rate and time: ");
    float p, r, t, si;
    scanf("%f %f %f", &p, &r, &t);
    si = (p * r * t) / 100;
    printf("simple interest: %f", si);
}