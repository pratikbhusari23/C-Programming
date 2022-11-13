/* Write a Program to that takes a no from 0 to 5 ,and print its Spelling */

#include<stdio.h>
void main() {
	int x;
	printf("Enter No : ");
	scanf("%d",&x);

	switch(x) {
		case 0 : 
			printf("Zero\n");
			break;
		case 1 : 
			printf("One\n");
			break;
		case 2 :
			printf("Two\n");
			break;
		case 3 :
			printf("Three\n");
			break;
		case 4 : 
			printf("Four\n");
			break;
		case 5 : 
			printf("Five\n");
			break;
		default :
			printf("Enter No Ranging Between 0 to 5 Only\n");
			break;
	}


}
