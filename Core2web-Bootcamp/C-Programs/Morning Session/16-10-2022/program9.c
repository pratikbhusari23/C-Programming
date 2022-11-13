/*

100	9	64	7
	36	5	16
		3	4
			1
rows = 4

*/

#include<stdio.h>

void main() {
	
	int rows,num=10;
	printf("Enter no of rows : ");
	scanf("%d",&rows);

	for(int i=1 ; i<=rows ; i++) {
		for(int j=1 ; j<=rows ; j++) {
			if(j<i) {
				printf("\t");
			
			}
			else {
				if(num%2==0) {
					printf("%d\t",num*num);
					num--;
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
