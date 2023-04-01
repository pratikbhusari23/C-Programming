/* Write a Program to Check whether given number is a Multiple of 3 */

#include<stdio.h>

void main() {

	int x;

	printf("Enter no : ");
	scanf("%d",&x);

	if(x%3==0) {
		printf("%d is a Multiple of 3\n",x);
		
	}
	else {
		printf("%d is not a Multiple of 3\n",x);
	}
	


}
