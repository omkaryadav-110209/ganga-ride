
#include <stdio.h>

int main()
{
    int ride, adults, children;
    float price, total, discount, finalAmount;

    printf("***** WELCOME TO THE GANGA RIDEEEEE! *****\n");

    printf("Ride No | Ride                    | Price Per Adult\n");
    printf("  1     | Assi To Dashashwamedh   | 100\n");
    printf("  2     | Sunrise Ride            | 150\n");
    printf("  3     | Evening Aarti Ride      | 200\n");
    printf("  4     | Full Ghat Tour          | 300\n");
    printf("  0     | Close Counter           | ----\n");

    printf("\nSelect Your Ride: ");
    scanf("%d", &ride);

    if (ride == 0)
    {
        printf("Counter Closed!");
    }
    else if (ride == 1 || ride == 2 || ride == 3 || ride == 4)
    {
        if (ride == 1)
            price = 100;
        else if (ride == 2)
            price = 150;
        else if (ride == 3)
            price = 200;
        else
            price = 300;

        printf("Enter Number of Adults: ");
        scanf("%d", &adults);

        printf("Enter Number of Children: ");
        scanf("%d", &children);

        total = (adults * price) + (children * price / 2);

        if (adults + children >= 10)
            discount = total * 15 / 100;
        else if (adults + children >= 5)
            discount = total * 10 / 100;
        else
            discount = 0;

        finalAmount = total - discount;

        printf("\n***** GANGA RIDE BILL *****\n");
        printf("Total Fare: Rs. %.2f\n", total);
        printf("Discount: Rs. %.2f\n", discount);
        printf("Final Amount: Rs. %.2f\n", finalAmount);
        printf("THANK YOU! ENJOY YOUR RIDE!");
    }
    else
    {
        printf("\nINVALID RIDE SELECTION!");
    }

    return 0;
}
