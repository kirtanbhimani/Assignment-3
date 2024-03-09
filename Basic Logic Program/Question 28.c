//28.Convert years into days and months

#include<stdio.h>
int main(){
	int years,months,days;
	printf("Enter years = ");
	scanf("%d",&years);
	months = years * 12;
    days = years * 365;
    printf("Months = %d\n", months);
    printf("Days = %d\n", days);
}
