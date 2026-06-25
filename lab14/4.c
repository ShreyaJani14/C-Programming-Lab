#include <stdio.h>
void main()
{
    int n, sum = 0,i,max,min;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) 
    {
        printf("enter value: ");
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
    }
    printf("Sum of all elements: %d\n average is %.2f\n", sum, (float)sum/n);
    max=arr[0];
    min=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("Maximum element: %d\nMinimum element: %d\n",max, min);
}