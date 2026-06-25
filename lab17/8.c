#include <stdio.h>
void main() {
    int m, n;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);
    int a[m][n], b[m][n], sum[m][n];
    int *p1, *p2, *p3;
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &b[i][j]);
    p1 = &a[0][0];
    p2 = &b[0][0];
    p3 = &sum[0][0];
    for (int i = 0; i < m * n; i++) 
    {
        *(p3 + i) = *(p1 + i) + *(p2 + i);
    }
    printf("\nSum of matrices:\n");
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++)
            printf("%d  ", sum[i][j]);
        printf("\n");
    }
}
