//30.WAP to convert years into days and days into years

#include<stdio.h>
int main(){
	int years,days;
	printf("Enter years = ");
		scanf("%d",&years);
	days=years*365;
	printf("If year are %d then Days are %d\n",years,days);
	printf("Enter Days = ");
		scanf("%d",&days);
	years=days/365;
	printf("If Days are %d then Year is %d",days,years);
}
