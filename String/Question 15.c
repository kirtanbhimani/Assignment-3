//15.Write a program in C to find the largest and smallest words in a string.

#include <stdio.h>
#include <string.h> 

int main() {
    char str[100];
    char largestWord[100], smallestWord[100];
    int i = 0, start, end;
    int maxLength = 0, minLength = 100; // Initialize maxLength to 0 and minLength to a large value
    // Input a string
    printf("Enter a string: ");
    scanf("%[^\n]s", str);         //new line function
    // Find the largest and smallest words in the string
    while (str[i] != '\0') {
        // Skip leading spaces
        while (isspace(str[i])) {
            i++;
        }
        start = i; // Start of the word
        // Find the end of the word
        while (str[i] != '\0' && !isspace(str[i])) {
            i++;
        }
        end = i - 1; // End of the word
        int length = end - start + 1;
        if (length > maxLength) {
            maxLength = length;
            strncpy(largestWord, &str[start], length);
            largestWord[length] = '\0'; // Add null terminator to the end of the largest word
        }
        if (length < minLength && length > 0) {
            minLength = length;
            strncpy(smallestWord, &str[start], length);
            smallestWord[length] = '\0'; // Add null terminator to the end of the smallest word
        }
    }
    printf("Largest word: %s\n", largestWord);
    printf("Smallest word: %s\n", smallestWord);
}
