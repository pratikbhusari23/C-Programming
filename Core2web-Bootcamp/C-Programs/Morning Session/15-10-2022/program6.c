/*
 				5
			5	6
		5	4	3
	5	6	7	8
5	4	3	2	1

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
			}
			else {
				if(i%2==0) {
					printf("%d\t",num);
					num++;
				}
				else {
					printf("%d\t",num);
					num--;
				}
			}	
		}
		printf("\n");
	}
}
