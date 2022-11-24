/*
 
  				D
			c	D
		B	c	D
	a	B	c	D

*/


#include<stdio.h>

void main() {
	
	int rows,num;
	printf("Enter no of rows : ");
	scanf("%d",&rows);

	for(int i=1 ; i<=rows ; i++) {
		num=1;
		for(int j=1 ; j<=rows ; j++) {
			if(j<=rows-i) {
				printf("\t");
				num++;	
			}
			else {
				if(j%2==0) {
					printf("%c\t",num+64);
					num++;
				}
				else {
					printf("%c\t",num+96);
					num++;
				}
			}
		}
		printf("\n");	
	}
}
