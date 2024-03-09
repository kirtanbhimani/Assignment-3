//1. Write a program in C to find the length of a string without using libraryfunctions.

#include<stdio.h>
#include<string.h>
int main() {
    int length = 0;
	char str[100];
    printf("Enter a string: ");
    gets(str);
    while (str[length] != '\0') {
        length++;
    }
    printf("Length of the string: %d\n", length);
}
