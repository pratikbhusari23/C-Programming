#include<stdio.h>

void main(){

	int rows=4;
	for(int i=0 ; i<rows ; i++){
		for(int j=rows-1-i ; j>0 ; j--){

			printf("*\t");
		
		}
		printf("\n");
	}


}
