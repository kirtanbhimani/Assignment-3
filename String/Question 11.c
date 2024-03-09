//11.Write a program in C to read a sentence and replace lowercase characters 
//withuppercase and vice versa.

#include <stdio.h>
#include <string.h>

int main() {
	int i;
    char sentence[100];
    printf("Enter a sentence: ");
    gets(sentence);
    for (i = 0; sentence[i] != '\0'; i++) {
        if (islower(sentence[i])) {
            sentence[i] = toupper(sentence[i]); // Convert lowercase to uppercase
        } else if (isupper(sentence[i])) {
            sentence[i] = tolower(sentence[i]); // Convert uppercase to lowercase
        }
    }
    printf("Modified sentence: %s", sentence);
}

