//20.Accept monthly salary from the user and deduct 10% insurance premium,
//10% loan installment find out of remaining salary

#include <stdio.h>

int main() {
    float monthlySalary, remainingSalary, insurancePremium, loanInstallment;

    // Input monthly salary
    printf("Enter monthly salary: ");
    scanf("%f", &monthlySalary);

    // Calculate insurance premium
    insurancePremium = 0.10 * monthlySalary;

    // Calculate remaining salary after insurance premium deduction
    remainingSalary = monthlySalary - insurancePremium;

    // Calculate loan installment
    loanInstallment = 0.10 * remainingSalary;

    // Deduct loan installment from remaining salary
    remainingSalary -= loanInstallment;
    printf("Remaining salary after deducting insurance premium and loan installment: Rs. %.2f\n", remainingSalary);
}

