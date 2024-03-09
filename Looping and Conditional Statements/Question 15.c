//15.Calculate sum of 10 numbers using of while loop

#include<stdio.h>
int main (){
	int sum=0,num,i=0;
	printf("Enter 10 numbers...\n");
	while (i<10){
		printf("Enter number %d=",i+1);
		scanf("%d",&num);
		sum+=num;
		i++;
	}
	printf("Sum of these 10 numbers are %d...",sum);
}
