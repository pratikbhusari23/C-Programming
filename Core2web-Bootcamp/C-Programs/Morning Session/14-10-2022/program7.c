/* 1 2 3 4 5
 * 2 3 4 5 
 * 3 4 5 
 * 4 5 
 * 5 
 */

#include<stdio.h>

void main() {


	int rows,x,m=1;

	printf("Enter no of rows : ");
	scanf("%d",&rows);

	for(int i=rows ; i>=1 ; i--) {
		x=m;
		for(int j=1 ; j<=i ; j++) {
			printf("%d",x);
			x++;
		}
		m++;
		printf("\n");
	
	
	}


}
