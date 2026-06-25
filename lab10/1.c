#include <stdio.h>
void main()
{
    int n,x,y,sum=0;
    printf("enter n: ");
    scanf("%d",&n);
    y=n%10;
    while(n!=0)
    {
        x=n%10;
        n=n/10;
    }
    sum=sum+x+y;
    printf("%d",sum);
}