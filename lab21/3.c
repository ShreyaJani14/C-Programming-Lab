#include <stdio.h>
struct Student {
    int roll;
    float marks;
    char grade;
};
union Employee {
    int id;
    float salary;
    char level;
};
int main() {
    struct Student s = {101, 89.5, 'A'};
    union Employee e;
    printf("STRUCTURE OUTPUT:\n");
    printf("Roll: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);
    printf("Grade: %c\n", s.grade);
    printf("\nUNION OUTPUT:\n");
    e.id = 1001;
    printf("ID: %d\n", e.id);
    e.salary = 50000.50;   
    printf("Salary: %.2f\n", e.salary);
    e.level = 'B';        
    printf("Level: %c\n", e.level);
    return 0;
}
