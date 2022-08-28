/* Write a Program to check whether the given input is Pythogorean Triplet or Not */

#include<stdio.h>

void main() {
	int x ;
	int y ;
	int z ;

	printf("Enter Smallest no among Three : ");
	scanf("%d",&x);
	printf("Enter Medium no among Three : ");
	scanf("%d",&y);
	printf("Enter Largest no among Three : ");
	scanf("%d",&z);
	
	if(x*x + y*y == z*z) {
		printf("Yes it is a Pythogorean Triplet and their value is %d \n",z*z);
	}else {
		printf("NO It is not a Pythogorean Triplet\n");
	}


}
