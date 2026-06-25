#include <stdio.h>
struct Time {
    int hour;
    int min;
    int sec;
};
void main() {
    struct Time t1, t2, result;
    printf("Enter first time (hh mm ss): ");
    scanf("%d %d %d", &t1.hour, &t1.min, &t1.sec);
    printf("Enter second time (hh mm ss): ");
    scanf("%d %d %d", &t2.hour, &t2.min, &t2.sec);
    result.sec = t1.sec + t2.sec;
    if (result.sec >= 60) {
        result.min = result.sec / 60;
        result.sec = result.sec % 60;
    } else {
        result.min = 0;
    }
    result.min += t1.min + t2.min;
    if (result.min >= 60) {
        result.hour = result.min / 60;
        result.min = result.min % 60;
    } else {
        result.hour = 0;
    }
    result.hour += t1.hour + t2.hour;
    printf("\nTotal Time = %02d:%02d:%02d\n", result.hour, result.min, result.sec);
}
