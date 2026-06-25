#include <stdio.h>
void main()
{
    int sal;
    float gs;
    printf("please enter salary: ");
    scanf("%d",&sal);
    if(sal>=10000 && sal<20000)
    {
        gs=sal+sal*0.2+sal*0.8;
    }
    else if(sal>=20000 && sal<30000)
    {
        gs=sal+sal*0.25+sal*0.9;
    }
    else
    {
        gs=sal+sal*0.3+sal*0.95;
    }
    printf("gross salary is %.2f",gs);
}