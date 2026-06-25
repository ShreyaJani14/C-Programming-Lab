#include <stdio.h>
struct Student {
    int roll;
    char name[20];
    float marks;
};
void main() {
    struct Student s1 = {101, "Shreya", 89.5};
    struct Student *ptr;
    ptr = &s1;
    printf("Student Details using Structure Pointer:\n");
    printf("Roll Number: %d\n", ptr->roll);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);
}
