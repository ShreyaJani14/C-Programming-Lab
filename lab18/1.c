#include <stdio.h>
int sum(int a,int b);
void main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int result = sum(a,b);
    printf("Sum: %d\n", result);
}
int sum(int a,int b)
{
    return a+b;
}