//19.Write a program in C to calculate and print the electricity bill of a given
//customer. The customer ID, name, and unit consumed by the user should
//be captured from the keyboard to display the total amount to be paid to the
//customer. The charge are as follow :
//20. Unit 
//21. Charge/unit
//22. upto 350 
//23. @1.20
//24. 350 and above but less than 600
//25. @1.50
//26. 600 and above but less than 800
//27. @1.80
//28. 800 and above 
//29. @2.00
//30.If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe
//minimum bill should be of Rs. 256/-

#include <stdio.h>

int main() {
    int customerId;
    char customerName[50];
    float unitConsumed, totalAmount, chargePerUnit, surcharge = 0;

    // Input customer details
    printf("Enter customer ID: ");
    scanf("%d", &customerId);

    printf("Enter customer name: ");
    scanf("%s", customerName);

    printf("Enter unit consumed: ");
    scanf("%f", &unitConsumed);

    // Determine charge per unit based on unit consumption
    if (unitConsumed <= 350) {
        chargePerUnit = 1.20;
    } else if (unitConsumed < 600) {
        chargePerUnit = 1.50;
    } else if (unitConsumed < 800) {
        chargePerUnit = 1.80;
    } else {
        chargePerUnit = 2.00;
    }

    // Calculate total amount before surcharge
    totalAmount = unitConsumed * chargePerUnit;

    // Apply surcharge if the bill exceeds Rs. 800
    if (totalAmount > 800) {
        surcharge = totalAmount * 0.18; // 18% surcharge
        totalAmount += surcharge;
    }

    // Check if the total amount is less than the minimum bill of Rs. 256
    if (totalAmount < 256) {
        totalAmount = 256; // Minimum bill amount
    }

    // Print bill details
    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customerId);
    printf("Customer Name: %s\n", customerName);
    printf("Unit Consumed: %.2f\n", unitConsumed);
    printf("Charge per Unit: Rs. %.2f\n", chargePerUnit);
    printf("Total Amount Before Surcharge: Rs. %.2f\n", unitConsumed * chargePerUnit);
    printf("Surcharge: Rs. %.2f\n", surcharge);
    printf("Total Amount to be Paid: Rs. %.2f\n", totalAmount);
}

