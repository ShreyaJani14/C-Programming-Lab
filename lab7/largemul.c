#include <stdio.h>
void main()
{
    int x,y,z,large,mul;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&x,&y,&z);
    large = (x > y) ? (x) : (y);
    mul=large*z;
    printf("%d",mul);
}