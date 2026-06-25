#include <stdio.h>
#include "numlib.h"  // include custom library

int main() {
    int num, choice;

    while (1) {
        printf("\n====== Number Property Checker ======\n");
        printf("1. Check Prime Number\n");
        printf("2. Check Armstrong Number\n");
        printf("3. Check Perfect Number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 4) {
            printf("Exiting program...\n");
            break;
        }

        printf("Enter a number: ");
        scanf("%d", &num);

        switch (choice) {
            case 1:
                if (isPrime(num))
                    printf("%d is a Prime Number.\n", num);
                else
                    printf("%d is NOT a Prime Number.\n", num);
                break;

            case 2:
                if (isArmstrong(num))
                    printf("%d is an Armstrong Number.\n", num);
                else
                    printf("%d is NOT an Armstrong Number.\n", num);
                break;

            case 3:
                if (isPerfect(num))
                    printf("%d is a Perfect Number.\n", num);
                else
                    printf("%d is NOT a Perfect Number.\n", num);
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
