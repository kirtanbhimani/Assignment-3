//15.Store 5 numbers in array and sort it in ascending order

#include<stdio.h>
int sort(int choice){
	int i,j;
	int arr[5],tem;
	if(choice == 1){
		for(i=0;i<5;i++){
			printf("Enter the array : ",i);
			scanf("%d",&arr[i]);
		}
		for(i=0;i<5;i++){
			for(j=i+1;j<5;j++){                 //j=i+1 is increse from i
				if(arr[i]>arr[j]){
					tem=arr[i];
					arr[i]=arr[j];
					arr[j]=tem;
				}	
			}
		}
		for(i=0;i<5;i++){
			printf("%d : ",arr[i]);
		}
	}
	else if(choice == 2){
		for(i=0;i<5;i++){
			printf("Enter the array : ",i);
			scanf("%d",&arr[i]);
		}
		for(i=0;i<5;i++){
			for(j=i+1;j<5;j++){                 //j=i+1 is increse from i
				if(arr[i]<arr[j]){
					tem=arr[i];
					arr[i]=arr[j];
					arr[j]=tem;
				}	
			}
		}
		for(i=0;i<5;i++){
			printf("%d : ",arr[i]);
		}	
	}
	else{
		printf("Invalid");
	}
}
int main(){
	int choice;
		printf("1.Assending \n");
		printf("2.Descnding \n");
		
		printf("Enter the Choice (1 or 2) : ");
		scanf("%d",&choice);
		
		sort(choice);
	}


