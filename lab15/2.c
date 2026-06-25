#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
   int arr[n]; 
   printf("Enter %d elements of the array:\n", n);
   for (int i = 0; i < n; i++) {
       scanf("%d", &arr[i]);
   }
    int count = 0;
   for (int i = 0; i <n; i++) {
       if (arr[i] < 0) {
           count++; 
       }
   }
   printf("Total number of negative elements: %d\n", count);
   return 0;
}