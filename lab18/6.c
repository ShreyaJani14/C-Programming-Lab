#include <stdio.h>
void fibbo(int n);
void main()
{
    int n, t1 = 0, t2 = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fibbo(n);
    
}
void fibbo(int n)
{
    int i, t1, t2, nextTerm;
    t1 = 0;
    t2 = 1;
    for (int i = 1; i <= n; ++i) 
    {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}
