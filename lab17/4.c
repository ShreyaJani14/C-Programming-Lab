#include<stdio.h>
void main()
{
    int a=10,b=15,*p1,*p2,temp;
    printf("a=%d b=%d\n",a,b);
    p1=&a;
    p2=&b;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("a=%d b=%d",*p1,*p2);
}