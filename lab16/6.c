#include<stdio.h>
void main()
{
    int i,n,m,j,k,mul;
    printf("Enter the number of rows: ");
    scanf("%d",&n); 
    printf("Enter the number of columns: ");
    scanf("%d",&m);
    int a1[n][m],a2[n][m],ans[n][m];
    for(i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("Enter the elements of the matrix:\n");
            scanf("%d",&a1[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("Enter the elements of the matrix:\n");
            scanf("%d",&a2[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            mul=0;
            for(k=0;k<m;k++)
            {
                mul=mul+a1[i][k]*a2[k][j];
            }
            ans[i][j]=mul;
        }
    }
    printf("The product of the two matrices is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }
}