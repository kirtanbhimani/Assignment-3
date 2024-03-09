//8. Write a program to find out the max from given number (E.g., No: - 1562Max number is 6)

#include<stdio.h>
int Max(int number) {
    int max = 0;
    while (number > 0) {
        int digit = number % 10;
        if (digit > max) {
            max = digit;
        }
        number /= 10;
    }
    return max;
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);   
    int max = Max(number);
    printf("Max number is %d\n", max);
    return 0;
}

