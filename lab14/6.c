#include <stdio.h>
void main()
{
    int n,i,sum=0,count=0;
    float avg;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("enter value: ");
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum += arr[i];
    }
    avg = (float)sum/n;
    for(i=0;i<n;i++)
    {
        if(arr[i]>avg)
        {
            count++;
        }
    }
    printf("Number of elements greater than average: %d\n", count);
}