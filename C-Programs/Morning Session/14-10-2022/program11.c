/*
 
1	2	3	4
4	5	6
6	7
7

*/


#include<stdio.h>

void main() {
	
	int rows,num=1;
	printf("Enter no of rows : ");
	scanf("%d",&rows);

	for(int i=rows ; i>=1 ; i--) {
		for(int j=1 ; j<=i ; j++) {
			printf("%d\t",num);
			num++;
		
		}
		num--;
		printf("\n");
	}
}
