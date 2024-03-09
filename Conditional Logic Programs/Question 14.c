//14.WAP to find the largest of three numbers

#include <stdio.h>

int main() {
    double num1, num2, num3, largest;
    printf("Enter three numbers: \n");
    scanf("%lf %lf %lf", &num1, &num2, &num3);
    if (num1 >= num2 && num1 >= num3) {
        largest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        largest = num2;
    } else {
        largest = num3;
    }
    printf("The largest number among %.2lf, %.2lf, and %.2lf is: %.2lf\n", num1, num2, num3, largest);
}

