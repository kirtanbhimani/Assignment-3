//23. C Program to Reverse a Number Using FOR Loop

#include<stdio.h>
int main(){
	int num,revnum=0,temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (temp=num; temp!=0; temp/=10) {
        int digit=temp%10;
        revnum = revnum*10 + digit;
    }
    printf("The reverse of the number %d is: %d\n", num, revnum);
}
