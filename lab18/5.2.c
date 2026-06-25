#include <stdio.h>
void swapReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void main() {
    int x = 10, y = 20;
    printf("Before swapping: x = %d, y = %d\n", x, y);
    swapReference(&x, &y);
    printf("After swapping: x = %d, y = %d\n", x, y);
}
