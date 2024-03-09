//31.Convert kilometers into meters

#include<stdio.h>
int main(){
	float km,mtr;
	printf("Enter distance in Kilometers = ");
	scanf("%f",&km);
	mtr=km*1000;
	printf("Distance in meters is %.2f meters",mtr);
}
