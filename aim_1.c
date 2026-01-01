#include <stdio.h>

int main()
{
    int units;
    float bill = 0.0, extraCharge = 50.0;
    printf("Enter total units consumed: ");
    scanf("%d", &units);

    if (units <= 100)
    {
        bill = units * 1.50;
    }
    else if (units <= 200)
    {
        bill = (100 * 1.50) +
               ((units - 100) * 2.50);
    }
    else if (units <= 300)
    {
        bill = (100 * 1.50) +
               (100 * 2.50) +
               ((units - 200) * 4.00);
    }
    else
    {
        bill = (100 * 1.50) +
               (100 * 2.50) +
               (100 * 4.00) +
               ((units - 300) * 6.00);
    }

    bill = bill + extraCharge;
    printf("Total Electricity Bill = $ %.2f\n", bill);
    printf("@ Pratish patel, ERP = 11002");

    return 0;
}
