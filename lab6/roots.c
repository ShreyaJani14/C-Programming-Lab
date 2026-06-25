#include <stdio.h>
#include <math.h>
void main()
{
    float a,b,c,d;
    printf("please enter coefficients a, b and c: ");
    scanf("%f %f %f",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    {
        printf("roots are real and different");
        printf(" \nroot 1 = %.2f",(-b+sqrt(d))/(2*a));
        printf(" \nroot 2 = %.2f",(-b-sqrt(d))/(2*a));
    }
    else if(d==0)
    {
        printf("roots are real and same");
        printf("root 1 = root 2 = %.2f",-b/(2*a));
    }
    else
        printf("roots are complex");
}