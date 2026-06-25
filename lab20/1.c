#include <stdio.h>
#include <string.h>
void main() {
    char str[100], rev[100];
    printf("Enter a string: ");
    gets(str);  
    strcpy(rev, str);  
    strrev(rev);        
    if(strcmp(str, rev) == 0)
        printf("String is a Palindrome.\n");
    else
        printf("String is NOT a Palindrome.\n");
}
