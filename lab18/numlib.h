// numlib.h
#include <math.h>

// Function to check if number is prime
int isPrime(int n) {
    if (n <= 1)
        return 0;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

// Function to check if number is Armstrong
int isArmstrong(int n) {
    int original = n, sum = 0, digits = 0, temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp != 0) {
        int rem = temp % 10;
        int powResult = 1;
        for (int i = 0; i < digits; i++)  // manual power
            powResult *= rem;
        sum += powResult;
        temp /= 10;
    }
    return (sum == original);
}

// Function to check if number is Perfect
int isPerfect(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            sum += i;
    }
    return (sum == n);
}
