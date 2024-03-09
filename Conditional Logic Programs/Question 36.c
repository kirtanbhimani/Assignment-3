//36.Write a C program to input electricity unit charges and calculate total
//electricity bill according to the given condition:
//For first 50 units Rs. 0.50/unit
//For next 100 units Rs. 0.75/unit
//For next 100 units Rs. 1.20/unit
//For unit above 250 Rs. 1.50/unit
//An additional surcharge of 20% is added to the bill

#include<stdio.h>
int main(){
	float units, totalBill;
    printf("Enter the total electricity units consumed: ");
    scanf("%f", &units);
    if (units <= 50) {
        totalBill = units * 0.50;                             //For first 50 units Rs. 0.50/unit
    } else if (units <= 150) {                                // Upper 50 and next 100 units = 150 units
        totalBill = 50 * 0.50 + (units - 50) * 0.75;          //For next 100 units Rs. 0.75/unit
    } else if (units <= 250) {                                // Upper 150 units and next 100 units = 250 units 
        totalBill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;          //For next 100 units Rs. 1.20/unit
    } else {                                                                // Upper 250 and next above to 250 units
        totalBill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;               //For unit above 250 Rs. 1.50/unit
    }
    totalBill *= 1.20;          //Add 20% surcharge
    printf("Total electricity bill including 20%% surcharge: Rs. %.2f\n", totalBill);
}
