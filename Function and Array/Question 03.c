//3. WAP to find reverse of string using recursion

#include<stdio.h>
#include<string.h>
void rev(char *str){               //* is a pointer 
		if (*str == '\0'){         // \0 is index value
		return;
		}
		rev(str+1);               //take next index value
		printf("%c",*str);
}
int main(){
	char str[50];
	printf("Enter the string : ");
	gets(str);
	rev(str);
}
