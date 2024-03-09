//6. WAP to make addition, Subtraction and multiplication oftwo matrix
//using2-D Array

#include<stdio.h>
int main(){
	int num1[2][2],num2[2][2],add[2][2],sub[2][2],mul[2][2];
	int i,j,k;
	printf("=====Matrix for 1st Array \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter the array of 1st element : ");
			scanf("%d",&num1[i][j]);
		}
	}
	printf("\n=====Matrix for 2nd Array \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter the array of 2nd element : ");
			scanf("%d",&num2[i][j]);
		}
	}
	printf("\n=====2D array for 1st element\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\t%d",num1[i][j]);
		}
		printf("\n");
	}
	printf("\n=====2D array for 2nd element\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\t%d",num2[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			add[i][j]=num1[i][j]+num2[i][j];
		}
	}
	printf("=====Addition of 2D Array\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\t%d",add[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			sub[i][j]=num1[i][j]-num2[i][j];
		}
	}
	printf("=====Subtraction of 2D Array\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\t%d",sub[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			for(k=0;k<2;k++){
				mul[i][j]=0;
				mul[i][j]+=num1[i][j]*num2[i][j];
			}
		}
	}
	printf("=====Multiplication of 2D Array\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\t%d",mul[i][j]);
		}
		printf("\n");
	}
}
