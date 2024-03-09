// 25.Accept 5 expense from user and find average of expense
#include<stdio.h>
int main(){
	int expense1,expense2,expense3,expense4,expense5,Average;
	printf ("expense1 = ");
		scanf("%d",&expense1);
	printf ("expense2 = ");
		scanf("%d",&expense2);
	printf ("expense3 = ");
		scanf("%d",&expense3);
	printf ("expense4 = ");
		scanf("%d",&expense4);
	printf ("expense5 = ");
		scanf("%d",&expense5);
	Average = (expense1+expense2+expense3+expense4+expense5)/5;
	printf("Average of expense is %d",Average);
}
