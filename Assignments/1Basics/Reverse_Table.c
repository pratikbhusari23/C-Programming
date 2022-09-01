/* Write a Program to Print the Table of 11 in reverse Order */

#include<stdio.h>

void main() {
	int x;
	printf("Enter No : ");
	scanf("%d",&x);
	
	for(int i=10 ;i>=1 ;i--) {
		printf("%d * %d = %d\n",x,i,x*i);
	
	}

}
