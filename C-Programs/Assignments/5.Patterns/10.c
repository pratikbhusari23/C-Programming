#include<stdio.h>

void main() {

	int rows ,cols;

	printf("Enter no of rows : ");
	scanf("%d",&rows);
	printf("Enter no of cols : ");
	scanf("%d",&cols);

	for(int i=1 ;i<=rows ;i++) {
		char ch='D';
		for(int j=cols ;j>=1 ;j--) {
			printf("%c%d\t",ch,j);
			ch--;
		}
		printf("\n");
	}
}
				
