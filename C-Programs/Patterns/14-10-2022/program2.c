/*
 
  1 2 3 4
  1 2 3 
  1 2
  1

  */


#include<stdio.h>

void  main() {

	int rows;
	printf("Enter no of rows : ");
	scanf("%d",&rows);

	for(int i=rows ; i>=1 ; i--) {
		for(int j=1 ; j<=i ; j++) {
			printf("%d",j);
		}
		printf("\n");
	
	
	
	}






}
