/*
 
  				d
			c	c	
		b	b	b
	a	a	a	a	

*/

/*
#include<stdio.h>

void main() {
	
	int rows,num;
	printf("Enter no of rows : ");
	scanf("%d",&rows);
	num=rows;
	for(int i=rows ; i>=1 ; i--) {
		for(int j=1 ; j<i ; j++) {
			printf("\t");
		}
		for(int k=rows ; k>=i ; k--) {
			printf("%c\t",num+96);
		}
		num--;
		printf("\n");
	}
}
*/

#include<stdio.h>

void main() {
	
	int rows,num;
	printf("Enter no of rows : ");
	scanf("%d",&rows);
	num=rows;
	for(int i=1 ; i<=rows ; i++) {
		for(int j=1 ; j<=rows ; j++) {
			if(j<=rows-i) {
				printf("\t");
			
			}	
			else {
				printf("%c\t",num+96);
			}
			
		}
		num--;
		printf("\n");

	}
}
