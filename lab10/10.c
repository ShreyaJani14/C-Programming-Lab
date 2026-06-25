#include <stdio.h>
void main()
{
    int n,m,i=1,lcm;
    printf("enter numbs: ");
    scanf("%d %d",&n,&m);
    while(i<=n*m)
    {
        if(i%n==0 && i%m==0)
        {
            lcm=i;
            break;
        }
        i=i+1;
    }
    printf("%d",lcm);
}