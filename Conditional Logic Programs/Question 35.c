//35.Accept the input month number and print number of days in that month.

#include<stdio.h>
int main(){
	int monthnum,day;
	printf("Enter a month number : ");
	scanf("%d", &monthnum);
	if (monthnum < 1 || monthnum > 12) {
        printf("Invalid month number! Please enter a number between 1 and 12.\n");
    } else if (monthnum==1 || monthnum==3 || monthnum==5 || monthnum==7 || monthnum==8 || monthnum==10 || monthnum==12 ){
    	printf("This month has 31 days...");	
	} else if (monthnum==4 || monthnum==6 || monthnum==9 || monthnum==11 ){
		printf("This month has 30 days...");	
	}else {
		printf("This months has 28 or 29 days");
	}
}


