/*
 
  d	d	d	d
  c	c	c	c
  b	b	b	b	
  a	a	a	a	

  */

#include<stdio.h>

void main() {
	int rows,num=97;
	printf("Enter no of rows: ");
	scanf("%d",&rows);

	for(int i=rows;i>=1 ;i--){
		for(int j=rows ;j>=1 ;j--){
			printf("%c\t",i+64);
				
		}
		
		printf("\n");
	
	}
}
