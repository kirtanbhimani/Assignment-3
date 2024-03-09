//13.Write a program in C to remove characters from a string except alphabets. 

#include <stdio.h>
#include <ctype.h> // Include ctype.h for isalpha() function

int main() {
    char str[100];
    int i, j;

    printf("Enter a string: ");
    scanf("%s", str);
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';            // fot null
    printf("String after removing non-alphabetic characters: %s\n", str);
}
