#include <stdio.h>
#include <string.h>
void stringOperations(char s1[], char s2[])
{
    printf("enter your preference (1 for strlen, 2 for strcmp, 3 for strcpy, 4 for strcat, 5 strrev, 6 strlwr, 7 strupr ): ");
    int choice;
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("Length = %lu", strlen(s1));
            break;
        case 2:
            printf("Comparison = %d", strcmp(s1, s2));
            break;
        case 3:
            printf("Before copy s1 = %s, s2 = %s\n", s1, s2);
            strcpy(s1, s2);
            printf("After copy s1 = %s, s2 = %s\n", s1, s2);
            break;
        case 4:
            printf("Before concat s1 = %s, s2 = %s\n", s1, s2);
            strcat(s1, s2);
            printf("After concat s1 = %s, s2 = %s\n", s1, s2);
            break;
        case 5:
            strrev(s1);
            printf("Reversed s1 = %s\n", s1);
            break;
        case 6:
            strlwr(s1);
            printf("Lowercase s1 = %s\n", s1);
            break;
        case 7:
            strupr(s1);
            printf("Uppercase s1 = %s\n", s1);
            break;
        default:
            printf("Invalid choice\n");
            
    }
}
void  main() {
    char s1[] = "Hello",s2[]="World";
    stringOperations(s1, s2);   
}
