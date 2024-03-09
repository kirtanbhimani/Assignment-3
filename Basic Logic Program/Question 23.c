//23.WAP to calculate swap 2 numbers with using of multiplication and division
int main() {
    int num1, num2;
    printf("Enter value of num1: ");
    scanf("%d", &num1);
    printf("Enter value of num2: ");
    scanf("%d", &num2);
    num1 = num1 * num2; 
    num2 = num1 / num2; 
    num1 = num1 / num2; 
    printf("After swapping:\n");
    printf("Value of num1: %d\n", num1);
    printf("Value of num2: %d\n", num2);
}
