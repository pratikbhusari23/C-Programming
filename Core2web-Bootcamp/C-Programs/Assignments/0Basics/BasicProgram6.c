/* Write a Program to Check Whether a no is Even or odd */

#include<stdio.h>
void main() {
	int x;
	printf("Enter no : ");
	scanf("%d",&x);

	if(x%2==0) {
		printf("%d is a even no \n",x);
	}else {
		printf("%d is odd no \n",x);
	}


}
