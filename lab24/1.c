#include <stdio.h>
#include <stdlib.h>
void main() {
    int *ptrInt=(int *)malloc(sizeof(int));
    char *ptrChar=(char *)malloc(sizeof(char));
    float *ptrFloat=(float *)malloc(sizeof(float));
    if(ptrInt == NULL || ptrChar == NULL || ptrFloat == NULL) {
        printf("Memory allocation failed!");
    }
    printf("Enter an integer value: ");
    scanf("%d", ptrInt);
    printf("Enter a character value: ");
    scanf(" %c", ptrChar);  
    printf("Enter a float value: ");
    scanf("%f", ptrFloat);
    printf("\nValues stored in dynamically allocated memory:\n");
    printf("Integer: %d\n", *ptrInt);
    printf("Character: %c\n", *ptrChar);
    printf("Float: %.2f\n", *ptrFloat);
    free(ptrInt);
    free(ptrChar);
    free(ptrFloat);
    printf("\nMemory successfully deallocated.");
}
