#include <stdio.h>
void main()
{ 
    int n,m,result,i;
    printf("Enter exponent and base: ");
    scanf("%d %d",&n,&m);
    result=1;
    for(i=0;i<n;i++)
    {
       result=result*m;
    }
    printf("Result=%d",result);
}