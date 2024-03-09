//14.Accept 5 numbers from user and find those numbers factorials

#include<stdio.h>
int fact(int n) {
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}
int main() {
    int numbers[5];
    int i;
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }
    printf("Factorials:\n");
    for (i = 0; i < 5; i++) {
        printf("%d! = %d\n", numbers[i], fact(numbers[i]));
    }
}
