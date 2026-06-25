#include <stdio.h>
void toUppercase(char *s) {
    while (*s) {
        if (*s >= 'a' && *s <= 'z') {
            *s = *s - ('a' - 'A');   
        }
        s++;
    }
}
int main() {
    char str[200];
    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Input error\n");
        return 1;
    }
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == '\n') { str[i] = '\0'; break; }
    }
    toUppercase(str);
    printf("Uppercase string: %s\n", str);
    return 0;
}
