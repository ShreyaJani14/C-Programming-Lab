#include<stdio.h>
void main()
{
    int n,i,j,temp;
    printf("enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("enter value: ");
        scanf("%d",&arr[i]);
    }
    for (i = 0; i < n - 1; i++) {
       for (j = 0; j < n - i - 1; j++) {
           if (arr[j] > arr[j + 1]) 
           {
               temp = arr[j];
               arr[j] = arr[j + 1];
               arr[j + 1] = temp;
           }
       }
   }
   printf("Sorted array in ascending order:\n");
   for (i = 0; i < n; i++) 
   {
       printf("%d ", arr[i]);
   }
}