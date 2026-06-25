#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter sorted array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Missing numbers are: ");
    for(i = 0; i < n - 1; i++)
    {
        if(a[i + 1] - a[i] > 1)
        {
            for(j = a[i] + 1; j < a[i + 1]; j++)
            {
                printf("%d ", j);
            }
        }
    }
    return 0;
}