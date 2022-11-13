/*
 					4
				4	3
			4	3	2
		4	3	2	1

*/
/*
#include<stdio.h>

void main() {
	
	int rows,num;
	printf("Enter no of rows : ");
	scanf("%d",&rows);

	for(int i=rows ; i>=1 ; i--) {
		num=rows;
		for(int j=1 ; j<i ; j++) {
			printf("\t");
		}
		for(int k=rows ; k>=i ; k--) {
			printf("%d\t",num);
			num--;
		
		}
		printf("\n");
	
	}



}
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
				printf("%d\t",num);
				num--;
			}
		}
		printf("\n");
	
	}



}

