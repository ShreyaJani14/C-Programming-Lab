#include <stdio.h>
#include<string.h>
void main() {
    char str[100];
    char *p;
    int length = 0;
    printf("Enter a string: ");
    gets(str);
    p = str;
    while (*p != '\0') 
    { 
        length++;
        p++;
    }
    printf("Length of the string = %d\n", length);
}
