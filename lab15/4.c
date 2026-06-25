#include <stdio.h>
int main() {
    int n, i, ele, count = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &ele);
    for (i = 0; i < n; i++) {
        if (arr[i] == ele) {
            printf("Element %d found at position %d.\n", ele, i + 1);
            count = 1;
            break;
        }
    }

    if (count != 0) {
        printf("Element %d not found in the array.\n", ele);
    }

    return 0;
}
