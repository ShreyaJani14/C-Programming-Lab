#include <stdio.h>
int main()
{
    int n, i, k = 1;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter sorted array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    for(i = 1; i < n; i++)
    {
        if(nums[i] != nums[k - 1])
        {
            nums[k] = nums[i];
            k++;
        }
    }
    printf("Number of unique elements = %d\n", k);
    printf("Array after removing duplicates:\n");
    for(i = 0; i < k; i++)
    {
        printf("%d ", nums[i]);
    }
    return 0;
}