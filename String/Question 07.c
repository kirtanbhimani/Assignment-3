//7. Write a program in C to copy one string to another string.

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i;

    printf("Enter a string: ");
    gets(str1);
    for (i = 0; str1[i] != '\0'; i++) {
        str2[i] = str1[i];
    } 
    printf("Copied string: %s", str2);
}
