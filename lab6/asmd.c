#include <stdio.h>
void main()
{   
    int a,b,sum,sub;
    float mul,div;
    char x;
    printf("please enter two numbers ");
    scanf("%d %d",&a,&b);
    printf("please enter an operator +,-,*,/ ");
    scanf(" %c",&x);
    if(x=='+')
    {
        sum=a+b;
        printf("sum is %d",sum);
    }
    else if(x=='-')
    {
        sub=a-b;
        printf("subtraction is %d",sub);
    }
    else if(x=='*')
    {
        mul=a*b;
        printf("multiplication is %.2f",mul);
    }
    else if(x=='/')
    {
        div=(float)a/b;
        printf("division is %.2f",div);
    }
    else
    {
        printf("invalid operator");
    }
}