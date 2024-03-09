//3. Write a program in C to print individual characters of a string in reverse order

#include <stdio.h>
#include <string.h>
int main() {
	int i,length = 0;
    char str[50];
    printf("Enter a string: ");
    gets(str);
    printf("Individual characters of the string in reverse order:\n");
    while (str[length] != '\0') {
        length++;
    }
    for (i = length - 1; i >= 0; i--) {
        printf("%c ", str[i]);
    }
    printf("\n");
}
