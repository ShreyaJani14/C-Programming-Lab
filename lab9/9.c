#include <stdio.h>
void main()
{
    int n,rem=0,temp=0;
    printf("enter decimal number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%2;
        printf("%d",rem);
        n=n/2;
    }
}