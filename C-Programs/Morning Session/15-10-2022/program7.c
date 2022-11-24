/*
 
 				A
			b	a
		C	E	G
	d	c	b	a
E	G	I	K	M

*/

#include<stdio.h>

void main() {
	
	int rows,num;
	printf("Enter no of rows : ");
	scanf("%d",&rows);

	for(int i=1 ; i<=rows ; i++) {
		num=rows;
		for(int j=1 ; j<=rows ; j++) {
			if(j<=rows-i) {
				printf("\t");
				num--;	
			}
			else {
				if(i%2==0) {
					printf("%c\t",num+96);
					num--;
				}
				else {
					printf("%c\t",num+64);
					num+=2;
				
				}
			}
		}
		printf("\n");
	}
}
