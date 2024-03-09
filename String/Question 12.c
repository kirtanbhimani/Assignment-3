//12.Write a program in C to find the number of times a given word 'is' 
//appears in the given string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char word[] = "is";
    int count = 0;
    printf("Enter a string: ");
    gets(str);
    char *token = strtok(str, " ");
    while (token != NULL) {
        if (strcmp(token, word) == 0) {
            count++;
        }
        token = strtok(NULL, " ");
    }
    printf("The word 'is' appears %d times in the given string.\n", count);
}



