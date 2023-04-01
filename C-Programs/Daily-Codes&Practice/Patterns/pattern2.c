/*
 
  *		*
       	*
  *		*
 

*/

#include<stdio.h>

void main() {
	
	int x,y;
	printf("Enter no of rows : ");
	scanf("%d",&x);
	for(int i=0 ; i<=x ;i++) {
		for(int j=0 ;j<=x ;j++) {
			
			if(i==j) {
				printf("*\t");
			
			}
			else if(i+j==x){
				printf("*\t");
			}
			else {
				printf(" \t");
			}	
		}
		printf("\n");
	}
}
