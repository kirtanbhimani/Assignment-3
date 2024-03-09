//8. WAP to reverse a string and check that the string is palindrome
//or notWrite a program of structure employee that provides the following
//a. information -print and display empno, empname,addressandage
//b. Write a program of structure for five employee 
//that provides the following information -print and
//displayempno, empname, address and age

#include <stdio.h>
#include <string.h>

void reversestring(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
int pali(char str[]){            //pali=palindrom 
    int length = strlen(str);
    int start = 0;
    int end = length - 1;
    while (start < end) {
        if (str[start] != str[end]) {
            return 0; 
        }
        start++;
        end--;
    }
    return 1; 
}
int main() {
	int i;
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    reversestring(str);
    printf("Reversed string: %s\n", str);
    if (pali(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    int empnos[5];
    char empnames[5][50];
    char addresses[5][100];
    int ages[5];
    printf("\nEnter information for five employees:\n");
    for (i = 0; i < 5; i++) {
        printf("\nEnter information for Employee %d:\n", i + 1);
        printf("Enter employee number: ");
        scanf("%d", &empnos[i]);
        printf("Enter employee name: ");
        scanf("%s", empnames[i]);
        printf("Enter address: ");
        scanf("%s", addresses[i]);
        printf("Enter age: ");
        scanf("%d", &ages[i]);
    }
    printf("\nInformation of five employees:\n");
    for (i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Employee Number: %d\n", empnos[i]);
        printf("Employee Name: %s\n", empnames[i]);
        printf("Address: %s\n", addresses[i]);
        printf("Age: %d\n", ages[i]);
    }
}
