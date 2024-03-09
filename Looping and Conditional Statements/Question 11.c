//11.Accept 5 names from user at run time.

#include <stdio.h>

int main() {
	int i;
    char names[5][50]; // 5 is for store names and 50 for length of names
    printf("Enter 5 names:\n");
    for ( i = 0; i < 5; i++) {
        printf("Enter name %d: ", i + 1);
        scanf("%s", names[i]); 
    }
    printf("\nNames entered:\n");
    for ( i = 0; i < 5; i++) {
        printf("%d. %s\n", i + 1, names[i]);
    }
}
