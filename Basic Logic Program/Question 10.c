//Question 10.find the area of a rectangular prism formula : A=2(wl+hl+hw)
#include<stdio.h>
int main(){
	int w,l,h,Area;      //w=weight,l=lengh,h=height
	printf("Enter the value of Weight w= ");
	scanf("%d",&w);
	printf("Enter the value of Lengh l= ");
	scanf("%d",&l);
	printf("Enter the value of Lengh h= ");
	scanf("%d",&h);
	Area=2*(w*l+h*l+h*w);
	printf("Area of Rectangle is %d",Area);
}
