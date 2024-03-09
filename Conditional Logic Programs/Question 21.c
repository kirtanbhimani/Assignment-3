//19.Write a program in C to calculate and print the electricity bill of a given
//customer. The customer ID, name, and unit consumed by the user should
//be captured from the keyboard to display the total amount to be paid to the
//customer. The charge are as follow :
//20. Unit 
//21. Charge/unit
#include <stdio.h>

int main() {
    int customerId;
    char customerName[50];
    float unitConsumed, chargePerUnit, totalAmount;

    // Input customer details and charge per unit
    printf("Enter customer ID: ");
    scanf("%d", &customerId);

    printf("Enter customer name: ");
    scanf("%s", customerName);

    printf("Enter unit consumed: ");
    scanf("%f", &unitConsumed);

    printf("Enter charge per unit: ");
    scanf("%f", &chargePerUnit);

    // Calculate total amount
    totalAmount = unitConsumed * chargePerUnit;

    // Print bill details
    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customerId);
    printf("Customer Name: %s\n", customerName);
    printf("Unit Consumed: %.2f\n", unitConsumed);
    printf("Total Amount: Rs. %.2f\n", totalAmount);
}

