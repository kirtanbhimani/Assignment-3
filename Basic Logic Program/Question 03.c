//Question 3. WAP to Find Area And Circumference of Circle
#include<stdio.h>
int main(){
	float r,Area,Circumference;       //r=redius of circle
	printf ("Radius of Circle = ");
	scanf("%f",&r);
	Area=3.14*r*r;
	printf("The Area of Circle is %f...\n",Area);
	Circumference=2*3.14*r;
	printf("The Circumference of Circle is %f...",Circumference);	
}
