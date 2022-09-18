#include<stdio.h>

void main() {

	int rows, cols;

	printf("Enter no of Rows : ");
	scanf("%d",&rows);
	printf("Enter no of cols : ");
	scanf("%d",&cols);

	for(int i=1 ;i<=rows ;i++) {
	
		for(int j=1 ;j<=cols ;j++) {
			if(i%2==0) {
				printf("$");
			
			}
			else {
				printf("=");
			}
		
		}
		printf("\n");
	
	}





}
