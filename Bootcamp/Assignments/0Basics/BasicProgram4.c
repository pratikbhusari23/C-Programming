/* Write a Program to Find minimum among Two Numbers */

#include<stdio.h>

void main() {
	int x;
	int y;
	printf("Enter no : ");
	scanf("%d",&x);
	printf("Enter no : ");
	scanf("%d",&y);
	if(x<y) {
		printf("%d is min among %d and %d \n",x,x,y);
	}else if(y<x) {
		printf("%d is min among %d and %d \n",y,x,y);
	}else {
		printf("Both are equal\n");
	}



}
