/* a b c d
 * a b c
 * a b
 * a 
 *
 */




#include<stdio.h>

void main() {

	int rows ; 

	printf("Enter no of rows : ");
	scanf("%d",&rows);

	for(int i=rows; i>=1 ;i--)  {
		for(int j=1 ; j<=i ; j++) {

			printf("%c\t",j+96);
		
		}
		printf("\n");
	
	}




}
