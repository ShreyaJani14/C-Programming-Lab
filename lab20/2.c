#include <stdio.h>
void main() {
    char str[100], *ptr, cleaned[100];
    int i = 0;
    printf("Enter a string: ");
    gets(str);  
    ptr = str; 
    while(*ptr != '\0') {
        if((*ptr >= 'A' && *ptr <= 'Z') ||
           (*ptr >= 'a' && *ptr <= 'z') ||
           (*ptr >= '0' && *ptr <= '9')) {
            cleaned[i] = *ptr;
            i++;
        } 
        ptr++;
    }
    cleaned[i] = '\0';  
    printf("String after removing space and special characters: %s\n", cleaned);
}
