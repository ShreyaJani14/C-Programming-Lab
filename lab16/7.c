#include <stdio.h>
void main()
{
    int i,n,m,j,trace=0;
    printf("Enter the number of rows: ");
    scanf("%d",&n); 
    printf("Enter the number of columns: ");
    scanf("%d",&m);
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("Enter the elements of the matrix:\n");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {   if(i==j)
            {
            printf("%d ",a[i][i]);
            trace=trace+a[i][i];
            printf("\n");
        }
        
    }
    
}
printf("Trace of the matrix is: %d\n",trace);
}
