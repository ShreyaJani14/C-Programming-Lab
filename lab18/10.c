#include <stdio.h>
void numberToWords(int n);
char *ones[] = { "", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
                 "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen",
                 "Sixteen", "Seventeen", "Eighteen", "Nineteen" };

char *tens[] = { "", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };
void convertBelowThousand(int n) {
    if (n >= 100) {
        printf("%s Hundred ", ones[n / 100]);
        n = n % 100;
    }
    if (n > 0) {
        if (n < 20)
            printf("%s ", ones[n]);
        else {
            printf("%s ", tens[n / 10]);
            if (n % 10)
                printf("%s ", ones[n % 10]);
        }
    }
}
void numberToWords(int n) {
    if (n == 0) {
        printf("Zero");
        return;
    }
    if (n >= 10000000) {
        printf("%s Crore ", ones[n / 10000000]);
        n %= 10000000;
    }
    if (n >= 100000) {
        convertBelowThousand(n / 100000);
        printf("Lakh ");
        n %= 100000;
    }
    if (n >= 1000) {
        convertBelowThousand(n / 1000);
        printf("Thousand ");
        n %= 1000;
    }
    if (n > 0)
        convertBelowThousand(n);
}
int main() {
    int num;
    printf("Enter amount: ");
    scanf("%d", &num);
    printf("\nIn words: ");
    numberToWords(num);
    printf("\n");
    return 0;
}
