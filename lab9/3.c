#include<stdio.h>
void main()
{
    int i=0,m,n,mul=1;
    printf("enter base and exponent: ");
    scanf("%d %d",&m,&n);
    while(i<=n)
    {
        mul=mul*m;
        i++;
    }
    printf("%d",mul);
}
















