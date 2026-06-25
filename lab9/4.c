#include <stdio.h>
void main() 
{
    int i=1,n,fact=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("Factorial of %d is %d",n,fact);
}
