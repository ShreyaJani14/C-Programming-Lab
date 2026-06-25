#include <stdio.h>
struct Address {
    char city[20];
    int pincode;
};
struct Student {
    int roll;
    char name[20];
    struct Address addr; 
};
void main() {
    struct Student s1 = {101, "Shreya", {"Rajkot", 360004}};
    printf("Student Details:\n");
    printf("Roll Number: %d\n", s1.roll);
    printf("Name: %s\n", s1.name);
    printf("City: %s\n", s1.addr.city);
    printf("Pincode: %d\n", s1.addr.pincode);
}
