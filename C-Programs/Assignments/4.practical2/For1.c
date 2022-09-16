/* Write a Program to Print The sum of no not divsilbe by 3 upto input given */

#include<stdio.h>
void main() {
	int x;
	int y=0;

	printf("Enter no : ");
	scanf("%d",&x);

	for(int i=1 ;i<=x ;i++) {
		if(i%3!=0) {
			y=y+i;
		
		}
	}
	printf("%d",y) ;

}
