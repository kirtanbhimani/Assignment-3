//2. WAP to accept 5 numbers from user and display all numbers

#include<stdio.h>
int main(){
	int num[5],i;
	printf("Enter your Number : \n");
	for(i=0;i<=4;i++){
		printf("Enter number %d : ",i+1);
		scanf("%d",&num[i]);
	}
	printf("\nYour numbers are : \n");
	for(i=0;i<=4;i++){
		printf("%d\n",num[i]);
	}
}
