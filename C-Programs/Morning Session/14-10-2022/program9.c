/*
 
D	C	B	A
C	B	A
B	A
A

*/


#include<stdio.h>

void main() {
	
	int rows,num;
	printf("Enter no of rows : ");
	scanf("%d",&rows);

	for(int i=rows ; i>=1 ;i--) {
		num=i;
		for(int j=1 ; j<=i ; j++) {
			printf("%c\t",num+64);
			num--;
		}
		printf("\n");
	}
}

