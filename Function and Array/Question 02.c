//2. WAP of Addition, Subtraction, Multiplication and Division using
//Switchcase.(Must Be Menu Driven)

#include <stdio.h>
int main() {
    int i;
    float num1, num2, result;
    printf("Basic Calculator :\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &i);
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch(i) {
        case 1:
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Invalid choice\n");
    }
}
