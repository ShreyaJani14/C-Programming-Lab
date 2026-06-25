#include <stdio.h>
int main() {
    double marks;
    char grade;
    printf("Enter your marks: ");
    scanf("%lf", &marks);

    if (marks >= 90) {
        grade = 'A';
    } else if (marks >= 80) {
        grade = 'B';
    } else if (marks >= 70) {
        grade = 'C';
    } else if (marks >= 60) {
        grade = 'D';
    } else if (marks>100 || marks<0) {
        printf("Error: Invalid marks entered.\n");
        return 1;
    } else {
        grade = 'F';
    }

    printf("Grade: %c\n", grade);

    return 0;
}
