#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    int backlogs;
};
void main() {
    struct Student s;
    FILE *fp;
    int n, i;
    fp = fopen("student.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!");
    }
    printf("Enter number of students: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("\nEnter data for student %d\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s.roll);
        printf("Name: ");
        scanf("%s", s.name);
        printf("Number of Backlogs: ");
        scanf("%d", &s.backlogs);
        fprintf(fp, "%d %s %d\n", s.roll, s.name, s.backlogs);
    }
    fclose(fp);
    fp = fopen("student.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!");
    }
    printf("\nStudents having more than 5 backlogs:\n");
    while (fscanf(fp, "%d %s %d", &s.roll, s.name, &s.backlogs) != EOF) {
        if (s.backlogs > 5) {
            printf("Roll Number: %d | Name: %s | Backlogs: %d\n", s.roll, s.name, s.backlogs);
        }
    }
    fclose(fp);
}
