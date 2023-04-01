#include<stdio.h>

void main() {
	
	int arr[3][3]={1,20,3,40,5,60,7,80,9},sum=0,col;

	for(int row=0 ;row<2 ;row++) {
		for(int col =0 ;col<3 ;col++) {
			sum=sum+arr[row][col];
			printf("%d\t",arr[row][col]);
			
		}
		printf("\n");
	}
	printf("sum =%d\t\n",sum);
		
	
}
