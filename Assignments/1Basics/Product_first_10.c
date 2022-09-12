/* Write a Progaram to Print The Product of First 10 numbers*/
#include<stdio.h>
void main() {
	int x=1,i;
	for( i=1 ;i<=10 ;i++) {
		printf("%d\n",i);
		x*=i;	
		
	}
	printf("Product of first 10 numbers = %d",x);
}
