/*
 
1	2	3	4
	1	2	3
		1	2
			1
rows = 3
			*/

#include<stdio.h>

void main() {
	
	int rows,num;
	printf("Enter no of rows : ");
	scanf("%d",&rows);

	for(int i=1 ; i<=rows ; i++) {
		num=1;
		for(int j=1 ; j<=rows ; j++) {
			if(j<i) {
				printf("\t");
			
			}
			else {
				printf("%d\t",num);
				num++;
			}
		
		}
		printf("\n");
		
	
	}


}
