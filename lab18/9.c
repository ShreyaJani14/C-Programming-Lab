#include <stdio.h>
#include <stdlib.h>
#include "mystring.h"
int main() {
    char str1[100], str2[100], result[200];
    int choice, len, cmp;
    while (1) {
        printf("\n====== CUSTOM STRING LIBRARY MENU ======\n");
        printf("1. Find String Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Convert to Uppercase\n");
        printf("7. Convert to Lowercase\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 
        switch (choice) {
            case 1:
                printf("Enter a string: ");
                gets(str1);
                len = my_strlen(str1);
                printf("Length of string = %d\n", len);
                break;
            case 2:
                printf("Enter source string: ");
                gets(str1);
                my_strcpy(result, str1);
                printf("Copied string: %s\n", result);
                break;
            case 3:
                printf("Enter first string: ");
                gets(str1);
                printf("Enter second string: ");
                gets(str2);
                my_strcpy(result, str1);
                my_strcat(result, str2);
                printf("Concatenated string: %s\n", result);
                break;
            case 4:
                printf("Enter first string: ");
                gets(str1);
                printf("Enter second string: ");
                gets(str2);
                cmp = my_strcmp(str1, str2);
                if (cmp == 0)
                    printf("Strings are equal.\n");
                else if (cmp > 0)
                    printf("First string is greater.\n");
                else
                    printf("Second string is greater.\n");
                break;
            case 5:
                printf("Enter a string: ");
                gets(str1);
                my_strrev(str1);
                printf("Reversed string: %s\n", str1);
                break;
            case 6:
                printf("Enter a string: ");
                gets(str1);
                my_strupr(str1);
                printf("Uppercase string: %s\n", str1);
                break;
            case 7:
                printf("Enter a string: ");
                gets(str1);
                my_strlwr(str1);
                printf("Lowercase string: %s\n", str1);
                break;
            case 8:
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
