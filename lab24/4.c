#include <stdio.h>
#include <stdlib.h>
struct Student {
    int roll;
    char name[30];
    float marks;
};
void main() {
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));
    if(s == NULL) 
    {
        printf("Memory allocation failed!");
    }
    printf("Enter Roll Number: ");
    scanf("%d", &s->roll);
    printf("Enter Name: ");
    scanf("%s", s->name);
    printf("Enter Marks: ");
    scanf("%f", &s->marks);
    printf("\n--- Student Details ---\n");
    printf("Roll No: %d\n", s->roll);
    printf("Name: %s\n", s->name);
    printf("Marks: %.2f\n", s->marks);
    free(s);
}