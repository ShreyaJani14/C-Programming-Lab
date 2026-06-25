#include <stdio.h>
void main()
{
    int n,m,min,i=1,hcf;
    printf("enter numbs: ");
    scanf("%d %d",&n,&m);
    min=n<m?n:m;
    while(i<=min)
    {
        if(n%i==0 && m%i==0)
        {
            hcf=i;
        }
        i=i+1;
    }
    printf("%d",hcf);
}