//26.Series Program:
//(1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)

#include <stdio.h>
int main() {
    int num, sum = 0,i,j;
    printf("Enter the value of n: ");
    scanf("%d", &num);
    for (i=1;i<=num;i++) {
        for (j=1;j<=i;j++) {
            sum += j;
        }
    }
    printf("\nSum of the series: %d\n", sum);
}
