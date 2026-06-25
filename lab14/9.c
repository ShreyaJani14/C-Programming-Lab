#include <stdio.h>
int main() {
   int i, j, n, count = 0;
   printf("Input number of elements : ");
   scanf("%d", &n);
    int arr[n];
   for (i = 0; i < n; i++) 
   {
       printf("enter value: ");
       scanf("%d", &arr[i]);
   }
   for (i = 0; i < n; i++) {
       for (j = i + 1; j < n; j++) {
           if (arr[i] == arr[j]) {
               count++;
               break;
           }
       }
   }
   printf("Total number of duplicate elements found in the array: %d\n", count);
   return 0;
}