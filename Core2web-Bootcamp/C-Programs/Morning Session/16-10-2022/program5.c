/*
 
a	B	c	D
	E	f	G
		h	I
			J

rows = 4

*/

#include<stdio.h>

void main() {
	
	int rows,k=1;
	printf("Enter no of rows : ");
	scanf("%d",&rows);

	for(int i=1 ; i<=rows ; i++) {
		for(int j=1 ; j<=rows ; j++) {
			if(j<i) {
				printf("\t");
			
			}
			else {
				if(j%2==0) {
					printf("%c\t",k+64);
					k++;
				}
				else {
					printf("%c\t",k+96);
					k++;
				}
		
			}
		}
		printf("\n");
		
	
	}


}
