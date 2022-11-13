/*
 
1	2	3	4
	5	6	7
		8	9
			10

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
				printf("%d\t",num);
				num++;
			}
		
		}
		printf("\n");
		
	
	}


}
