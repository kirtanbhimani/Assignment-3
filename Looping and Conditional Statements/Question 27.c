//27. Series Program:
//1/2 - 2/3 + 3/4 - 4/5 + 5/6 ..........n

#include <stdio.h>

int main() {
    int n,i;
    float sum = 0.0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Series: ");
    for (i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            printf("%d/%d", i, i + 1);
            sum += (float)i / (i + 1);
        } else {
            printf("-%d/%d", i, i + 1);
            sum -= (float)i / (i + 1);
        }
        if (i < n) {
            printf(" + ");
        }
    }
    printf("\nSum of the series: %.2f\n", sum);
}
