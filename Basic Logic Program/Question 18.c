//18.Calculate person’s Annual salary
#include<stdio.h>
int main(){
	int m1,m2,m3,m4,m5,m6,m7,m8,m9,m10,m11,m12,sum;
	//m1,m2,m3,m4,m5,m6,m7,m8,m9,m10,m11,m12=monthly salary
	printf("Enter the salary of 1st month = ");
		scanf("%d",&m1);
	printf("Enter the salary of 2nd month = ");
		scanf("%d",&m2);
	printf("Enter the salary of 3rd month = ");
		scanf("%d",&m3);
	printf("Enter the salary of 4th month = ");
		scanf("%d",&m4);
	printf("Enter the salary of 5th month = ");
		scanf("%d",&m5);
	printf("Enter the salary of 6th month = ");
		scanf("%d",&m6);
	printf("Enter the salary of 7th month = ");
		scanf("%d",&m7);
	printf("Enter the salary of 8th month = ");
		scanf("%d",&m8);
	printf("Enter the salary of 9th month = ");
		scanf("%d",&m9);
	printf("Enter the salary of 10th month = ");
		scanf("%d",&m10);
	printf("Enter the salary of 11th month = ");
		scanf("%d",&m11);
	printf("Enter the salary of 12th month = ");
		scanf("%d",&m12);
	sum=m1+m2+m3+m4+m5+m6+m7+m8+m9+m10+m11+m12;
	printf("Annual of salary is %d",sum);
}
