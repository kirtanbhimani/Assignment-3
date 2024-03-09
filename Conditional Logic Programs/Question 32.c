//32.Write a C program to input basic salary of an employee and calculateits
//Gross salary according to following:
//Basic Salary <= 10000 : HRA = 20%, DA = 80%
//Basic Salary <= 20000 : HRA = 25%, DA = 90%
//Basic Salary > 20000 : HRA = 30%, DA = 95%

#include <stdio.h>

int main() {
    float basicSalary, grossSalary, hra, da;
    // Input basic salary
    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);
    // Calculate HRA and DA based on basic salary
    if (basicSalary <= 10000) {
        hra = 0.20 * basicSalary;
        da = 0.80 * basicSalary;
    } else if (basicSalary <= 20000) {
        hra = 0.25 * basicSalary;
        da = 0.90 * basicSalary;
    } else {
        hra = 0.30 * basicSalary;
        da = 0.95 * basicSalary;
    }
    // Calculate gross salary
    grossSalary = basicSalary + hra + da;
    printf("Gross Salary: Rs. %.2f\n", grossSalary);
}

