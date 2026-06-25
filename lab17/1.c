#include<stdio.h>
void main()
{
    int a=5,*p;
    p=&a;
    printf("%d %d",*p,p);
}