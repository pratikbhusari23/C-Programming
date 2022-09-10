#include<stdio.h>

void main() {

	int rows,cols,x;


	printf("Enter no of Rows : ");
	scanf("%d",&rows);
	printf("Enter no of cols : ");
	scanf("%d",&cols);
	
	x=rows*cols*2;

	for(int i=1 ;i<=rows ;i++) {
		for(int j=1 ;j<=cols ;j++) {
			printf("%d\t",x);
			x=x-2;
		}
		printf("\n");
	}	
}
