/* Write a Program to Check whether the given input is a leap year or not */

#include<stdio.h>

void main() {
	int x;
	printf("Enter Year : ");
	scanf("%d",&x);

	if(x%4==0 && x>=1000) {
		printf("%d is a Leap year\n",x);
	}else if(x<1000) {
		
		printf("%d is not a Valid Year\n",x);
	
	}
	else {
		printf("%d is not a Leap Year\n",x);
	}

}
