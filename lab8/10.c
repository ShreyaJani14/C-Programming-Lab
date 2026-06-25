#include <stdio.h>
void main()
{
    int i=1,n,s,sum=0;
    printf("enter number:");
    scanf("%d",&n);
    while(i<=n)
    {
        s=i*i;
        sum=sum+s;
        printf("%d ",sum);
        i++;
    }
}