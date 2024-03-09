//22. Accept 3 numbers from user using while loop and check each numbers palindrome

#include<stdio.h>
int palin(int num) {
    int originalnum=num;
    int reversenum=0;
    while (num>0) {
        int digit=num%10;
        reversenum=reversenum*10+digit;
        num/=10;
    }
    return originalnum==reversenum;
}
int main(){
    int num,i=0;
    printf("Enter 3 numbers:\n");
    while(i<3) {
        scanf("%d",&num);
        if (palin(num)) {
            printf("%d is a palindrome.\n\n",num);
        } else {
            printf("%d is not a palindrome.\n\n",num);
        }
        i++;
    }
}
