#include <stdio.h>
int main() {
    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen("abc.txt", "r");
    if(fp1 == NULL) {
        printf("Error: abc.txt not found!\n");
        return 0;
    }
    fp2 = fopen("Hello.txt", "a");
    if(fp2 == NULL) {
        printf("Error: Hello.txt not found!\n");
        fclose(fp1);
        return 0;
    }
    fputc('\n', fp2);
    while((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp2);
    }
    printf("Contents of abc.txt appended to Hello.txt successfully!\n");
    fclose(fp1);
    fclose(fp2);
    return 0;
}
