/* Write a program in which according to the month number , print the no of days in the month */

#include<stdio.h>

void main() {

	int x;
	printf("Enter Months's no : ");
	scanf("%d",&x);

	switch(x) {
		case 1 :
			printf("No of days in January are 31\n");
			break;
		case 2 : 
			printf("No of days in February are 28\n");
			break;
		case 3 :
			printf("No of days in March are 31\n");
			break;
		case 4 : 

			printf("No of days in April are 30\n");
			break;
		case 5 : 
			printf("No of days in May are 31\n");
			break;
		case 6 : 
			printf("No of days in June are 30\n");
			break;
		case 7 : 
			printf("No of days in July are 31\n");
			break;
		case 8 : 
			printf("No of days in August are 30\n");
			break;
		case 9 : 
			printf("No of days in September are 30");
			break;
		case 10 : 
			printf("No of days in October are 31\n");
			break;
		case 11 : 
			printf("No of days in November are 30\n");
			break;
		case 12 : 
			printf("No of days in December are 31\n");
			break;
		default :
			printf("Please Enter Valid Month No\n");
			break;
	
	}




}
