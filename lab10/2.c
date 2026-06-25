#include <stdio.h>
void main()
{
    int n,m,i=1,sum=0;
    float avg;
    printf("enter no.of numbers: ");
    scanf("%d",&m);
    while(i<=m)
    {
        printf("enter number: ");
        scanf("%d",&n);
        sum=sum+n;
        i=i+1;
    }
    avg=sum/(float)m;
    printf("%d is sum and %f is avg ",sum,avg);
}