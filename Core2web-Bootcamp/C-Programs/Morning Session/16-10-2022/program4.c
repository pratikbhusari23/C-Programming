/*
 
d	d	d	d
	c	c	c
		b	b
			a
rows = 4

*/

#include<stdio.h>

void main() {
	
	int rows;
	printf("Enter no of rows : ");
	scanf("%d",&rows);

	for(int i=rows ; i>=1 ; i--) {
		for(int j=rows ; j>=1; j--) {
			if(j<=i) {
				printf("%c\t",i+96);
			
			}
			else {
				printf("\t");
			}
		
		}
		printf("\n");
		
	
	}


}
