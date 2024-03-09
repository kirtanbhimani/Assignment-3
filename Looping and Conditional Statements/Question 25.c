//25. Series Program:
//(1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

#include<stdio.h>
int main(){
	int i,num,sum=0;
	printf("Enter the number : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		sum+=i*i;
	}
	printf("Sum of %d digit: %d",num,sum);
}
