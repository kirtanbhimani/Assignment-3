//7. Accept marks from user and check pass or fail

#include<stdio.h>
int main(){
	int marks;
	printf("Enter your marks : ");
	scanf("%d",&marks);
	if(marks>33){
		printf("You are pass in exam...");
	}else{
		printf("You are fail in exam...");
	}
}
