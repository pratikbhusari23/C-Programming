/*
 *

4	3	2	1
C	B	A
2	1
A

*/

#include<stdio.h>

void main() {
	
	int rows,num;
	printf("Enter no of rows : ");
	scanf("%d",&rows);

	for(int i=rows ; i>=1 ; i--) {
		num=i;
		for(int j=1 ; j<=i ; j++) {
			if(i%2==0) {
				printf("%d\t",num);
				num--;
			}
			else {
				printf("%c\t",num+64);
				num--;	
			}	
		}
		printf("\n");

	}
}
