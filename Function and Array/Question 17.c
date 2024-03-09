//17.WAP to show difference between Structure and Union

#include <stdio.h>
#include <string.h>

// Structure definition
struct Car {
    char brand[20];
    int year;
    float price;
};

// Union definition
union Info {
    int intValue;
    float floatValue;
    char stringValue[20];
};

int main() {
    // Structure usage
    struct Car myCar;
    strcpy(myCar.brand, "Toyota");
    myCar.year = 2020;
    myCar.price = 25000.0;

    printf("Structure - Car Brand: %s\n", myCar.brand);
    printf("Structure - Year: %d\n", myCar.year);
    printf("Structure - Price: %.2f\n", myCar.price);
    printf("Structure - Size: %lu bytes\n", sizeof(myCar));

    // Union usage
    union Info myInfo;
    myInfo.intValue = 2022;
    printf("\nUnion - Int Value: %d\n", myInfo.intValue);

    myInfo.floatValue = 3.14;
    printf("Union - Float Value: %.2f\n", myInfo.floatValue);

    strcpy(myInfo.stringValue, "Hello");
    printf("Union - String Value: %s\n", myInfo.stringValue);
    printf("Union - Size: %lu bytes\n", sizeof(myInfo));

}
