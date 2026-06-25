#include <stdio.h>
int my_strncmp(char *s1, char *s2, int n) {
    for(int i=0; i<n; i++) {
        if(s1[i] != s2[i])  
            return s1[i] - s2[i];
        if(s1[i] == '\0')    
            return 0;
    }
    return 0; 
}
void my_strncpy(char *dest, char *src, int n) {
    int i;
    for(i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';  
}
void my_strncat(char *dest, char *src, int n) {
    int i, dlen = 0;
    while(dest[dlen] != '\0')
        dlen++;
    for(i = 0; i < n && src[i] != '\0'; i++) {
        dest[dlen + i] = src[i];
    }
    dest[dlen + i] = '\0';
}
void main() {
    char a[50] = "Hello";
    char b[50] = "World";
    char c[50];
    int n=3;
    int res = my_strncmp(a, b, 3);
    if(res == 0) {
        printf("Strings are equal\n");
    } else if(res < 0) {
        printf("String a is less than String b\n");
    } else {
        printf("String a is greater than String b\n");
    }
    my_strncpy(c, a, 3);
    printf("After strncpy: %s\n", c);
    my_strncat(a, b, 3);
    printf("After strncat: %s\n", a);
}

