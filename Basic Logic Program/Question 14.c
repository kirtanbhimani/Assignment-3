//14.Find ascii value of given number
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    char ascii_value = (char)number;
    printf("The ASCII value of the number %d is: %d\n", number, ascii_value);
}
