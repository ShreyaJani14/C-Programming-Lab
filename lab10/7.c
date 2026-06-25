#include <stdio.h>
int main()
{
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 1)
    {
        printf("%d is not a Prime Number.", num);
    }
    else
    {
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                break;
            }
        }
        if (i > num / 2)
            printf("%d is a Prime Number.", num);
        else
            printf("%d is not a Prime Number.", num);
    }
    return 0;
}