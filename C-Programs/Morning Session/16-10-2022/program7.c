/*
 
4	3	2	1
	3	2	1
		2	1
			1
rows = 4

*/

#include<stdio.h>

void main() {
	
	int rows;
	printf("Enter no of rows : ");
	scanf("%d",&rows);

	for(int i=rows ; i>=1 ; i--) {
		for(int j=rows ; j>=1 ; j--) {
			if(j<=i) {
				printf("%d\t",j);
			
			}
			else {
				printf("\t");
			}
		
		}
		printf("\n");
		
	
	}


}
