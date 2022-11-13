#include<stdio.h>

void main() {
	
	int rows,num=1;
	printf("Enter no of rows : ");
	scanf("%d",&rows);

//	for(int i=1 , j=1 ; i<=rows , j<=rows ; i++ , j++) {
	for(int i=1 ; i<=rows ; i++) {
		for(int j=1 ; j<=rows ; j++) {
			if(j<=rows-i) {
				printf("%d\t",num++);
			}
			else {
				printf("\t");

			}
		}
		printf("\n");
	
	}



}
