#include <stdio.h>
struct Emploee{
    char name[200];
    char position[200];
    int salary;
}a1,a2;
void main(){
        printf("Enter 1 emploee name: ");
        scanf("%s",a1.name);
        printf("Enter 1 emploee position: ");
        scanf("%s",a1.position);
        printf("Enter 1 salary: ");
        scanf("%d",&a1.salary);
        printf("Enter 2 emploee name: ");
        scanf("%s",a2.name);
        printf("Enter 2 emploee position: ");
        scanf("%s",a2.position);
        printf("Enter 2 salary: ");
        scanf("%d",&a2.salary);
        printf("%s %s %d \n%s %s %d",a1.name,a1.position,a1.salary,a2.name,a2.position,a2.salary);
}