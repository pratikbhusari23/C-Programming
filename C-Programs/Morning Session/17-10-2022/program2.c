/*

				4
			3	3	3
		2	2	2	2	2
	1	1	1	1	1	1	1

*/

#include<stdio.h>

void main(){

	int rows,num;
	printf("Enter no of rows : ");
	scanf("%d",&rows);
	num=rows;
	for(int i=1;i<=rows;i++){
		for(int j=1 ;j<=rows-i ;j++){
			printf("\t");
			
		}
		for(int k=1 ; k<=2*i-1 ;k++){
			printf("%d\t",num);
		
		}
		num--;
		printf("\n");
	}

}
