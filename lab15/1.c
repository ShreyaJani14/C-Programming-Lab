#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int a1[n],a2[n];
    printf("Enter %d elements of the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a1[i]);
    }
    for (i = 0; i < n; i++) {
        a2[i] = a1[i];
    }
    printf("Elements of the destination array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a2[i]);
    }

    return 0;
}
