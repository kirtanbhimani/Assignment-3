//9. WAP to show difference between Structure and Union

#include <stdio.h>
#include <string.h>

// Structure definition
struct Person {
    char name[20];
    int age;
};

// Union definition
union Data {
    int i;
    float f;
    char str[20];
};
int main() {
    // Structure usage
    struct Person person1;
    strcpy(person1.name, "Ajay");
    person1.age = 22;
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Size of struct Person: %lu bytes\n", sizeof(person1));

    // Union usage
    union Data data;
    data.i = 20;
    printf("Integer value: %d\n", data.i);
    data.f = 3.14;
    printf("Float value: %f\n", data.f);
    strcpy(data.str, "Hiii");
    printf("String value: %s\n", data.str);
    printf("Size of union Data: %lu bytes\n", sizeof(data));

}

