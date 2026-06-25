#include<stdio.h>
struct Book{
    char title[20];
    char author[20];
    char pub[20];
    float price;
};
void main()
{
    struct Book b[3];
    int i;
    for(i=0;i<3;i++)
    {
        printf("Enter title: ");
        scanf("%s",b[i].title);
        printf("Enter author: ");
        scanf("%s",b[i].author);
        printf("Enter pub: ");
        scanf("%s",b[i].pub);
        printf("Enter price: ");
        scanf("%f",&b[i].price);
    }
     for(i=0;i<3;i++)
    {
        printf("%s",b[i].title);
        printf("%s",b[i].author);
        printf("%s",b[i].pub);
        printf("%f",b[i].price);
    }

}