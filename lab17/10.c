#include <stdio.h>
void main() {
    int n, i, j, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int *p = arr; 
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", (p + i));
    for (i = 0; i < n - 1; i++) 
    {
        for (j = i + 1; j < n; j++) 
        {
            if (*(p + j) < *(p + i)) 
            {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }
    printf("\nSorted array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", *(p + i));
    printf("\n");
}
