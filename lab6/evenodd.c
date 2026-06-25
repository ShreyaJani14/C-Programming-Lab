#include <stdio.h>
void main()
{
    int x,ld;
    printf("please enter a number: ");
    scanf("%d",&x);
    ld=x%10;
    if(ld%2==0)
        printf("last digit is even");
    else
        printf("last digit is odd");
}