#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Customer
{
    int id;
    char name[30];
    char mobile[15];
    int units;
    float amount;
};

void addRecord();
void viewRecord();
void modifyRecord();
void searchRecord();
void deleteRecord();
void payment();

int main()
{
    int choice;

    while(1)
    {
        printf("\n========== TELECOM BILLING SYSTEM ==========\n");
        printf("1. Add New Record\n");
        printf("2. View All Records\n");
        printf("3. Modify Record\n");
        printf("4. View Payment\n");
        printf("5. Search Record\n");
        printf("6. Delete Record\n");
        printf("7. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                addRecord();
                break;

            case 2:
                viewRecord();
                break;

            case 3:
                modifyRecord();
                break;

            case 4:
                payment();
                break;

            case 5:
                searchRecord();
                break;

            case 6:
                deleteRecord();
                break;

            case 7:
                printf("Thank You!\n");
                exit(0);

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}

void addRecord()
{
    FILE *fp;
    struct Customer c;

    fp=fopen("telecom.dat","ab");

    printf("\nEnter Customer ID: ");
    scanf("%d",&c.id);

    printf("Enter Customer Name: ");
    scanf("%s",c.name);

    printf("Enter Mobile Number: ");
    scanf("%s",c.mobile);

    printf("Enter Units Consumed: ");
    scanf("%d",&c.units);

    if(c.units<=100)
        c.amount=c.units*1.5;
    else if(c.units<=200)
        c.amount=(100*1.5)+(c.units-100)*2.5;
    else
        c.amount=(100*1.5)+(100*2.5)+(c.units-200)*4;

    fwrite(&c,sizeof(c),1,fp);

    fclose(fp);

    printf("\nRecord Added Successfully.\n");
}
void viewRecord()
{
    FILE *fp;
    struct Customer c;

    fp = fopen("telecom.dat", "rb");

    if(fp == NULL)
    {
        printf("\nNo Records Found!\n");
        return;
    }

    printf("\n==============================\n");
    printf("Customer Records\n");
    printf("==============================\n");

    while(fread(&c, sizeof(c), 1, fp))
    {
        printf("\nCustomer ID : %d", c.id);
        printf("\nName        : %s", c.name);
        printf("\nMobile No.  : %s", c.mobile);
        printf("\nUnits       : %d", c.units);
        printf("\nAmount      : %.2f\n", c.amount);
    }

    fclose(fp);
}
void searchRecord()
{
    FILE *fp;
    struct Customer c;
    int id, found = 0;

    fp = fopen("telecom.dat", "rb");

    if(fp == NULL)
    {
        printf("\nNo Records Found!\n");
        return;
    }

    printf("Enter Customer ID to Search: ");
    scanf("%d", &id);

    while(fread(&c, sizeof(c), 1, fp))
    {
        if(c.id == id)
        {
            found = 1;

            printf("\nRecord Found\n");
            printf("--------------------------\n");
            printf("Customer ID : %d\n", c.id);
            printf("Name        : %s\n", c.name);
            printf("Mobile No.  : %s\n", c.mobile);
            printf("Units       : %d\n", c.units);
            printf("Amount      : %.2f\n", c.amount);

            break;
        }
    }

    if(found == 0)
    {
        printf("\nRecord Not Found!\n");
    }

    fclose(fp);
}
void modifyRecord()
{
    FILE *fp, *temp;
    struct Customer c;
    int id, found = 0;

    fp = fopen("telecom.dat", "rb");
    temp = fopen("temp.dat", "wb");

    if(fp == NULL)
    {
        printf("\nNo Records Found!\n");
        return;
    }

    printf("Enter Customer ID to Modify: ");
    scanf("%d", &id);

    while(fread(&c, sizeof(c), 1, fp))
    {
        if(c.id == id)
        {
            found = 1;

            printf("\nEnter New Name: ");
            scanf("%s", c.name);

            printf("Enter New Mobile Number: ");
            scanf("%s", c.mobile);

            printf("Enter New Units: ");
            scanf("%d", &c.units);

            // Calculate new bill
            if(c.units <= 100)
                c.amount = c.units * 1.5;
            else if(c.units <= 200)
                c.amount = (100 * 1.5) + (c.units - 100) * 2.5;
            else
                c.amount = (100 * 1.5) + (100 * 2.5) + (c.units - 200) * 4;

            printf("\nRecord Modified Successfully!\n");
        }

        fwrite(&c, sizeof(c), 1, temp);
    }

    fclose(fp);
    fclose(temp);

    remove("telecom.dat");
    rename("temp.dat", "telecom.dat");

    if(found == 0)
    {
        printf("\nRecord Not Found!\n");
    }
}
void deleteRecord()
{
    FILE *fp, *temp;
    struct Customer c;
    int id, found = 0;

    fp = fopen("telecom.dat", "rb");
    temp = fopen("temp.dat", "wb");

    if(fp == NULL)
    {
        printf("\nNo Records Found!\n");
        return;
    }

    printf("Enter Customer ID to Delete: ");
    scanf("%d", &id);

    while(fread(&c, sizeof(c), 1, fp))
    {
        if(c.id == id)
        {
            found = 1;
            continue;   // Skip writing this record
        }

        fwrite(&c, sizeof(c), 1, temp);
    }

    fclose(fp);
    fclose(temp);

    remove("telecom.dat");
    rename("temp.dat", "telecom.dat");

    if(found)
        printf("\nRecord Deleted Successfully!\n");
    else
        printf("\nRecord Not Found!\n");
}
void payment()
{
    FILE *fp;
    struct Customer c;
    int id, found = 0;

    fp = fopen("telecom.dat", "rb");

    if(fp == NULL)
    {
        printf("\nNo Records Found!\n");
        return;
    }

    printf("Enter Customer ID: ");
    scanf("%d", &id);

    while(fread(&c, sizeof(c), 1, fp))
    {
        if(c.id == id)
        {
            found = 1;

            printf("\n========= BILL =========\n");
            printf("Customer ID   : %d\n", c.id);
            printf("Customer Name : %s\n", c.name);
            printf("Mobile Number : %s\n", c.mobile);
            printf("Units Used    : %d\n", c.units);
            printf("Bill Amount   : %.2f\n", c.amount);
            printf("========================\n");

            break;
        }
    }

    fclose(fp);

    if(found == 0)
    {
        printf("\nRecord Not Found!\n");
    }
}