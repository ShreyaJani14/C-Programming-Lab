#include <stdio.h>
void main()
{
    int n,h=0,w=0,i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr1[n],arr2[n];
    for(i=0;i<n;i++)
    {
        printf("enter height: ");
        scanf("%d", &arr1[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("enter weight: ");
        scanf("%d", &arr2[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr1[i]>170)
        {
            h++;
        }
        if(arr2[i]<50)
        {
            w++;
        }
    }
    printf("Number of people taller than 170 cm: %d\n", h);
    printf("Number of people lighter than 50 kg: %d\n", w);
}