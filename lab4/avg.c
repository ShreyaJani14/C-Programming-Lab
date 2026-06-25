#include <stdio.h>
void main()
{
    int a,b,c,avg;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    avg = (a + b +c)/3;
    printf("average: %d\n", avg);
}