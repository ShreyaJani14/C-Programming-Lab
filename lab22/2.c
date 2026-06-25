#include<stdio.h>
void main() {
    FILE *fp; 
    fp = fopen("abc.txt", "r");
    fprintf(fp, " \tWhat is C?\nC is a general-purpose programming language created by Dennis Ritchie at the Bell Laboratories in 1972.\nIt is a very popular language, despite being old. The main reason for its popularity is because it is a fundamental language in the field of computer science.\nC is strongly associated with UNIX, as it was developed to write the UNIX operating system\nC is a procedural programming language, which means that the program is divided into functions and procedures.\n");
    char ch;
    int chars = 0, spaces = 0, tabs = 0, newlines = 0;
    while ((ch = fgetc(fp)) != EOF) {
        chars++; 
        if (ch == ' ')
            spaces++;
        else if (ch == '\t')
            tabs++;
        else if (ch == '\n')
            newlines++;
    }
    fclose(fp);
    printf("Character Count: %d\n", chars);
    printf("Space Count: %d\n", spaces);
    printf("Tab Count: %d\n", tabs);
    printf("New Line Count: %d\n", newlines);
}
