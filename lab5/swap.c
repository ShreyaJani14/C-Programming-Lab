#include <stdio.h>
void main()
{
    int a,b,x;
    printf("enter value of a: ");
    printf("\n enter value of b: ");
    scanf("%d %d",&a,&b);
    x=a;
    a=b;
    b=x;
    printf("a=%d b=%d",a,b);
}