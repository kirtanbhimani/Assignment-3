//10.WAP to check whether a number is negative, positive or zero.

#include<stdio.h>
int main(){
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	if(num>=0){
		if(num>0){
			printf("Number is positive...");
		}else{
			printf("Number is zero...");
		}
	}else{
		printf("Number is negative...");
	}
}
