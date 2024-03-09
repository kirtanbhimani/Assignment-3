//1. Write a C program to accept two integers and check whether they are equal or not

#include<stdio.h>
int main(){
	int num1,num2;
	printf("Enter integer value-1 = ");
		scanf("%d",&num1);
	printf("Enter integer value-2 = ");
		scanf("%d",&num2);
	if(num1==num2){
		printf("Number1 and Number2 are equals...");
	}else{
		printf("Number1 and Number2 are not equals...");
	}
}
