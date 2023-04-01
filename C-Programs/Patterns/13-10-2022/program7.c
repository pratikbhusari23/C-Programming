/*
 
  c
  b b
  a a a 

  */

#include<stdio.h>

void main() {

	int rows ;
	printf("Enter no of rows : ");
	scanf("%d",&rows);

	for(int i=rows ; i>=1 ; i--) {
		for(int j=rows ; j>=i ; j--) {
			printf("%c",i+96);
		
		}
		printf("\n");
	
	}




}
