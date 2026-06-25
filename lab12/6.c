#include<stdio.h>
void main()
{
    float sum=1.0,i,j,n,fact=1.0;
    printf("Enter the number: ");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        fact=1.0;
        for(j=1;j<=i;j++)
        {
        fact=fact*j;
        }
    sum=sum+(1.0/fact);
    }
    printf("%f is equal to e",sum);
}