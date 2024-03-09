//21.Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable
#include<stdio.h>
int main(){
	//with using 3rd variable
    int num1, num2, num3;
    printf("with using 3rd variable\n");
    printf("Enter value of num1: ");
    scanf("%d", &num1);
    printf("Enter value of num2: ");
    scanf("%d", &num2);
    num3 = num1;
    num1 = num2;
    num2 = num3;
    printf("After swapping:\n");
    printf("Value of num1: %d\n", num1);
    printf("Value of num2: %d\n", num2);
	//without using 3rd variable
	int num4, num5;
	printf("without using 3rd variable\n");
    printf("Enter value of num4: ");
    scanf("%d", &num4);
    printf("Enter value of num5: ");
    scanf("%d", &num5);
    num4 = num4 + num5;
    num5 = num4 - num5;
    num4 = num4 - num5;
    printf("After swapping:\n");
    printf("Value of num4: %d\n", num4);
    printf("Value of num5: %d\n", num5);
}


