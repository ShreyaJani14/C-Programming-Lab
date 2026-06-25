#include <stdio.h>
void main()
{
    int i,j,p=0,n=0;
    int a[3][3];
    for(i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter the elements of the matrix:\n");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]>=0)
            {
                p++;
            }
            else if(a[i][j]<0)
            {
                n++;
            }
        }
    }
    printf("%d is no.of positive numbers present and %d is no.of negative numbers present",p,n);
}