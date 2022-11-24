#include<stdio.h>

void main() {
	int rows,no=65;
	printf("Enter no of rows: ");
	scanf("%d",&rows);

	for(int i=1;i<=rows ;i++){
		for(int j=1 ;j<=rows ;j++){
			printf("%c\t",no);
	
		}
		
		printf("\n");
		no++;
	}
}
