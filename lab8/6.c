#include <stdio.h>
void main()
{
    int i=1,n,s;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        s=i*i;
        printf("%d %d\n",i,s);
        i++;
    }
}