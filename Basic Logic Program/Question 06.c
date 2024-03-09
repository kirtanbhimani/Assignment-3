//Question 6. Find area of Triangle Formula : A = 1/2 × b × h
#include<stdio.h>
int main(){
	float b,h,Area;       //b=Base, h=Height
	printf("Enter the value of Base b= ");
	scanf("%f",&b);
	printf("Enter the value of Height h= ");
	scanf("%f",&h);
	Area=0.5*b*h;
	printf("Area of Triangle is %f",Area);
}
