//16.Calculate the Sum of Natural Numbers Using the While Loop

#include<stdio.h>
int main(){
	int i=0,sum=0,num;	      //n=upto last number 
	printf("Enter Natural numbers : \n");
	scanf("%d",&num);
	while (i<=num){
		sum+=i;
		i++;
	}
	printf("Sum of %d Natural numbers : %d",num,sum);
}
