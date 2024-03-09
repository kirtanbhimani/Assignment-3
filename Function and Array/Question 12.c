//12.WAP to accept 5 students name and store it in array

#include <stdio.h>
int main() {
	int i;
    char names[5][50]; 
    printf("Enter names of 5 students: \n");
    for (i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", &names[i]);
    }
    printf("\nNames of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", &names[i]);
    }
}
