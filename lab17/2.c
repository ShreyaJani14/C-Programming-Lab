#include<stdio.h>
void main()
{
    int a1=5,*p1;
    char *p2,a2='A';
    float *p3,a3=10.5;
    double *p4,a4=20.5;
    p1=&a1;
    p2=&a2;
    p3=&a3;  
    p4=&a4;
    printf("%d",*p1);
    printf("\n%c",*p2);
    printf("\n%f",*p3);
    printf("\n%lf",*p4);
}