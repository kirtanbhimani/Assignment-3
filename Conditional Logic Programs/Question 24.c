//19.Write a program in C to calculate and print the electricity bill of a given
//customer. The customer ID, name, and unit consumed by the user should
//be captured from the keyboard to display the total amount to be paid to the
//customer. The charge are as follow :
//20. Unit 
//21. Charge/unit
//22. upto 350 
//23. @1.20
//24. 350 and above but less than 600 

#include <stdio.h>

int main() {
    int customerId;
    char customerName[50];
    float unitConsumed, totalAmount;

    // Input customer details
    printf("Enter customer ID: ");
    scanf("%d", &customerId);

    printf("Enter customer name: ");
    scanf("%s", customerName);

    printf("Enter unit consumed: ");
    scanf("%f", &unitConsumed);

    // Calculate total amount based on the provided charges
    if (unitConsumed <= 350) {
        totalAmount = unitConsumed * 1.20;
    } else if (unitConsumed < 600) {
        totalAmount = 350 * 1.20 + (unitConsumed - 350) * 1.50;
    } else {
        printf("Invalid unit consumption. The charge is only up to 600 units.\n");
        return 1; // Exit with error code 1
    }

    // Print bill details
    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customerId);
    printf("Customer Name: %s\n", customerName);
    printf("Unit Consumed: %.2f\n", unitConsumed);
    printf("Total Amount: Rs. %.2f\n", totalAmount);
}

