/* wap to print even no is reverse order and odd numbers in the standard way .both seperately within a range */

#include<stdio.h>

void main() {
	int x,y;
	printf("Enter Start : ");
	scanf("%d",&x);
	printf("Enter End : ");
	scanf("%d",&y);
	
	for(int i=x ;i<=y;i++) {
		if(i%2!=0) {
			printf("%d\t",i);
		}
	
	}
	printf("\n");
	for(int i=y ;i>=x;i--) {
		if(i%2==0) {
			printf("%d\t",i);

		}
	}





}
