//10.Write a program you have to make a summation of first and last
//Digit. (E.g.,1234 Ans: -5)

#include <stdio.h>
int sumfirstandlastdigit(int number) {
    int lastdigit = number % 10;
    while (number >= 10) {
        number /= 10;
    }   
    return lastdigit + number;
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int sum = sumfirstandlastdigit(number);
    printf("Sum of first and last digits is %d\n", sum);    
}

