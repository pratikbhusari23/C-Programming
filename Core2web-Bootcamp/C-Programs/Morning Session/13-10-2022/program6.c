/*
 
  4
  3 3 
  2 2 2 
  1 1 1 1 

  */

#include<stdio.h>

void main() {

	int rows;
	printf("Enter no of rows : ");
	scanf("%d",&rows);

	for(int i=rows ; i>=1 ; i--) {
		for(int j=rows ; j>=i ; j--) {

			printf("%d\t",i);
		
		}
		printf("\n");
	}
}
