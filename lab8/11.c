#include <stdio.h>
int main()
{
    int num1, num2;
    int bigger, smaller;
    int quotient = 0, remainder;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    if (num1 == 0 || num2 == 0)
    {
        printf("Division by zero is not possible.");
        return 0;
    }
    if (num1 > num2)
    {
        bigger = num1;
        smaller = num2;
    }
    else
    {
        bigger = num2;
        smaller = num1;
    }
    remainder = bigger;
    while (remainder >= smaller)
    {
        remainder = remainder - smaller;
        quotient++;
    }
    printf("Bigger Number = %d\n", bigger);
    printf("Smaller Number = %d\n", smaller);
    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);
    return 0;
}