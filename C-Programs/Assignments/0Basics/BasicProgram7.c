/* Write as program to take a number and print whether it is less than 10 or greater than 10.
 */

#include<stdio.h>

void main() {
	int x;
	printf("Enter no : ");
	scanf("%d",&x);
	if(x>10) {
		printf("%d is greater than 10\n",x);
	}else if(x<10) {
		printf("%d is lesser than 10\n",x);
	}else {
		printf("%d is equal to 10\n",x);
	}
}
