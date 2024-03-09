//5. Write a program in C to compare two strings without using string library functions.

#include<stdio.h>
#include<string.h>

int main (){
	int i;
	char str1[100],str2[100];
	printf("Enter String 1 : ");
	gets(str1);
	printf("Enter String 2 : ");
	gets(str2);
	if(str1[i]=str2[i]){
		printf("Both strings are equals....");
	}
	else {
		printf("Both strings are not equals....");
	}
}
