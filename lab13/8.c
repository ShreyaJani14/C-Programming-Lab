#include <stdio.h>
void main()
{
    int i,j,k=0;
    char ch='A';
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
        { 
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            if(j%2!=0)
            { if(i%2!=0)
                {
                    k++;
                    printf("%d",k);
                }
             else
                {
                    printf("%c",ch);
                    ch++;
                }
            }
            else
            {
                printf(" ");
            }
            k=1;
        } 
        printf("\n");
    }
    
}