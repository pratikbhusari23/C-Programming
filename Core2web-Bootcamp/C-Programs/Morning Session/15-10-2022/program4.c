/*
 
  		1
	4	7
10	13	16

rows=4

			1
		5	9
	13	17	21
25	29	33	37

*/


#include<stdio.h>

void main() {
	
	int rows,num;
	printf("Enter no of rows : ");
	scanf("%d",&rows);
	num=1;
	for(int i=1 ; i<=rows ; i++) {
		for(int j=1 ; j<=rows ; j++) {
			if(j<=rows-i) {
				printf("\t");
			}
			else {
				printf("%d\t",num);
				num+=rows;
			}
		}
			printf("\n");	
	}
}

