//4. WAP to find factorial using recursion

#include <stdio.h>
long long factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
int main() {
    int number;
    long long fact;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if (number < 0)
        printf("Factorial of negative number is undefined.\n");
    else {
        fact = factorial(number);
        printf("Factorial of %d = %llu\n", number, fact);
    }
}
