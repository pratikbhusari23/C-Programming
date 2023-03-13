#include<stdio.h>

void main(){

	int rows=4;
	for(int i=1 ; i<=rows ; i++){
		for(int j=rows ; j>i ; j--){

			printf("\t");
		
		}
	
		for(int j=1 ; j<=i ; j++){

			printf("%d\t",j);
		}
		printf("\n");
	}


}
