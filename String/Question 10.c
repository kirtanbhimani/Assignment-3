//10.Write a program in C to extract a substring from a given string

#include<stdio.h>
#include<string.h>
int main (){
	int p,l,i=0;               //p=position,l=lenght
	char str1[100],str2[100];
	printf("Extracting substring : \n");
	printf("Enter a string : ");
	gets(str1);
	printf("Enter a starting position : ");
	scanf("%d",&p);
	printf("Enter a substring lenght : ");
	scanf("%d",&l);
	while(i<l){
		str2[i]=str1[p+i-1];
		i++;
	}
	str2[i]='\0';
	printf("The substring from given string is : %s",str2);
}
