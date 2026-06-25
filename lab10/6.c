#include <stdio.h>
void main()
{
    int x,sum=0,i=1,fact=0;
    printf("enter n: ");
    scanf("%d",&x);
    while(i<=x)
    {
        if(0==x%i)
        {
            fact=x/i;
            sum+=fact;
            i++;
        }
        else
        {
            i++;
        }
    }
    if(sum==x)
    {
        printf("perfect");
    }
    else
    {
        printf("not perfect");
    }
}