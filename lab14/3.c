#include <stdio.h>
int main() 
{
    int n,o=0,e=0;
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
        if(arr[i]%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    printf("Odd numbers: %d\n",o);
    printf("Even numbers: %d\n",e); 
    return 0;
}