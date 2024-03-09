//33.C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)

#include<stdio.h>
int main (){
	int num;
	printf ("Enter the integer value = ");
	scanf ("%d",&num);
	printf("First three powers of %d are:\n", num);
	printf("for %d^1 = %d\n",num,num*1);
	printf("for %d^2 = %d\n",num,num*num);
	printf("for %d^3 = %d\n",num,num*num*num);
}
