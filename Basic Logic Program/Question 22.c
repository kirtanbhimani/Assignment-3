//22.Calculate compound interest (Compound Interest formula:
//a. Formula to calculate compound interest annually is given by:
//Amount= P(1 + R/100)t
//b. Compound Interest = Amount – P
#include <stdio.h>
#include <math.h>
int main() {
    float p,r,t,amount,compound_interest;   //p=principal,r=rate,t=time
    printf("Enter principal amount: ");
    scanf("%f",&p);
    printf("Enter rate of interest (in percentage): ");
    scanf("%f",&r);
    printf("Enter time duration (in years): ");
    scanf("%f",&t);
    amount = p*pow((1 +r/100),t);
    printf("Amount is %d\n",&amount);
    compound_interest = amount- p;
    printf("Compound interest = %.2f\n", compound_interest);
}
