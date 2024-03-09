//19.Write a program in C to calculate and print the electricity bill of a given
//customer. The customer ID, name, and unit consumed by the user should
//be captured from the keyboard to display the total amount to be paid to the
//customer
#include <stdio.h>

int main() {
    int customerId;
    char customerName[50];
    float unitConsumed, totalAmount;
    printf("Enter customer ID: ");
    scanf("%d", &customerId);
    printf("Enter customer name: ");
    scanf("%s", customerName);
    printf("Enter unit consumed: ");
    scanf("%f", &unitConsumed);
    // Calculate total amount
    if (unitConsumed <= 100) {
        totalAmount = unitConsumed * 1.20;
    } else if (unitConsumed <= 300) {
        totalAmount = 100 * 1.20 + (unitConsumed - 100) * 2.00;
    } else {
        totalAmount = 100 * 1.20 + 200 * 2.00 + (unitConsumed - 300) * 3.00;
    }
    // Additional charges
    totalAmount += totalAmount * 0.2; // Adding 20% surcharge
    // Print bill details
    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customerId);
    printf("Customer Name: %s\n", customerName);
    printf("Unit Consumed: %.2f\n", unitConsumed);
    printf("Total Amount: Rs. %.2f\n", totalAmount);

}

