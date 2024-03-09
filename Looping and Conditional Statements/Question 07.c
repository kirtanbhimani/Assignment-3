//7. WAP to print number in reverse order e.g.: number = 64728 ---> reverse =82746

#include<stdio.h>
int main (){
	int num,reverse=0,reminder;
	printf("Enter a Number : ");
	scanf("%d",&num);
	while (num!=0){
		reminder=num%10;                      //split the numbers
		reverse=reverse*10 + reminder;      //for reverse
		num/=10;                              //joint reverse numbers
	}
	printf("Reversed number = %d",reverse);
	return 0;
}

