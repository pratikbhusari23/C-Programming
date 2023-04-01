/*
 
1	2	3	4
	2	3	4
		3	4
			4

rows = 4 

*/
#include<stdio.h>

void main() {
	
	int rows;
	printf("Enter no of rows : ");
	scanf("%d",&rows);

	for(int i=1 ; i<=rows ; i++) {
		for(int j=1 ; j<=rows ; j++) {
			if(j<i) {
				printf("\t");
			
			}
			else {
				printf("%d\t",j);
			}
		
		}
		printf("\n");
		
	
	}


}
