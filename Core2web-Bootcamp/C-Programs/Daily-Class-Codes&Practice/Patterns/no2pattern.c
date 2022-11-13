/*
 
  *	  *
  ** 	 **
  ***	***
  **** ****
*/

#include<stdio.h>

void main() {
	
	int x;
	printf("Enter no of rows : ");
      	scanf("%d",&x); 	
 

	for(int i=1 ; i<=x ; i++) {
		for(int j=1 ;j<=i ; j++) {
			printf("*");
		
		}
		int space = 2*x-2*i;
		for(int k=1 ;k<=space ; k++){
			printf(" ");
		
		}
		for(int l=1 ; l<=i ; l++) {
			printf("*");
		}

		printf("\n");
	}
}
	
