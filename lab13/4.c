#include <stdio.h>
void main()
{
    int i,j,k=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            if(j%2!=0)
            {
                printf("%d",k);
                k++;
            }
            else
            {
                printf(" ");
            }
        
        }
        k=1;
        printf("\n");
    }
}