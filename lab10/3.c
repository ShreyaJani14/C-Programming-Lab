#include <stdio.h>
void main()
{
    int n, i = 2, x = 0;
    printf("enter num: ");
    scanf("%d", &n);
    while (i <= n-1)
    {
        if (n % i == 0)
        {
            x = x + 1;
            break;
        }

        i = i + 1;
    }
    if (x == 1)
    {
        printf("not prime number");
    }
    else
    {
        printf("prime number");
    }
}