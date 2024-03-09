//9. Write a program make a summation of given number (E.g., 1523 Ans:- 11)

#include<stdio.h>
int sumofdigits(int number) {
    int sum = 0;
    while (number > 0) {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }   
    return sum;
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int sum = sumofdigits(number);
    printf("Sum of digits is %d\n", sum);
}
