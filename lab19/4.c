#include <stdio.h>
#include <string.h>
int findChar(char str[], char ch) {
    int i;
    for(i = 0; i < strlen(str); i++) {
        if(str[i] == ch) {
            return i; 
        }
    }
    return -1;  
}
int main() {
    char str[100], ch;
    int pos;
    printf("Enter a string: ");
    gets(str);   
    printf("Enter character to find: ");
    scanf("%c", &ch);
    pos = findChar(str, ch);
    if(pos == -1)
        printf("Character '%c' NOT found\n", ch);
    else
        printf("Character '%c' found at position %d\n", ch, pos + 1);
    return 0;
}
