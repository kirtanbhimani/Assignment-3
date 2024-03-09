//15.Write a C program to determine eligibility for admission to a professional
//course based on the following criteria
//Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
//in Chem>=50 and Total in all three subject >=190 or Total in Maths and
//Physics >=140 --------------------------------------Input the marks obtained in
//Physics :65 Input the marks obtained in Chemistry :51 Input the marks
//obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
//188 Total marks of Maths and Physics : 137 The candidate is not eligible.
 
#include<stdio.h>
int main(){
	int maths_marks,phy_marks,chem_marks,total_marks;
	printf("Maths marks = ");
	scanf("%d",&maths_marks);
	printf("Physics marks = ");
	scanf("%d",&phy_marks);
	printf("Chemistry marks = ");
	scanf("%d",&chem_marks);
	total_marks = maths_marks + phy_marks + chem_marks;
	printf("Total marks = %d \n",total_marks);
	printf("Total marks of maths and physics = %d \n",maths_marks+phy_marks);
	
	if (maths_marks>=65 && phy_marks>=55 && chem_marks>=50 && total_marks>=190 || (maths_marks&&phy_marks)>=140){
		printf("Candidate is eligible...");
	} else {
		printf("Candidate is not eligible...");
	}
}

