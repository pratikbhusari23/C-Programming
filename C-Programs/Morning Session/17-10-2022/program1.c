/*

 			*
		*	*	*
	*	*	*	*	*
*	*	*	*	*	*	*

*/

#include<stdio.h>

void main(){

	int rows;
	printf("Enter no of rows : ");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		for(int j=1 ;j<=rows-i ;j++){
			printf("\t");
			
		}
		for(int k=1 ; k<=2*i-1 ;k++){
			printf("*\t");
			
		}
		printf("\n");
	}

}
