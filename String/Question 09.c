//9. Write a program in C to find the maximum number of characters in a string.

#include <stdio.h>
#include <string.h>

int main (){
	int i,count=0;
	char str[100],ch;
	printf("Enter a string : ");
	gets(str);
	printf("Enter a character : ");
	scanf("%c",&ch);
	for(i=0;i<str[i];i++){
		if(ch==str[i])
		count=count+1;
	}
	printf("Maximum number of %c character in a string is %d",ch,count);
}
