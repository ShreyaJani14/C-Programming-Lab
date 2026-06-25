#include <stdio.h>
void swapValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("x = %d, y = %d\n", a, b);
}
void main() {
    int x = 10, y = 20;
    printf("Before swapping: x = %d, y = %d\n", x, y);
    swapValue(x, y);
    printf("After swapping(call by value): x = %d, y = %d\n", x, y);
}
