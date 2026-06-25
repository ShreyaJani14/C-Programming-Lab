#include<stdio.h>
void displayArray(int arr[], int n)
{
    printf("Array elements are:\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    displayArray(a, n);
}