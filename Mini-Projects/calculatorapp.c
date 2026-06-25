#include <stdio.h>
int main() {
    char operator;
    double n1, n2, result;
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); 
    printf("Enter two numbers: ");
    scanf("%lf %lf", &n1, &n2);

    switch (operator) {
        case '+':
            result = n1 + n2;
            break;
        case '-':
            result = n1 - n2;
            break;
        case '*':
            result = n1 * n2;
            break;
        case '/':
            if (n2 != 0) {
                result = n1 / n2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return 1; 
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1;

    printf("Result: %.2lf\n", result);

    return 0;
}
}