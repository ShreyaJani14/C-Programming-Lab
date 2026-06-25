#include <stdio.h>
void main()
{
    int a,b,c;
    printf("please enter three sides: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c)
    {
            printf("equilateral triangle");
    }
    else if(a==b || b==c || c==a)
    {
        if(a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b)
        {    
            printf("isosceles and right angled triangle");
        }
        else
        {
            printf("isosceles triangle");
        }
    }
    else
    {
        if(a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b)
        {
            printf("scalene and right angled triangle");
        }
        else
        {
            printf("scalene triangle");
        }
    }
}