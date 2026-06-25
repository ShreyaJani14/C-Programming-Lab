#include <stdio.h>
float maxOfThree(float a, float b, float c);
void main() {
    float x, y, z, max;
    printf("Enter three floating-point numbers: ");
    scanf("%f %f %f", &x, &y, &z);
    max = maxOfThree(x, y, z);
    printf("Maximum = %.4f\n", max);
}
float maxOfThree(float a, float b, float c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}
