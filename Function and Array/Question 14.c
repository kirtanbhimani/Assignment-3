//14.Perform 2D matrix array

#include<stdio.h>
int main (){
	int i,j,num[2][2];
	printf("2D matrix elements...\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter the element: ");
			scanf("%d",&num[i][j]);
		}
	}
	printf("\n2D matrix is ...\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\t%d",num[i][j]);
		}
		printf("\n");
	}
}

