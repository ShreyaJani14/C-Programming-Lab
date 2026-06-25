#include <stdio.h>
#include <math.h>
void main()
{
    int n,i;
    float avg,gm,hm,sum=0,mul=1;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n],arr1[n];
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
    printf("Average is: %.2f\n", avg);
    for(i=0;i<n;i++)
    {
        mul *= arr[i];
    }
    gm = pow(mul, 1.0/n);
    printf("Geometric mean is: %.2f\n", gm);
    for(i=0;i<n;i++)
    {
        arr1[i] = 1/arr[i];
    }
    for(i=0;i<n;i++)
    {
        sum += arr1[i];
    }
    hm = n/sum;
    printf("Harmonic mean is: %.2f\n", hm);
}