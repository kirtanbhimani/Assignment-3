//24.Accept 5 employees name and salary and count average and total salary
#include<stdio.h>
int main(){
	int s1,s2,s3,s4,s5,sum,average;     //s1,s2,s3,s4,s5 are selary of employees
	char e1,e2,e3,e4,e5;     			//e1,e2,e3,e4,e5 are employees
	printf("Enter the name of Employee 1 : ");
		scanf("%s",&e1);
	printf("Enter the name of Employee 2 : ");
		scanf("%s",&e2);
	printf("Enter the name of Employee 3 : ");
		scanf("%s",&e3);
	printf("Enter the name of Employee 4 : ");
		scanf("%s",&e4);
	printf("Enter the name of Employee 5 : ");
		scanf("%s",&e5);
	printf("Enter the Salary of Employee 1 : ");
		scanf("%d",&s1);
	printf("Enter the Salary of Employee 2 : ");
		scanf("%d",&s2);
	printf("Enter the Salary of Employee 3 : ");
		scanf("%d",&s3);
	printf("Enter the Salary of Employee 4 : ");
		scanf("%d",&s4);
	printf("Enter the Salary of Employee 5 : ");
		scanf("%d",&s5);
	sum=s1+s2+s3+s4+s5;
	printf("Total Salary is %d \n",sum);
	average=sum/5;
	printf("Average of salary is %d",average);
	
}
