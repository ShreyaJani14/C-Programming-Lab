#include <stdio.h>
#include <string.h>
int main() {
    int n,len;
    printf("Enter the length of the string: ");
    scanf("%d",&n);
    char s[n];
    printf("Enter the string: ");
    scanf(" %[^\n]s",s);
    printf("string is : %s\n",s);
    len= strlen(s);
    printf("Length of the string: %d\n", len);
    return 0;
}
