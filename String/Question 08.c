//8. Write a program in C to count the total number of vowels or consonants in a string

#include<stdio.h>
#include<string.h>

int main (){
	char str[100];
	int i,v=0,c=0;            //c=consonants , v=vowels
	
	printf("Enter a string : ");
	gets(str);
	for(i=0; i<str[i]; i++){
		if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
			v++;
		}
		else {
			c++;
		}
	}
	printf("Vowels are = %d\n",v);
	printf("Consonants are = %d",c);
}
