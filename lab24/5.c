#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n], ans[2 * n];

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    // Copy array twice
    for(i = 0; i < n; i++)
    {
        ans[i] = nums[i];
        ans[i + n] = nums[i];
    }

    printf("Concatenated array:\n");
    for(i = 0; i < 2 * n; i++)
    {
        printf("%d ", ans[i]);
    }

    return 0;
}