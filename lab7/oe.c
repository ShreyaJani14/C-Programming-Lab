#include <stdio.h>
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    (n % 2 == 0) ? printf("%d even\n", n) : printf("%d odd\n", n);
}
