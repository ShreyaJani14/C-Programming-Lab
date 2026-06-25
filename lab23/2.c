#include <stdio.h>

struct Student
{
    int roll;
    char name[30];
    int backlog;
};

int main()
{
    FILE *fp;
    struct Student s[100];
    int n = 0, i, rollNo;

    // Read data from file
    fp = fopen("student.txt", "r");

    if (fp == NULL)
    {
        printf("File not found.");
        return 0;
    }

    while (fscanf(fp, "%d %s %d", &s[n].roll, s[n].name, &s[n].backlog) != EOF)
    {
        n++;
    }

    fclose(fp);

    // Modify backlog
    printf("Enter Roll Number whose backlog you want to change: ");
    scanf("%d", &rollNo);

    for (i = 0; i < n; i++)
    {
        if (s[i].roll == rollNo)
        {
            s[i].backlog = 3;
            break;
        }
    }

    // Write updated data back to file
    fp = fopen("student.txt", "w");

    for (i = 0; i < n; i++)
    {
        fprintf(fp, "%d %s %d\n", s[i].roll, s[i].name, s[i].backlog);
    }

    fclose(fp);

    // Verify by reading and printing
    fp = fopen("student.txt", "r");

    printf("\nUpdated Student Records:\n");

    while (fscanf(fp, "%d %s %d", &s[0].roll, s[0].name, &s[0].backlog) != EOF)
    {
        printf("Roll No: %d\tName: %s\tBacklogs: %d\n",
               s[0].roll, s[0].name, s[0].backlog);
    }

    fclose(fp);

    return 0;
}