//28. Series Program:
//1 2 3 6 9 18 27 54...

#include <stdio.h>
int main() {
    int n,i;
    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);
    printf("Series: ");
    int current = 1 ;             //current is current term
    for (i = 1; i <= n; i++) {
        printf("%d ", current);
        if (i % 2 == 1) {
            current *= 2;  // Multiply by 2 for odd terms
        } else {
            current *= 3;  // Multiply by 3 for even terms
        }
    }
    printf("\n");
}
