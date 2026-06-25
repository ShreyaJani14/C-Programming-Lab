#include <stdio.h>
void main()
{
    int x;
    printf("enter value of x:");
    scanf("%d",&x);
    if (x & 1)
    {
        printf("%d is odd", x);
    }
    else
    {
        printf("%d is even", x);
    }
}