#include <stdio.h>
int isPrime(int num) {
    if (num <= 1)
        return 0; // Not prime
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
void printPrimes(int start, int end) {
    printf("Prime numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }
    printf("\n");
}
void main() {
    int start, end;
    printf("Enter starting number: ");
    scanf("%d", &start);
    printf("Enter ending number: ");
    scanf("%d", &end);
    printPrimes(start, end);
}
