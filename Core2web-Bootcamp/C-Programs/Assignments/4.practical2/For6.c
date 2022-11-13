/* take an input from the userr and count the no of digits */

#include<stdio.h>
void main() {
	int x,count=0;
	printf("Enter no : ");
	scanf("%d",&x);
	while(x!=0) {
		x=x/10 ;
		count++ ;
	}
	printf("Count =%d",count);

	
	
}
