//4. WAP to make simple calculator (operation include Addition,Subtraction,Multiplication, Division, modulo) using conditional statement

#include<stdio.h>
int main(){
	int num1,num2,Addition,Subtraction,Multiplication,Division,Modulo;
	printf("Enter the value of number1= ");
	scanf("%d",&num1);
	printf("Enter the value of number2= ");
	scanf("%d",&num2);
	Addition = num1 + num2;
	Subtraction = num1-num2;
	Multiplication = num1*num2;
	Division = num1/num2;
	Modulo = num1%num2;
	printf("Addition = %d + %d = %d \n",num1,num2,Addition);
	printf("Subtraction = %d - %d = %d \n",num1,num2,Subtraction);
	printf("Multiplication = %d X %d = %d \n",num1,num2,Multiplication);
	printf("Division = %d / %d = %d \n",num1,num2,Division);
	printf("Modulo = %d modulo %d = %d \n",num1,num2,Modulo);		
}
