#include <stdio.h>

int main()
{
    int n, i;
    
    printf("Enter size of binary array: ");
    scanf("%d", &n);

    int bits[n];

    printf("Enter binary array elements (0 or 1):\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &bits[i]);
    }

    i = 0;

    while(i < n - 1)
    {
        if(bits[i] == 1)
            i = i + 2;
        else
            i = i + 1;
    }

    if(i == n - 1)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}