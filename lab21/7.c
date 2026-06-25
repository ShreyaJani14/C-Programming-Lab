#include <stdio.h>
struct Distance {
    int feet;
    int inches;
};
void main() {
    struct Distance d1, d2, result;
    printf("Enter first distance (feet inches): ");
    scanf("%d %d", &d1.feet, &d1.inches);
    printf("Enter second distance (feet inches): ");
    scanf("%d %d", &d2.feet, &d2.inches);
    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;
    if(result.inches >= 12) {
        result.feet += result.inches / 12;
        result.inches = result.inches % 12;
    }
    printf("\nTotal Distance = %d feet %d inches\n", result.feet, result.inches);
}
