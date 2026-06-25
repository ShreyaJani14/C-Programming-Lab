#include<stdio.h>
void main()
{
    int a=10,b=15,*p1,*p2,sum=0;
    p1=&a;
    p2=&b;
    sum=*p1+*p2;
    printf("%d",sum);
}