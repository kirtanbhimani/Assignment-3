//4. WAP to print table up to given numbers

#include<stdio.h>
int main(){
	int num,i;
	printf("Enter a number to print a table : ");
	scanf("%d",&num);
	for(i=1;i<=10;i++){
		printf("%d X %d = %d \n",num,i,num*i);
	}
}
