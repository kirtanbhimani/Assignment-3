//3. WAP to check if the given year is a leap year or not.

#include<stdio.h>
int main(){
	int i;
	printf ("Enter a year : ");
	scanf("%d",&i);
	if(i%4==0){
		printf("This year is a leap year...");
	}
	else{
		printf("This year is not a leap year...");	
	} 
}
