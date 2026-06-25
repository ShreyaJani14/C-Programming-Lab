#include <stdio.h>
void main()
{
     int i=1,s,l,sum=0, counter = 0;
    while(counter <= 10)
    {
        s=i*i;
        l=s%10;
        if(l==9)
        {
            sum=sum+i;
            counter++;
        }
        i=i+1;
    }
    printf("%d id sum and %d is avg",sum,sum/10);
}