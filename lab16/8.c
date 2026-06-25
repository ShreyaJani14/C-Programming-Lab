#include <stdio.h>
void main()
{
    int i,n,m,j,count=0;
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
        {   
            if(a[i][j!=0])
            {
                count++;
            }
            
        }
    }
    if(0.5* (m*n) < count)
    {
        printf("The given matrix is not a sparse matrix\n");
    }
    else
    {
        printf("The given matrix is a sparse matrix\n");
    }

   

}