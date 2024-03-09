//13.Find character value from ascii
#include <stdio.h>
int main() {
    char character;
    printf("Enter a character: ");
    scanf("%c", &character);
    int ascii_value = (int)character;
    printf("The ASCII value of '%c' is: %d\n", character, ascii_value);
}
