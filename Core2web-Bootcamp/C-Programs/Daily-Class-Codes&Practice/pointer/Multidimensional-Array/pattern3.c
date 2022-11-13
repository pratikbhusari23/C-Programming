#include<stdio.h>

void main() {
	
	int rows,cols;
	printf("Enter Size Of Array : ");
	scanf("%d%d",&rows,&cols);

	int arr[rows][cols];
 	printf("Enter Array Elements : \n");
	for(int i=0 ,j=0 ;i<x ,j<y;i++ ,j++) {
		scanf("%d",&arr[i][j]);

	}

	for(int row=0 ;row<x ;row++) {
		for(int col =0 ;col<y ;col++) {
	
			printf("%d\t",arr[row][col]);
	
		}
	
	printf("\n");
	}
		
	
}

