#include <stdio.h>
void main()
{
    int i,n,x=0,j;
    printf("enter no.of elements: ");
    scanf("%d", &n);
    int arr[n],a2[n];
    for(i=0;i<n;i++)
    {
        printf("enter elements: ");
        scanf("%d", &arr[i]);
    }
     for (i = 0; i < n; i++) {
       for (j = i + 1; j < n; j++) {
           if (arr[i] == arr[j]) {
               a2[x]=arr[i];
               x++;
            printf("%d ",a2[x]);

           }
       }
   }
   printf("without duplicate elements : ");
   for(i=0;i<x;i++)
   {
    printf("%d ",a2[i]);
   }
}

