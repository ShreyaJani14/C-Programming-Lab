#include <stdio.h>
float factorial(float n) {
    float fact = 1;
    for (float i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
int main() {
    float n, r;
    float nCr, nPr;
    printf("Enter value of n: ");
    scanf("%f", &n);
    printf("Enter value of r: ");
    scanf("%f", &r);
    if (r > n || n < 0 || r < 0) {
        printf("Invalid input! r must be less than or equal to n.\n");
        return 0;
    }
    nPr = factorial(n) / factorial(n - r);  
    nCr = factorial(n) / (factorial(r) * factorial(n - r));
    printf("\nnPr = %f\n", nPr);
    printf("nCr = %f\n", nCr);
    return 0;
}
