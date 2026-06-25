#include <stdio.h>
int main() 
{
    int n,pc=0,nc=0;
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
        if(arr[i]<0)
        {
            nc++;
        }
        else
        {
            pc++;
        }
    }
    printf("Positive numbers: %d\n",pc);
    printf("Negative numbers: %d\n",nc); 
    return 0;
}