#include<stdio.h>

int main(){
	/*
	char Name[20];
	scanf(" %s", &Name);
	printf("%s", Name);
	*/
	/*
	int Mo_Number[9];
	for(int i=0 ; i<9 ; i++){
		
		scanf("%d", &Mo_Number[i]);
	}
	for(int i=0;i<9 ;i++){
		printf("%d", Mo_Number[i]);
	}
	*/

	
	int Subjects[7];
	float total = 0;
//	float AllStudentsTotalMarks[4];
//	float Percentage[4];
	char percentageSign= '%';
	
	for(int i=0;i<5;i++){
		
		printf("\n");
		printf("----------------------\n");
		printf("\n");
		
		printf("student %d \n", i+1);
		
		printf("\n");
		printf("----------------------\n");
		printf("\n");
		
		for(int j=0;j<7;j++){
			
		printf("\n");
		printf("-----------------------\n");
		printf("\n");
		
			printf("add Exam %d marks = ",j+1);
		
			scanf("%d", &Subjects[i]);
			total += Subjects[i];
			
		};
		
	//	printf("%f \n",total);
		total = total / 700 * 100;
		int Percent;
		Percent = total / 10;
		
		switch(Percent){
			case 10:
			case 9:{
				printf("\n");
				printf("----------------------------------\n");
				printf("\n");
				
				printf("Your  Grade is A++ You got %f %c \n",total,percentageSign);
				
				printf("\n");
				printf("----------------------------------\n");
				printf("\n");
				break;
			}
			case 8:
			case 7:{
				printf("\n");
				printf("----------------------------------\n");
				printf("\n");
				
				printf("Your  Grade is A+ You got %f  %c \n", total,percentageSign);
				
				printf("\n");
				printf("----------------------------------\n");
				printf("\n");
				
				break;
			}
			case 6:
			case 5:{
				printf("\n");
				printf("----------------------------------\n");
				printf("\n");
				
				printf("Your  Grade is B+ You got %f %c \n", total,percentageSign);
				
				printf("\n");
				printf("----------------------------------\n");
				printf("\n");
				
				break;
			}
		    default:{
		 		printf("\n");
				printf("----------------------------------\n");
				printf("\n");
				
		  		printf("Eather You Faild Or You have given Invalid Marks couse you got %f %c \n", total,percentageSign);
				
				break;
			}
				
		};
	}; 
	
		
		/*
		int Percent;
	
		printf("Student Number %d Enter Your Total Marks \n", i+1);
		scanf("%f", &AllStudentsTotalMarks[i]);
		Percentage[i] = AllStudentsTotalMarks[i] / 700 * 100;
		Percent = Percentage[i] / 10;
		switch(Percent){
			case 10:
			case 9:{
				printf("A++ You got %f \n", Percentage[i]);
				break;
			}
			case 8:
			case 7:{
				printf("A+ You got %f \n", Percentage[i]);
				break;
			}
			case 6:
			case 5:{
				printf("B+ You got %f \n", Percentage[i]);
				break;
			}
		    default:{
		    	printf("Fail \n");
				break;
			}
				
		}
		*/
	
	
		/*
		int TableNumber;
		printf("Add Which ever table You need  Like  Enter 2 For 2's Table = ");
		scanf(" %d", &TableNumber);
		for(int i=1;i<11;i++){
			printf("%d * %d = %d \n", TableNumber , i , TableNumber * i);
		}
	    */
	

};