#include <stdio.h>
void main()
{
    int u;
    float b;
    printf("please enter units consumed: ");
    scanf("%d",&u);
   if(u<=50)
       b=u*0.5;
   else if(u<=150)
       b=50*0.5+(u-50)*0.75;
   else if(u<=250)
       b=50*0.5+100*0.75+(u-150)*1.2;
    else
       b=50*0.5+100*0.75+150*1.2+(u-250)*1.5;
    b+=b*0.2; 
   printf("total bill is: %f",b);
}