#include<stdio.h>

void main() {
	
	int rows,cols;
	printf("Enter Size Of Array :\n ");
	scanf("%d%d",&rows,&cols);

	int arr[rows][cols];
 	printf("Enter Array Elements : \n");
	for(int i=0 ;i<rows ;i++) {
		for(int j=0 ;j<cols ;j++) {
			scanf("%d", &arr[i][j]);

	}
	}
	for(int i=0 ;i<rows ;i++) {
		for(int j=0 ;j<cols ;j++) {
			if(arr[i][j]%2==0) {
				printf("%d\t",arr[i][j]*10);
			}
			else {
				printf("%d\t",arr[i][j]);
			}
		}
		printf("\n");
	}	
	
}	
