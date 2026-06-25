#include <stdio.h>
void main() {
    FILE *fp; 
    fp = fopen("Shreya.txt", "w");
    fprintf(fp, "Hello, this is a test file.\n");
    fprintf(fp, "File handling in C is easy!");
    fclose(fp);
    printf("File created and data written successfully.\n");
}
