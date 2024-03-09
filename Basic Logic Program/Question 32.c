//32.Accept 2 numbers and find out its sum check it size

#include<stdio.h>
int main (){
	int a,b,sum;
	printf("Enter the value of a = ");
	scanf("%d",&a);
	printf("Enter the value of b = ");
	scanf("%d",&b);
	sum = a+b;
	printf("Sum of a and b is %d\n",sum);
	if (sum < 32767 && sum > -32768) {
        printf("Size of the sum is within the range of int data type.\n");
    } else {
        printf("Size of the sum exceeds the range of int data type.\n");
    }
}
