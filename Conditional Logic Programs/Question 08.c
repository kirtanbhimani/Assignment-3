//8. WAP to accept the height of a person in centimeters and categorize the person according to their height.

#include <stdio.h>
int main() {
    float height;
    printf("Enter the height in centimeters: ");
    scanf("%f", &height);
    if (height < 150) {
        printf("The person is of short stature.\n");
    } else if (height >= 150 && height < 170) {
        printf("The person is of average height.\n");
    } else if (height >= 170 && height < 190) {
        printf("The person is tall.\n");
    } else {
        printf("The person is very tall.\n");
    }
}
