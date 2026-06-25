#include <stdio.h>
void replaceChar(char str[], char oldChar, char newChar) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == oldChar) {
            str[i] = newChar;
        }
        i++;
    }
}
int main() {
    char str[100];
    char oldChar, newChar;
    printf("Enter a string: ");
    gets(str);  
    printf("Enter character to replace: ");
    scanf("%c",&oldChar);
    printf("Enter new character: ");
    scanf(" %c",&newChar);   
    replaceChar(str, oldChar, newChar);
    printf("Updated string: %s",str);
    return 0;
}
