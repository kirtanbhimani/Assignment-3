//19.Calculate compound interest
#include<stdio.h>
#include<math.h>
int main() {
    float p,r,t,compound_interest;  //p=principal,r=rate,t=time

    printf("Enter principal amount: ");
    scanf("%f", &p);
    printf("Enter rate of interest (in percentage): ");
    scanf("%f", &r);
    printf("Enter time duration (in years): ");
    scanf("%f", &t);
    compound_interest=p*(pow((1+ r/100),t))-p;
    printf("Compound interest = %.2f\n", compound_interest);
}
