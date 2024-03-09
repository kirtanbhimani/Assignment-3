//12.Accept number of students from user. I need to give 5 apples to each student. How many apples are required?
#include<stdio.h>
int main() {
    int num;
    printf("Enter the number of students: ");
    scanf("%d",&num);
    int total_apples = num * 5;
    printf("Total apples required: %d", total_apples);
}
