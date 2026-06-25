#include <stdio.h>
void main()
{
    int x;
    printf("enter value of x:");
    scanf("%d",&x);
    if (x>=0)
    {
        printf("%d is positive",x);
    }
    else
    {
        printf("%d is negative",x);
    }
}