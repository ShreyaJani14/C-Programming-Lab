#include <stdio.h>

struct Student
{
    int roll;
    char name[30];
    int backlog;
};

void modifyData()
{
    FILE *fp;
    struct Student s[100];
    int n = 0, i, roll;

    fp = fopen("student.txt", "r");

    while(fscanf(fp,"%d %s %d",&s[n].roll,s[n].name,&s[n].backlog)!=EOF)
    {
        n++;
    }

    fclose(fp);

    printf("Enter Roll Number to modify backlog: ");
    scanf("%d",&roll);

    for(i = 0; i < n; i++)
    {
        if(s[i].roll == roll)
        {
            s[i].backlog = 3;
            break;
        }
    }

    fp = fopen("student.txt", "w");

    for(i = 0; i < n; i++)
    {
        fprintf(fp,"%d %s %d\n",
                s[i].roll,
                s[i].name,
                s[i].backlog);
    }

    fclose(fp);
}

void displayData()
{
    FILE *fp;
    struct Student s;

    fp = fopen("student.txt", "r");

    printf("\nUpdated Student Records:\n");

    while(fscanf(fp,"%d %s %d",&s.roll,s.name,&s.backlog)!=EOF)
    {
        printf("Roll No: %d\tName: %s\tBacklogs: %d\n",
               s.roll,s.name,s.backlog);
    }

    fclose(fp);
}

int main()
{
    modifyData();
    displayData();

    return 0;
}