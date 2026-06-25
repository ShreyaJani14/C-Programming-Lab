#include <stdio.h>
void main()
{
    int units;
    float bill,total_bill;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    if (units < 50) {
        bill = units * 3.5;
    } else if (units <= 100) {
        bill = 50 * 3.5 + (units - 50) * 4.0;
    } else if (units <= 200) {
        bill = 50 * 3.5 + 50 * 4.0 + (units - 100) * 5.2;
    } else {
        bill = 50 * 3.5 + 50 * 4.0 + 100 * 5.2 + (units - 200) * 6.5;
    }
    float surcharge = 0;
    if(units > 100)
    {
        surcharge = 25;
    }
    total_bill = bill + surcharge;
    printf("Total bill (including surcharge): %.2f rupees\n", total_bill);
    return 0;
}