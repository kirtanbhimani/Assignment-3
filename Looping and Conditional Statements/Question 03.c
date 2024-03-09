//3. WAP to take 10 no. Input from user find out below values
//a. How many Even numbers are there
//b. How many odd numbers are there
//c. Sum of even numbers
//d. Sum of odd numbers

#include<stdio.h>
int main(){
	int i,num,even=0,odd=0,evensum=0,oddsum=0;
	for (i=0;i<10;i++){
		printf("Enter numbers : ");
		scanf("%d",&num);
		if (num%2==0){
			even=even+1;
			evensum=evensum+num;
		}
		else {
			odd=odd+1;
			oddsum=oddsum+num;
		}
	}
	printf("Total even numbers are : %d \n",even);
	printf("Total odd numbers are : %d \n",odd);
	printf("Sum of even numbers  are : %d \n",evensum);
	printf("Sum of odd numbers are : %d \n",oddsum);
	
	
	
}
