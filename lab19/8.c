#include <stdio.h>
void swapArrays(int a[], int b[], int n) {
    int temp;
    for (int i = 0; i < n; i++) {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}
int main() {
    int n;
    printf("Enter size of arrays: ");
    scanf("%d", &n);
    int A[n], B[n];
    printf("Enter elements of first array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    printf("Enter elements of second array:\n");
    for (int i = 0; i < n; i++) {
        scanf(" %d", &B[i]);
    }
    swapArrays(A, B, n);
    printf("\nAfter swapping:\n");
    printf("First array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\nSecond array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", B[i]);
    }
    return 0;
}
