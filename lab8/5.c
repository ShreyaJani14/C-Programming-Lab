#include <stdio.h>
void main()
{
    int i=1,n,o=0,e=0;
    while(i<=10)
    {
        printf("Enter a number: ");
        scanf("%d",&n);
        if(i%2==0)
        {
            e=e+1;
        }
        else
        {
            o=o+1;
        }
        i=i+1;
    }
    printf("%d are no.of even and %d are no.of odd",e,o);
}