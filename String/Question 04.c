//4. Write a program in C to count the total number of words in a string

#include<stdio.h>
#include<string.h>

int main (){
	int i,count=1;
	char a[100];
	printf("Enter a String : \n");
	gets(a);
	while (a[i]!='\0'){
		if (a[i]== ' ')
		count++;
		i++;
	}
	printf("Total words in string is : %d",count);
}
