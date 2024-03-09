//33.WAP to input the week number and print week day.

#include<stdio.h>
int main() {
    int weeknum;
    printf("Enter the week number (1-7): ");
    scanf("%d", &weeknum);
    if (weeknum < 1 || weeknum > 7) {
        printf("Invalid week number! Please enter a number between 1 and 7.\n");
    } else {
        switch (weeknum) {
            case 1:
                printf("Sunday\n");
                break;
            case 2:
                printf("Monday\n");
                break;
            case 3:
                printf("Tuesday\n");
                break;
            case 4:
                printf("Wednesday\n");
                break;
            case 5:
                printf("Thursday\n");
                break;
            case 6:
                printf("Friday\n");
                break;
            case 7:
                printf("Saturday\n");
                break;
            default:
                printf("Invalid input\n");
        }
    }
}
