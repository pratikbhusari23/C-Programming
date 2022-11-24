/*

a	B	c	D
	e	F	g
		h	I
			j
rows = 4

*/

#include<stdio.h>

void main() {
	
	int rows,num=1;
	printf("Enter no of rows : ");
	scanf("%d",&rows);

	for(int i=1 ; i<=rows ; i++) {
		for(int j=1 ; j<=rows ; j++) {
			if(j<i) {
				printf("\t");
			
			}
			else {

			}
		}
		printf("\n");
		
	
	}


}

/*
#include<stdio.h>

void main() {
	
	int rows,num=1;
	printf("Enter no of rows : ");
	scanf("%d",&rows);

	for(int i=1 ; i<=rows ; i++) {
		for(int k=1 ; k<i ; k++) {
			printf("\t");
		
		}
		for(int j=rows ; j>=i ; j--) {
			if(j%2==0) {
				printf("%c\t",num+96);
				num++;
			}

			else {
				printf("%c\t",num+64);
				num++;
			}
		}
		printf("\n");
	}
}
*/
