#include <stdio.h>
int factorial(int n){
    int fact=1,i=1;
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    return fact;
}
void main() 
{
    int n,fact;
    printf("Enter a number: ");
    scanf("%d",&n);
    fact = factorial(n);
    printf("Factorial of %d is %d",n,fact);
}
