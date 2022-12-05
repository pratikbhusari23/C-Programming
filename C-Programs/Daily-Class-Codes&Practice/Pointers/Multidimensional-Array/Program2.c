#include<stdio.h>

void main() {
	
	int arr[3][3]={1,2,3,4,5,6,7,8,9},sum=0,col;

	for(int row=0 ;row<3 ;row++) {
		for(int col =0 ;col<3 ;col++) {
			if(row==col) {
				sum=sum+arr[row][col];
				printf("%d\t",arr[row][col]);
			}
		}
		printf("\n");
	}
	printf("sum =%d\t\n",sum);
		
	
}
