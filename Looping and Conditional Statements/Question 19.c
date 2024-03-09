//19. Patterns:
//	1
//	1 0 
//	1 0 1
//	1 0 1 0
//	1 0 1 0 1

#include<stdio.h>
int main() {
    int i,j,k;
    for (i=1;i<=5;i++) {
        int num=1; 
        for (j=1;j<=i;j++) {
            printf("%d ", num);
            num = !num; 
        }
        printf("\n");
    }
    
//	Pattern:  
//  A
//  B C
//  D E F 
//  G H I J
//  K L M N O
	
	printf("\n\n");
	char ch='A';
    for (i=1;i<=5;i++) {
        for (j=1;j<=i;j++) {
            printf("%c ",ch++ );
        }
        printf("\n");
    }
	
//	Pattern:
//          *
//        * * *
//      * * * * *
//	  * * * * * * * 
//	* * * * * * * * *

	printf("\n\n");
    for (i=1;i<=5;i++) {
        for (k=1;k<=5-i;k++) {
            printf("  ");
        }
        for (j=1;j<=2*i-1;j++) {
            printf("* ");
        }
        printf("\n");
    }


//	Pattern:
//	*
//	* *
//	* * *
//	* * * *
//	* * * * *
//	* * * * * *
//	* * * * *
//	* * * *
//	* * *
//	* *
//	*

	printf("\n\n");
	for (i=0;i<=5;i++){
		for (j=0;j<=i;j++){
			printf("* ");
		}
		for (k=0;k<=i-5;k++){
			printf(" ");
		}		
		printf("\n");
	}
	for (i=1;i<=5;i++){
		for (j=0;j<=5-i;j++){
			printf("* ");
		}
		for (k=0;k<=5-i;k++){
			printf("  ");
		}
		printf("\n");
	}
	
//	Pattern:
//	1
//	2 3 
//	4 5 6
//	7 8 9 10
//	11 12 13 14 15

	printf("\n\n");
	int num=1;
    for (i=1;i<=5;i++) {
        for (j=1;j<=i;j++) {
            printf("%d ",num++ );
        }
        printf("\n");
    }

//	Pattern:
//	A
//	A B 
//	A B C
//	A B C D
//	A B C D E

	printf("\n\n");
	char c = 'A';
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c ", c++);
        }
        printf("\n");
        c = 'A'; // Reset the character for next row
    }
}
