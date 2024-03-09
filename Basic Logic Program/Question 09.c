//Question 9. Find circumference of Triangle formula : triangle = a + b + c
#include<stdio.h>
int main(){
	int a,b,c,C;     //a,b,c=side of triangle, C=circumference
	printf("Enter the value of a = ");
	scanf("%d",&a);
	printf("Enter the value of b = ");
	scanf("%d",&b);
	printf("Enter the value of c = ");
	scanf("%d",&c);
	C=a+b+c;
	printf("circumference of Triangle is %d ...",C);
}
