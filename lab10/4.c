#include <stdio.h>
void main()
{
    int n,i,rem=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        i=i+1;
    }
    printf("Number of digits: %d",i);
}