#include <stdio.h>
int main() 
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) 
    {   printf("enter element ");
        scanf("%d", &arr[i]);
    } 
    int temp = arr[n];
    printf("Numbers in reverse order:\n");
    for (int j = n - 1; j >= 0; j--) {
        arr[j]=arr[n];
    }
    printf("\n");

    return 0;
}
