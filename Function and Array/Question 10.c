//10.WAP to perform Palindrome number using for loop and function

#include <stdio.h>
int pali(int num) {                //pali = palindrome
    int originalnum = num;
    int reversednum = 0;
    while (num != 0) {
        int digit = num % 10;
        reversednum = reversednum * 10 + digit;
        num /= 10;
    }
    if (originalnum == reversednum) {
        return 1; 
    } else {
        return 0; 
    }
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (pali(number)) {
        printf("%d is a palindrome number.\n", number);
    } else {
        printf("%d is not a palindrome number.\n", number);
    }
    return 0;
}
