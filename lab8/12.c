#include <stdio.h>
void main()
{
    int x,y,i=1,sum=0;
    printf("enter x and y: ");
    scanf("%d %d",&x,&y);
    while(i<=y)
    {
        sum=sum+x;
        i=i+1;
    }
    printf("%d",sum);
}