#include <stdio.h>
#include <math.h>
int main() {
    int num,x, rem, result = 0, n = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    x=num;
    while (x != 0) {
        x /= 10;
        ++n;
    }
    x = num;
    while (x != 0) {
        rem = x % 10;
        result += pow(rem, n);
        x /= 10;
    }
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}


