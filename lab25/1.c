#include <stdio.h>
#include <string.h>

void main() {
    char s[100];
    int i, j;

    printf("Enter a string: ");
    scanf("%s", s);  
    for(i = 0; s[i] != '\0'; i++) {
        if(s[i] == '*') {
            i=j;
            if(i >= 0) 
                j--;
        } else {
            i=j;
            j++;
            s[j] = s[i];  
        }
    }

    s[j + 1] = '\0'; 

    printf("String after removing stars: %s", s);
}
