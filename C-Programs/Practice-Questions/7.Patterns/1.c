#include<stdio.h>

void main() {

	int rows,cols,p;
	printf("Enter no of rows : ");
	scanf("%d",&rows);
	printf("Enter no of Cols : ");
	scanf("%d",&cols);
	
	for(int i=1 ;i<=rows ;i++) {
		p=1;
		for(int j=1 ;j<=cols ;j++) {
			printf("%d\t",p);
			p=p+i;
	
		}printf("\n");
	}
}

