#include <stdio.h>
void main() 
{
    int i,j,ans=0,x,y,temp=0;
    printf("Enter base and exponent: ");
    scanf("%d %d",&x,&y);
    temp=x;
    for(i=1;i<=y;i++)
    {
        
        for(j=1;j<=x;j++)
        {
            ans=ans+temp;
        }
        temp=ans;
    }
    printf("Result=%d",ans);
}