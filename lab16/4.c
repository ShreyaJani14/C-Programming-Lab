#include <stdio.h>
void main()
{
    int i,n,m,j;
    printf("Enter the number of rows: ");
    scanf("%d",&n); 
    printf("Enter the number of columns: ");
    scanf("%d",&m);
    int a1[n][m],a2[n][m];
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
            printf("%d ",a1[i][j]+a2[i][j]);
        }
        printf("\n");
    }
   

}