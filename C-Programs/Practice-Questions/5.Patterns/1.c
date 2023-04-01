#include<stdio.h>
void main() {


	int rows,cols,x;

	printf("Enter no of rows : ");
	scanf("%d",&rows);
	printf("Enter no of Columns : ");
	scanf("%d",&cols);
	x=1;

	for(int i=1 ;i<=rows ;i++) {
		for(int j=1 ;j<=cols ;j++) {
		
			printf("%d ",x);
			x++;
		
		}
		x=i+1;
		printf("\n");
		
	}



}
