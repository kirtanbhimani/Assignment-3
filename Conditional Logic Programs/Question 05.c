//5. Check Number Is Positive or Negative

#include<stdio.h>
int main (){
	int num;
	printf("Enter a Number = ");
	scanf("%d",&num);
	if (num>=0){
		printf("Number is Positive...");
	}else {
		printf("Number is Negative...");
	}
}
