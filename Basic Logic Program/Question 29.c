//29.Convert minutes into seconds and hours

#include<stdio.h>
int main(){
	int hrs,min,sec;
	printf("Enter Minutes = ");
	scanf("%d",&min);
	hrs=min/60;
	sec=min*60;
	printf("Seconds are %d and Hours are %d",sec,hrs);
}
