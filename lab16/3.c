#include <stdio.h>
void main()
{
    int i,j;
    int a[20][1];
    for(i=0;i<20;i++)
    {
        for(int j=0;j<1;j++)
        {
            printf("Enter marks:\n");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<20;i++)
    {
        for(int j=0;j<1;j++)
        {
            printf("roll no. %d has marks: %d\n",i+1,a[i][j]);
        }
    }
}