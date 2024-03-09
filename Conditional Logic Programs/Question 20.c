//19.Write a program in C to calculate and print the electricity bill of a given
//customer. The customer ID, name, and unit consumed by the user should
//be captured from the keyboard to display the total amount to be paid to the
//customer. The charge are as follow :
//20. Unit 
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
    if (unitConsumed <= 300) {
        totalAmount = unitConsumed * 1.20;
    } else if (unitConsumed <= 600) {
        totalAmount = 300 * 1.20 + (unitConsumed - 300) * 2.00;
    } else if (unitConsumed <= 800) {
        totalAmount = 300 * 1.20 + 300 * 2.00 + (unitConsumed - 600) * 3.00;
    } else {
        totalAmount = 300 * 1.20 + 300 * 2.00 + 200 * 3.00 + (unitConsumed - 800) * 4.00;
    }

    // Print bill details
    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customerId);
    printf("Customer Name: %s\n", customerName);
    printf("Unit Consumed: %.2f\n", unitConsumed);
    printf("Total Amount: Rs. %.2f\n", totalAmount);
}

