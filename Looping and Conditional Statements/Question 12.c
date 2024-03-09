//12.Program of Armstrong Number in C Using For Loop & While Loop
// By using for loop
#include <stdio.h>
#include <math.h>

int main() {
    int number,originalnum,remainder,result = 0, n = 0;
	printf("By using for loop \n");
    printf("Enter an integer: ");
    scanf("%d", &number);
    originalnum=number;
    for (originalnum=number; originalnum!= 0; originalnum /= 10, ++n); 
    originalnum = number;
    for (; originalnum != 0; originalnum /= 10) {
        remainder = originalnum % 10;                   //spilt the value       
        result = result+(number*number*number);         //sum of cube value
		number=number/10;                               //joint the value
    }
    if (result == number)
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);


// By using while loop 

	int num,tem,a,sum;
	printf("By using for loop \n");
	printf("Enter the number : ");
	scanf("%d",&num);
	tem=num;
	while (num>0){
		a=num%10;         //split number
		sum=sum+(a*a*a);        //sum of cube value
		num=num/10;          //joint number
	}
	if(tem==sum){
		printf("%d is an Armstrong number.\n", tem);
	}
	else{
		printf("%d is not an Armstrong number.\n", tem);
	}
}
