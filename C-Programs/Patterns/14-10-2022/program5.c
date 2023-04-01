/*	4 3 2 1
 *	3 2 1
 *	2 1
 *	1
 *
 */


#include<stdio.h>

void main() {

	int rows;

	printf("Enter no of rows : ");
	scanf("%d",&rows);

	for(int i=rows ; i>=1 ; i--) {
		for(int j=i ; j>=1 ; j--) {

			printf("%d\t",j);
		
		
		}
		printf("\n");
	
	}


}
