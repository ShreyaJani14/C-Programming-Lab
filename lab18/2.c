#include <stdio.h>
char maxmin(int a,int b);
void main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    char result = maxmin(a,b);
    if(result==a)
    {
        printf("Max: %d\nMin: %d\n", a, b);
    }
    else
    {
        printf("Min: %d\nMax: %d\n", a,b);
    }
}
char maxmin(int a,int b)
{
    int max;
    if(a>b)
    {
        max=a;
    }
    else
    {
        max=b;
    }
    return max;
}