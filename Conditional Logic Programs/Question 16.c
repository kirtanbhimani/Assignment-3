//16.Write a C program to read temperature in centigrade and display a suitable
//message according to the temperature state below:
//Temp < 0 then Freezing weather
//Temp 0-10 then Very Cold weather
//Temp 10-20 then Cold weather
//Temp 20-30 then Normal in Temp
//Temp 30-40 then Its Hot
//Temp >=40 then Its Very Hot

#include<stdio.h>
int main(){
	int temp;
	printf("Enter the value of Temperature : ");
	scanf("%d",&temp);
	if (temp < 0){
		printf("It's Freezing weather...");
	}else if (temp>0,temp<=10){
		printf("It's very cold weather...");
	}else if (temp>10,temp<=20){
		printf("It's cold weather...");
	}else if (temp>20,temp<=30){
		printf("It's Normal in temperature...");
	}else if (temp>30,temp<=40){
		printf("It's Hot...");
	}else{
		printf("It's very hot temperature...");
	}
}
