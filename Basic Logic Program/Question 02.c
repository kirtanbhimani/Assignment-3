//Question 2. Write a program to make Simple calculator (to make addition,subtraction,multiplication, division and modulo)
#include<stdio.h>
int main (){
	int x,y,Addition,Substration,Multiflication,Division,Modulo;
	printf("Enter the value of x : ");
	scanf("%d",&x);
	printf("Enter the value of Y : ");
	scanf("%d",&y);
	Addition=x+y;
	printf("Addition of x and y is equles to %d ...\n",Addition);
	Substration=x-y;
	printf("Substration of x and y is equles to %d ...\n",Substration);
	Multiflication=x*y;
	printf("Multiflication of x and y is equles to %d ...\n",Multiflication);
	Division=x/y;
	printf("Division of x and y is equles to %d ...\n",Division);
	Modulo=x%y;
	printf("Modulo of x and y is equles to %d ...",Modulo);
}
