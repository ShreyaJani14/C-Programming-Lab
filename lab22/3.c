#include <stdio.h>
int main() {
    FILE *fp;
    char ch;
    fp = fopen("Hello.txt", "w");
    if(fp == NULL) {
        printf("Error opening file!");
        return 0;
    }
    fprintf(fp, "Hello File Handling\n");
    fprintf(fp, "This line is written using fprintf().\n");
    fputc('A', fp);
    fputc('\n', fp);
    fclose(fp);
    fp = fopen("Hello.txt", "r");
    printf("Contents of file using fgetc():\n");
    while((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fseek(fp, 0, SEEK_SET); 
    printf("\nReading first word using fscanf():\n");
    char word[20];
    fscanf(fp, "%s", word);
    printf("%s\n", word);
    rewind(fp);
    printf("\nAfter rewind(), reading first character again: ");
    ch = fgetc(fp);
    printf("%c\n", ch);
    fclose(fp);
    return 0;
}
