/*
 
 3
 6 9
 12 15 18

*/ 


#include<stdio.h>

void main() {

	int rows,num=1;
	printf("Enter no of rows : ");
	scanf("%d",&rows);

/*	for(int i=1 ; i<=rows ;i++) {
		for(int j=1 ;j<=i ;j++) {
			printf("%d\t",num*3);
			num++;
		
		}
		printf("\n");
	
	
	}
*/
	int k=rows;
	for(int i=1 ; i<=rows ;i++) {
	
		for(int j=1 ;j<=i ;j++) {
			printf("%d\t",k);
			k+=3;
		
		}
		printf("\n");
	
	
	}

}
