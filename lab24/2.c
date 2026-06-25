#include <stdio.h>
#include <stdlib.h>
void main() 
{
    int n, i, sum = 0;
    printf("Enter how many numbers you want to enter: ");
    scanf("%d", &n);
    int *ptr = (int *)malloc(n * sizeof(int));
    if(ptr == NULL) {
        printf("Memory allocation failed!");
    }
    printf("\nEnter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &ptr[i]);
        sum += ptr[i];
    }
    printf("\nSum of %d numbers = %d\n", n, sum);
    free(ptr);
}
