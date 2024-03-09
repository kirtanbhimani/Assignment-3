//17.Calculate 5 numbers from user and calculate number of even and odd using of while loop

#include<stdio.h>
int main(){
	int i=0,evensum=0,oddsum=0,num,even,odd;
	while (i<5){
		printf("Enter five numbers : \n");
		scanf("%d",&num);
		if(num%2==0){
			evensum=evensum + num;
		}
		else {
			oddsum=oddsum + num;
		}
		i++;
	}
	printf("sum of Even numbers : %d \n",evensum);
	printf("Sum of Odd numbers : %d",oddsum);
	
}
