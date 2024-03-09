//14.Write a program in C to combine two strings manually

#include<stdio.h>
#include<string.h>

int main(){
	int i,j;
	char str1[50],str2[50],str[100];
	printf("Enter string 1 : ");
	gets(str1);
	printf("Enter sring 2 : ");
	gets(str2);
	i=j=0;
	while (str1[i]!='\0'){
		str[i]=str1[i];
		i++;
	}
	while (str2[j]!='\0'){
		str[i]=str2[j];
		i++;
		j++;
	}
	str[i]='\0';
	printf("Combined string = %s",str);
}
