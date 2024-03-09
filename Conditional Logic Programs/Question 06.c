//6. Find the Character Is Vowel or Not

#include<stdio.h>
int main(){
	char ch;
	printf ("Enter the value of character...");
	scanf ("%c",&ch);
	printf ("%c",&ch);
	switch (ch){
		case 'a':
			printf("It is vovel...");
			break;
			case 'e':
			printf("It is vovel...");
			break;
			case 'i':
			printf("It is vovel...");
			break;
			case 'o':
			printf("It is vovel...");
			break;
			case 'u':
			printf("It is vovel...");
			break;
			default :
				printf("It is Consonent...");
				break;
	}
}

