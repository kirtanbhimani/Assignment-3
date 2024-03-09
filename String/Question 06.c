//6. Write a program in C to count the total number of alphabets, digits and
//specialcharacters in a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int i, alphabets = 0, digits = 0, specialChars = 0;
    printf("Enter a string: ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {               // Check if character is an alphabet
            alphabets++;
        } else if (isdigit(str[i])) {        // Check if character is a digit
            digits++;
        } else if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') {  // Check if character is a special character
            specialChars++;
        }
    }
    printf("Total number of alphabets: %d\n", alphabets);
    printf("Total number of digits: %d\n", digits);
    printf("Total number of special characters: %d\n", specialChars);
}
