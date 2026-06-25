#include <stdio.h>
void main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    (ch>='a'||ch<='z'||ch>='A'||ch<='Z')?printf("%c is alphabet",ch):printf("%c is not alphabet",ch);
}