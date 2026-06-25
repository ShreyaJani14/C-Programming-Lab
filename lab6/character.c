#include <stdio.h>
void main()
{
    char ch;
    printf("please enter a character: ");
    scanf("%c",&ch);
    if (ch>='a' && ch<='z')
        printf("you entered a lowercase letter");
    else if (ch>='A' && ch<='Z')
        printf("you entered an uppercase letter");
    else if (ch>='0' && ch<='9')
        printf("you entered a digit");
    else
        printf("you entered a special character");
}