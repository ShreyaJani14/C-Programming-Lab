#include <stdio.h>
void main() {
    float feet, inches;
    printf("Enter feet: ");
    scanf("%f", &feet);
    inches = feet * 12;
    printf("%.2f feet is equal to %.2f inches.\n", feet, inches);
}