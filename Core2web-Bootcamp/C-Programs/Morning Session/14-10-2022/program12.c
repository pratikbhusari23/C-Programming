/*
 *
4	3	2	1
4	3	2
4	3
4

*/

#include<stdio.h>

void main() {
	
	int rows,num;
	printf("Enter no of rows : ");
	scanf("%d",&rows);

	for(int i=1; i<=rows; i++) {
		for(int j=rows ; j>=i ; j--) {
			printf("%d\t",j);
		
		}
		printf("\n");
	}
}
		
