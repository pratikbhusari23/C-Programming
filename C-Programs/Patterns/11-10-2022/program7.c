#include<stdio.h>

void main() {
	int rows;
	printf("Enter no of rows: ");
	scanf("%d",&rows);

	for(int i=rows;i>=1 ;i--){
		for(int j=1 ;j<=4 ;j++){
			printf("%d\t",i);
		
		}
		printf("\n");
	
	}


}
