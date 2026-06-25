#include <stdio.h>
int main() {
    FILE *source, *destination;
    char ch;
    source = fopen("abc.txt", "r");
    if(source == NULL) {
        printf("Error: abc.txt not found!\n");
        return 0;
    }
    destination = fopen("Hello.txt", "w");
    if(destination == NULL) {
        printf("Error creating destination file!\n");
        fclose(source);
        return 0;
    }
    while((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }
    printf("File copied successfully!\n");
    fclose(source);
    fclose(destination);
    return 0;
}
