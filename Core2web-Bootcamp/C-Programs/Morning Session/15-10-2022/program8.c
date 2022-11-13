/*
 
  				1
			A	b
		1	2	3
	A	b	C	d

*/


#include<stdio.h>

void main() {
	
	int rows,num,num1;
	printf("Enter no of rows : ");
	scanf("%d",&rows);

	for(int i=1 ; i<=rows ; i++) {
		num=1;
		num1=1;
		for(int j=1 ; j<=rows ; j++) {
		
			if(j<=rows-i) {
				printf("\t");
			}
			else {
				if(i%2==0) {
					if(j%2==0) {
						printf("%c\t",num+96);
						num++;
					}
					else {
						printf("%c\t",num+64);
						num++;
					}
				}
				else {
					printf("%d\t",num1);
					num1++;
			
				}
			}
	
		}
		printf("\n");
	}
}
