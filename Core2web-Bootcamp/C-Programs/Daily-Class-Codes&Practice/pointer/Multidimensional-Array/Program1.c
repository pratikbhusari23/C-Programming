#include<stdio.h>

void main() {
	
	int arr[2][3];

	for(int row=0 ;row<2 ;row++) {
		for(int col =0 ;col<3 ;col++) {
			scanf("%d",&arr[row][col]);
		}
	
	}
	for(int row=0 ;row<2 ;row++) {
		for(int col =0 ;col<3 ;col++) {
			printf("%d\t",arr[row][col]);
		}
		printf("\n");
	}
}


/*	int arr1[]={1,2,3,4,5,6,7,8,9};
	int arr2[5][2]={1,2,3,4,5,6,7,8,9};

	for(int i=0 ;i<5 ;i++) {
		for(int j=0 ;j<2 ;j++) {
			printf("%d",arr2[5][2]);
		}
		printf("\n");
	
*/


