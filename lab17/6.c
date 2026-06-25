#include <stdio.h>
int main() 
{
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a1[n],a2[n]; 
    int *ptr1 = a1; 
    int *ptr2 = a2; 
    printf("Enter %d elements for the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", (ptr1 + i));
    }
    for (i = 0; i < n; i++) {
        *(ptr2 + i) = *(ptr1 + i) ; 
    }
    printf("The elements in the second array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr2 + i)); 
    }
    return 0;
}
