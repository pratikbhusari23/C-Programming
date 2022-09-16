#include<stdio.h>

void main() {

	
	int rows,cols,x;

	printf("Enter no of Rows : ");
	scanf("%d",&rows);
	printf("Enter no of cols : ");
	scanf("%d",&cols);

	x=rows;

	for(int i=1 ;i<=rows ;i++) {
		for(int j=1 ;j<=cols ;j++) {
			if(i%2!=0) {
				printf("%c ",x+64);
			}
			else {
				printf("%c ",x+96);
			}
			x--;
		}
		x=rows+i;
		printf("\n");
	
	}





}
