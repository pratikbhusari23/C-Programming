/* Write a Progarm to Print table of 12 */

#include<stdio.h>

void main() {

	int x;
	printf("Enter No : ");
	scanf("%d",&x);

	for(int i=1 ;i<=10 ;i++) {
		printf("%d * %d = %d\n",x,i,x*i);
	
	}


}
