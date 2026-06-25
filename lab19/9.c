#include <stdio.h>
int reverseNumber(int n, int rev) {
    if (n == 0)
        return rev;
    return reverseNumber(n / 10, rev * 10 + (n % 10));
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int reversed = reverseNumber(num, 0);
    printf("Reverse = %d\n", reversed);
    return 0;
}
