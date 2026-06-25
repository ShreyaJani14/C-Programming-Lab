#include <stdio.h>

struct Student
{
    int roll;
    char name[30];
    int backlog;
};

void writeData()
{
    FILE *fp;
    struct Student s;
    int n, i;

    fp = fopen("student.txt", "w");

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s.roll);

        printf("Enter Name: ");
        scanf("%s", s.name);

        printf("Enter Backlogs: ");
        scanf("%d", &s.backlog);

        fprintf(fp, "%d %s %d\n", s.roll, s.name, s.backlog);
    }

    fclose(fp);
}

void displayMoreThan5()
{
    FILE *fp;
    struct Student s;

    fp = fopen("student.txt", "r");

    printf("\nStudents having more than 5 backlogs:\n");

    while(fscanf(fp,"%d %s %d",&s.roll,s.name,&s.backlog)!=EOF)
    {
        if(s.backlog > 5)
        {
            printf("Roll No: %d\tName: %s\tBacklogs: %d\n",
                   s.roll,s.name,s.backlog);
        }
    }

    fclose(fp);
}

int main()
{
    writeData();
    displayMoreThan5();

    return 0;
}