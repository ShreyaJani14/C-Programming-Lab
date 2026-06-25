#include <stdio.h>
int main()
{
    int num, temp, first, last;
    int digits = 0, power = 1;
    int middle, result, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    last = num % 10;
    temp = num;
    for (; temp > 0; temp = temp / 10)
    {
        digits++;
    }
    temp = num;
    for (i = 1; i < digits; i++)
    {
        temp = temp / 10;
        power = power * 10;
    }
    first = temp;
    middle = (num % power) / 10;
    result = last * power + middle * 10 + first;
    printf("Number after swapping first and last digits = %d", result);
    return 0;
}
