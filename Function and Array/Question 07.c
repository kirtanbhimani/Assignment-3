//7. WAP Find out length of string without using inbuilt function

#include <stdio.h>
int stringlength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}
int main() {
	int l;              //l=length
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    l = stringlength(str);
    printf("Length of the string: %d\n", l);
}
