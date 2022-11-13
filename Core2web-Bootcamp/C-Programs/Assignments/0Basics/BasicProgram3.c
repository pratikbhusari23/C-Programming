/* Write a Program to find max Among two numbers */

#include<stdio.h>

void main() {
	int x;
	int y;
	printf("Enter First no : ");
	scanf("%d",&x);
	printf("Enter Second no : ");
	scanf("%d",&y);
	if(x>y) {
		printf("%d is Max among %d and %d\n",x,x,y);
	}else if(y>x) {
		printf("%d is Max among %d and %d\n",y,x,y);
	}else {
		printf("Both are equal\n");
	}






}
