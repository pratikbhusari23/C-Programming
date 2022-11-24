/*

A	b	C	d
	e	G	i
		K	n
			q
rows = 4

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
				if(j%2==0) {
					printf("%c\t",num+96);
					num++;
				
				}
				else {
					printf("%c\t",num+64);
					num++;
				}

			}
		}
		printf("\n");
		
	
	}


}
