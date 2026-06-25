#include <stdio.h>
int main() 
{
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a1[n],a2[n],temp[n]; 
    int *ptr1 = a1; 
    int *ptr2 = a2; 
    int *ptr3 = temp;
    printf("Enter %d elements for the first array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", (ptr1 + i));
    }
    printf("Enter %d elements for the second array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", (ptr2 + i));
    }
    for (i = 0; i < n; i++) {
        *(ptr3 + i) = *(ptr1 + i) ;
        *(ptr1 + i) = *(ptr2 + i);
        *(ptr2 + i) = *(ptr3 + i); 
    }
    printf("The elements in the first array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr1 + i)); 
    }
    printf("\nThe elements in the second array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr2 + i)); 
    }
    return 0;
}
