#include <stdio.h>
void main() {
    char str1[100], str2[100];
    char *p1, *p2;
    printf("Enter a string: ");
    gets(str1);
    int i = 0,count=0;
    while (str1[i] != '\0') {
        if (str1[i] == '\n') {
            str1[i] = '\0';
            break;
        }
        i++;
        count++;
    }
    p1 = str1;  
    p2 = str2;  
    for(i = 0; i < count; i++) {
        *p2 = *p1;
        p1++;
        p2++;
    }
    *p2 = '\0';  

    printf("Original String : %s\n", str1);
    printf("Copied String   : %s\n", str2);
}

