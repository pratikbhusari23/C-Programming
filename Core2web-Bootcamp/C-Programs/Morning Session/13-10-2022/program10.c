/*
 
  10
  I	H
  7	6	5
  D	C	B	A

  */

#include<stdio.h>

void main() {

	int rows,num=10;

	printf("Enter no of rows : ");
	scanf("%d",&rows);

	for(int i=1 ; i<=rows ;i++){
		for(int j=1 ; j<=i ; j++) {
			if(i%2==0) {
				printf("%c\t",num+64);
			
			}
			else {
				printf("%d\t",num);
			}
			num--;
		}
		printf("\n");
	
	}


}
