#include <stdio.h>
void main()
{
    int i=0,sum=1;
    while(i<=50)
    {   
        printf("%d\n",sum);
        sum=sum+3;
        i=i+1;
    }
}