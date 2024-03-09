//27.Convert days into months

#include<stdio.h>
int main(){
	int days,months;
	printf("Enter value of days : ");
	scanf("%d",&days);
	months = days/30;
	days = days%30;
	printf("Months is %d , Days is %d",months,days);
}
