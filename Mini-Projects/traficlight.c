#include <stdio.h>
int main() {
    char signal;
    printf("Enter the traffic light signal (R for Red, Y for Yellow, G for Green): ");
    scanf(" %c", &signal);
    if (signal == 'R') {
        printf("Stop\n");
    } else if (signal == 'Y') {
        printf("Caution\n");
    } else if (signal == 'G') {
        printf("Go\n");
    } else {
        printf("Invalid signal\n");
    }
    return 0;
}