#include<stdio.h>
struct Student{
    char name[20];
    float percentage;
    int age;
};
void main()
{
    struct Student b[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter name: ");
        scanf("%s",b[i].name);
        printf("Enter percentage: ");
        scanf("%f",b[i].percentage);
        printf("Enter age: ");
        scanf("%d",b[i].age);
    }
     for(i=0;i<5;i++)
    {
        printf("%s",b[i].name);
        printf("%f",b[i].percentage);
        printf("%d",b[i].age);
        
    }

}