/*
 1	4	7
 10	13	16	
 19	22	25
  */
#include<stdio.h>

void main() {
	int rows,num=1;
	printf("Enter no of rows: ");
	scanf("%d",&rows);

	for(int i=1;i<=rows ;i++){
		for(int j=1 ;j<=rows ;j++){
			printf("%d\t",num);
			num+=3;	
		}
		
		printf("\n");
	
	}
}
