/*
 
  1
  1 2 
  1 2 3
  1 2 3 4

  */

#include<stdio.h>

void main() {

	int rows;

	printf("Enter no of rows : ");
	scanf("%d",&rows);

	for(int i=1 ;i<=rows ;i++) {
		for(int j=1 ; j<=i ;j++) {
			printf("%d\t",j);
		
		
		}
		printf("\n");
	
	}




}
