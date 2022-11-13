/*
 

  a 
  b c 
  d e f 
  g h i j 

  */

#include<stdio.h>

void main() {

	int rows ,ch=97;
	printf("Enter no of rows : ");
	scanf("%d",&rows);

	for(int i=1 ; i<=rows ; i++) {
		for(int j=1 ;j<=i ; j++) {
			printf("%c\t",ch++);
		
		}
		printf("\n");
	
	}



}
